#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::AI { class NavMeshAgent; }

#define RANDOMWALK_START_OFFSET UNITYSDK_OFFSET(0x1BB26370)
#define RANDOMWALK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BB26440)
#define RANDOMWALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB26540)

inline static constexpr unsigned int RandomWalk_TypeDefinitionIndex = 56784;

class RandomWalk : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single m_Range; // 0x18
	::UnityEngine::AI::NavMeshAgent* m_Agent; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMWALK__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMWALK_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMWALK_UPDATE_OFFSET))(this);
	}
};
