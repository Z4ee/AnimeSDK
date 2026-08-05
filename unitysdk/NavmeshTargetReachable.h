#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define NAVMESHTARGETREACHABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FB7FA00)
#define NAVMESHTARGETREACHABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB7FF90)

inline static constexpr unsigned int NavmeshTargetReachable_TypeDefinitionIndex = 94986;

class NavmeshTargetReachable : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Transform* target; // 0x18
	::UnityEngine::AI::NavMeshHit hit; // 0x20
	::System::Boolean blocked; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHTARGETREACHABLE__CTOR_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHTARGETREACHABLE_UPDATE_OFFSET))(this);
	}
};
