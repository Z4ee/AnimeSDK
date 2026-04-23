#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODYIKBONEREFERENCES_METHOD_2_99919161C4ADBACD_OFFSET UNITYSDK_OFFSET(0xD7830)
#define RPG_CLIENT_FULLBODYIKBONEREFERENCES_METHOD_2_EF192CF256CBA210_OFFSET UNITYSDK_OFFSET(0xD7820)

namespace RPG::Client
{
	inline static constexpr unsigned int FullBodyIKBoneReferences_TypeDefinitionIndex = 63264;

	struct alignas(8) FullBodyIKBoneReferences
	{
		::UnityEngine::Transform* root; // 0x10
		::UnityEngine::Transform* pelvis; // 0x18
		::UnityEngine::Transform* leftThigh; // 0x20
		::UnityEngine::Transform* leftCalf; // 0x28
		::UnityEngine::Transform* leftFoot; // 0x30
		::UnityEngine::Transform* rightThigh; // 0x38
		::UnityEngine::Transform* rightCalf; // 0x40
		::UnityEngine::Transform* rightFoot; // 0x48
		::UnityEngine::Transform* leftUpperArm; // 0x50
		::UnityEngine::Transform* leftForearm; // 0x58
		::UnityEngine::Transform* leftHand; // 0x60
		::UnityEngine::Transform* rightUpperArm; // 0x68
		::UnityEngine::Transform* rightForearm; // 0x70
		::UnityEngine::Transform* rightHand; // 0x78
		::UnityEngine::Transform* head; // 0x80
		::Il2CppArray<::UnityEngine::Transform*>* spine; // 0x88

		::System::Boolean Method_2_EF192CF256CBA210()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODYIKBONEREFERENCES_METHOD_2_EF192CF256CBA210_OFFSET))(this);
		}

		::System::Boolean Method_2_99919161C4ADBACD(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODYIKBONEREFERENCES_METHOD_2_99919161C4ADBACD_OFFSET))(this, a1, a2, a3);
		}
	};
}
