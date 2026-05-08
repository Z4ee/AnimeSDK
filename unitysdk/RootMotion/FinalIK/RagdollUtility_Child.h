#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_CHILD_FIXTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C3A3CE0)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_CHILD_STORELOCALSTATE_OFFSET UNITYSDK_OFFSET(0x1C3A3E90)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_CHILD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3A3C50)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int RagdollUtility_Child_TypeDefinitionIndex = 36675;

	class RagdollUtility_Child : public ::System::Object
	{
	public:
		::UnityEngine::Transform* t; // 0x10
		::UnityEngine::Vector3 localPosition; // 0x18
		::UnityEngine::Quaternion localRotation; // 0x24

		::System::Void _ctor(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_CHILD__CTOR_OFFSET))(this, transform);
		}

		::System::Void FixTransform(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_CHILD_FIXTRANSFORM_OFFSET))(this, weight);
		}

		::System::Void StoreLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_CHILD_STORELOCALSTATE_OFFSET))(this);
		}
	};
}
