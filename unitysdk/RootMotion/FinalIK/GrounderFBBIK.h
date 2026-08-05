#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/Grounder.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class FullBodyBipedIK; }
namespace RootMotion::FinalIK { class GrounderFBBIK_SpineEffector; }
namespace RootMotion::FinalIK { class Grounding_Leg; }
namespace RootMotion::FinalIK { class IKEffector; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_GROUNDERFBBIK_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1FA59AA0)
#define ROOTMOTION_FINALIK_GROUNDERFBBIK_INITIATE_OFFSET UNITYSDK_OFFSET(0x1FA59650)
#define ROOTMOTION_FINALIK_GROUNDERFBBIK_ISREADYTOINITIATE_OFFSET UNITYSDK_OFFSET(0x1FA59350)
#define ROOTMOTION_FINALIK_GROUNDERFBBIK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1FA59AB0)
#define ROOTMOTION_FINALIK_GROUNDERFBBIK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1FA5A310)
#define ROOTMOTION_FINALIK_GROUNDERFBBIK_ONPOSTSOLVERUPDATE_OFFSET UNITYSDK_OFFSET(0x1FA5A300)
#define ROOTMOTION_FINALIK_GROUNDERFBBIK_ONSOLVERUPDATE_OFFSET UNITYSDK_OFFSET(0x1FA59AC0)
#define ROOTMOTION_FINALIK_GROUNDERFBBIK_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1FA592C0)
#define ROOTMOTION_FINALIK_GROUNDERFBBIK_OPENTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1FA59220)
#define ROOTMOTION_FINALIK_GROUNDERFBBIK_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1FA59270)
#define ROOTMOTION_FINALIK_GROUNDERFBBIK_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x1FA59310)
#define ROOTMOTION_FINALIK_GROUNDERFBBIK_SETLEGIK_OFFSET UNITYSDK_OFFSET(0x1FA5A0D0)
#define ROOTMOTION_FINALIK_GROUNDERFBBIK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FA594B0)
#define ROOTMOTION_FINALIK_GROUNDERFBBIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA5A560)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GrounderFBBIK_TypeDefinitionIndex = 38860;

	class GrounderFBBIK : public ::RootMotion::FinalIK::Grounder
	{
	public:
		::RootMotion::FinalIK::FullBodyBipedIK* ik; // 0x50
		::System::Single spineBend; // 0x58
		::System::Single spineSpeed; // 0x5C
		::Il2CppArray<::RootMotion::FinalIK::GrounderFBBIK_SpineEffector*>* spine; // 0x60
		::Il2CppArray<::UnityEngine::Transform*>* feet; // 0x68
		::UnityEngine::Vector3 spineOffset; // 0x70
		::System::Boolean firstSolve; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERFBBIK__CTOR_OFFSET))(this);
		}

		::System::Void OpenTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERFBBIK_OPENTUTORIAL_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERFBBIK_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERFBBIK_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void ResetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERFBBIK_RESETPOSITION_OFFSET))(this);
		}

		::System::Boolean IsReadyToInitiate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERFBBIK_ISREADYTOINITIATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERFBBIK_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERFBBIK_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERFBBIK_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Initiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERFBBIK_INITIATE_OFFSET))(this);
		}

		::System::Void OnSolverUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERFBBIK_ONSOLVERUPDATE_OFFSET))(this);
		}

		::System::Void SetLegIK(::RootMotion::FinalIK::IKEffector* effector, ::RootMotion::FinalIK::Grounding_Leg* leg)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKEffector*, ::RootMotion::FinalIK::Grounding_Leg*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERFBBIK_SETLEGIK_OFFSET))(this, effector, leg);
		}

		::System::Void OnPostSolverUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERFBBIK_ONPOSTSOLVERUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERFBBIK_ONDESTROY_OFFSET))(this);
		}
	};
}
