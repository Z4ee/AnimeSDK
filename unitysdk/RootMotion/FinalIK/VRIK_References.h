#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion { class BipedReferences; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_VRIK_REFERENCES_AUTODETECTREFERENCES_OFFSET UNITYSDK_OFFSET(0x1EE55B20)
#define ROOTMOTION_FINALIK_VRIK_REFERENCES_GETTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1EE436B0)
#define ROOTMOTION_FINALIK_VRIK_REFERENCES_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1EE551C0)
#define ROOTMOTION_FINALIK_VRIK_REFERENCES_GET_ISFILLED_OFFSET UNITYSDK_OFFSET(0x1EE427E0)
#define ROOTMOTION_FINALIK_VRIK_REFERENCES__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EE55080)
#define ROOTMOTION_FINALIK_VRIK_REFERENCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE55070)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int VRIK_References_TypeDefinitionIndex = 38842;

	class VRIK_References : public ::System::Object
	{
	public:
		::UnityEngine::Transform* root; // 0x10
		::UnityEngine::Transform* pelvis; // 0x18
		::UnityEngine::Transform* spine; // 0x20
		::UnityEngine::Transform* chest; // 0x28
		::UnityEngine::Transform* neck; // 0x30
		::UnityEngine::Transform* head; // 0x38
		::UnityEngine::Transform* leftShoulder; // 0x40
		::UnityEngine::Transform* leftUpperArm; // 0x48
		::UnityEngine::Transform* leftForearm; // 0x50
		::UnityEngine::Transform* leftHand; // 0x58
		::UnityEngine::Transform* rightShoulder; // 0x60
		::UnityEngine::Transform* rightUpperArm; // 0x68
		::UnityEngine::Transform* rightForearm; // 0x70
		::UnityEngine::Transform* rightHand; // 0x78
		::UnityEngine::Transform* leftThigh; // 0x80
		::UnityEngine::Transform* leftCalf; // 0x88
		::UnityEngine::Transform* leftFoot; // 0x90
		::UnityEngine::Transform* leftToes; // 0x98
		::UnityEngine::Transform* rightThigh; // 0xA0
		::UnityEngine::Transform* rightCalf; // 0xA8
		::UnityEngine::Transform* rightFoot; // 0xB0
		::UnityEngine::Transform* rightToes; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIK_REFERENCES__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RootMotion::BipedReferences* b)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::BipedReferences*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIK_REFERENCES__CTOR_1_OFFSET))(this, b);
		}

		::Il2CppArray<::UnityEngine::Transform*>* GetTransforms()
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIK_REFERENCES_GETTRANSFORMS_OFFSET))(this);
		}

		::System::Boolean get_isFilled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIK_REFERENCES_GET_ISFILLED_OFFSET))(this);
		}

		::System::Boolean get_isEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIK_REFERENCES_GET_ISEMPTY_OFFSET))(this);
		}

		static ::System::Boolean AutoDetectReferences(::UnityEngine::Transform* root, ::RootMotion::FinalIK::VRIK_References*& references)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::RootMotion::FinalIK::VRIK_References*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VRIK_REFERENCES_AUTODETECTREFERENCES_OFFSET))(root, references);
		}
	};
}
