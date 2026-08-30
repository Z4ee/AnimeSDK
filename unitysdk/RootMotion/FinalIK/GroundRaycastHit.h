#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }

#define ROOTMOTION_FINALIK_GROUNDRAYCASTHIT_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x3AFA180)
#define ROOTMOTION_FINALIK_GROUNDRAYCASTHIT_GET_ISVALIDHITINTHREAD_OFFSET UNITYSDK_OFFSET(0x182E0)
#define ROOTMOTION_FINALIK_GROUNDRAYCASTHIT_GET_ISVALIDHIT_OFFSET UNITYSDK_OFFSET(0x3AFA110)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GroundRaycastHit_TypeDefinitionIndex = 44847;

	struct alignas(4) GroundRaycastHit
	{
		::System::Boolean hit; // 0x10
		::System::Int32 colliderID; // 0x14
		::System::Single distance; // 0x18
		::UnityEngine::Vector3 normal; // 0x1C
		::UnityEngine::Vector3 point; // 0x28

		::System::Boolean get_IsValidHit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDRAYCASTHIT_GET_ISVALIDHIT_OFFSET))(this);
		}

		::System::Boolean get_IsValidHitInThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDRAYCASTHIT_GET_ISVALIDHITINTHREAD_OFFSET))(this);
		}

		::UnityEngine::Collider* get_Collider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDRAYCASTHIT_GET_COLLIDER_OFFSET))(this);
		}
	};
}
