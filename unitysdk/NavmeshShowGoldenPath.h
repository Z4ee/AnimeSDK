#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class NavMeshAgent; }
namespace UnityEngine::AI { class NavMeshPath; }

#define NAVMESHSHOWGOLDENPATH_RAYCASTSPHERE_OFFSET UNITYSDK_OFFSET(0x1C46B160)
#define NAVMESHSHOWGOLDENPATH_START_OFFSET UNITYSDK_OFFSET(0x1C46A5D0)
#define NAVMESHSHOWGOLDENPATH_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C46A660)
#define NAVMESHSHOWGOLDENPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C46B7A0)

inline static constexpr unsigned int NavmeshShowGoldenPath_TypeDefinitionIndex = 85479;

class NavmeshShowGoldenPath : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Transform* target; // 0x18
	::System::Single radius; // 0x20
	::System::Single timer; // 0x24
	::UnityEngine::AI::NavMeshAgent* agent; // 0x28
	::UnityEngine::AI::NavMeshPath* navpath; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* path; // 0x38
	::Il2CppArray<::UnityEngine::Vector3>* navMeshPathCorners; // 0x40
	::System::Single elapsed; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHSHOWGOLDENPATH__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHSHOWGOLDENPATH_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHSHOWGOLDENPATH_UPDATE_OFFSET))(this);
	}

	::System::Boolean RaycastSphere(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Single radius, ::UnityEngine::AI::NavMeshHit& hit, ::UnityEngine::Vector3& correctedPos, ::System::Int32 areaMask)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AI::NavMeshHit&, ::UnityEngine::Vector3&, ::System::Int32))((::PBYTE)hIl2Cpp + NAVMESHSHOWGOLDENPATH_RAYCASTSPHERE_OFFSET))(this, start, end, radius, hit, correctedPos, areaMask);
	}
};
