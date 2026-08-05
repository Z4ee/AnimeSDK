#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/Grounder.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IK; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_GROUNDERIK_INITIATE_OFFSET UNITYSDK_OFFSET(0x1F8AB850)
#define ROOTMOTION_FINALIK_GROUNDERIK_ISREADYTOINITIATE_OFFSET UNITYSDK_OFFSET(0x1F8AA810)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F8ACF30)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F8AABC0)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONPOSTSOLVERUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8ACC20)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONSOLVERUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8ABFE0)
#define ROOTMOTION_FINALIK_GROUNDERIK_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1F8AA200)
#define ROOTMOTION_FINALIK_GROUNDERIK_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1F8AA1B0)
#define ROOTMOTION_FINALIK_GROUNDERIK_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x1F8AA250)
#define ROOTMOTION_FINALIK_GROUNDERIK_SETLEGIK_OFFSET UNITYSDK_OFFSET(0x1F8AC490)
#define ROOTMOTION_FINALIK_GROUNDERIK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F8AADB0)
#define ROOTMOTION_FINALIK_GROUNDERIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8AD1E0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GrounderIK_TypeDefinitionIndex = 38798;

	class GrounderIK : public ::RootMotion::FinalIK::Grounder
	{
	public:
		::Il2CppArray<::RootMotion::FinalIK::IK*>* legs; // 0x50
		::UnityEngine::Transform* pelvis; // 0x58
		::Il2CppArray<::UnityEngine::Transform*>* attachments; // 0x60
		::UnityEngine::Transform* characterRoot; // 0x68
		::System::Single rootRotationWeight; // 0x70
		::System::Single rootRotationSpeed; // 0x74
		::System::Single maxRootRotationAngle; // 0x78
		::Il2CppArray<::UnityEngine::Transform*>* feet; // 0x80
		::Il2CppArray<::UnityEngine::Quaternion>* footRotations; // 0x88
		::UnityEngine::Vector3 animatedPelvisLocalPosition; // 0x90
		::UnityEngine::Vector3 solvedPelvisLocalPosition; // 0x9C
		::System::Int32 solvedFeet; // 0xA8
		::System::Boolean solved; // 0xAC
		::System::Single lastWeight; // 0xB0
		::UnityEngine::Rigidbody* characterRootRigidbody; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void ResetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_RESETPOSITION_OFFSET))(this);
		}

		::System::Boolean IsReadyToInitiate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_ISREADYTOINITIATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_UPDATE_OFFSET))(this);
		}

		::System::Void Initiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_INITIATE_OFFSET))(this);
		}

		::System::Void OnSolverUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_ONSOLVERUPDATE_OFFSET))(this);
		}

		::System::Void SetLegIK(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_SETLEGIK_OFFSET))(this, index);
		}

		::System::Void OnPostSolverUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_ONPOSTSOLVERUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_ONDESTROY_OFFSET))(this);
		}
	};
}
