#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace UnityEngine::AI { class NavMeshAgent; }

#define CLICKTOMOVE_START_OFFSET UNITYSDK_OFFSET(0x1306A300)
#define CLICKTOMOVE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1306A3D0)
#define CLICKTOMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1306A780)

inline static constexpr unsigned int ClickToMove_TypeDefinitionIndex = 50401;

class ClickToMove : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::AI::NavMeshAgent* m_Agent; // 0x18
	::UnityEngine::RaycastHit m_HitInfo; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLICKTOMOVE__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLICKTOMOVE_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLICKTOMOVE_UPDATE_OFFSET))(this);
	}
};
