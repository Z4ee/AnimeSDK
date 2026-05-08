#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Config/CameraSequence/Utils/CameraRotationBasedOnEntityPolicy.h"
#include "unitysdk/MoleMole/Config/CameraSequence/Utils/CameraRotationBasedOnEntityPolicy_ByEulerOffset_Struct_2_0A6AE3C0591CCDCC.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x12415180)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_GETDATA_OFFSET UNITYSDK_OFFSET(0x12415330)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x12415320)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_METHOD_4_439B588EB4881570_OFFSET UNITYSDK_OFFSET(0x12415590)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_METHOD_4_5A60CCF7370A1875_OFFSET UNITYSDK_OFFSET(0x12415620)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_METHOD_4_C4E80F21AB9896CD_OFFSET UNITYSDK_OFFSET(0x12415510)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_SETPATH_OFFSET UNITYSDK_OFFSET(0x124150E0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x12415460)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x12415440)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int CameraRotationBasedOnEntityPolicy_ByEulerOffset_TypeDefinitionIndex = 68519;

	class CameraRotationBasedOnEntityPolicy_ByEulerOffset : public ::MoleMole::Config::CameraSequence::Utils::CameraRotationBasedOnEntityPolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_yawOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraRotationBasedOnEntityPolicy_ByEulerOffset_TypeDefinitionIndex)->GetStaticField(0xCE80);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_pitchOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraRotationBasedOnEntityPolicy_ByEulerOffset_TypeDefinitionIndex)->GetStaticField(0xCE88);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_rollOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraRotationBasedOnEntityPolicy_ByEulerOffset_TypeDefinitionIndex)->GetStaticField(0xCE90);
		}
		::System::Single pitchOffset; // 0x40
		::System::Single yawOffset; // 0x44
		::System::Single rollOffset; // 0x48
		::System::Boolean flipForward; // 0x4C
		::System::Boolean makeContextDependent; // 0x4D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_SETPATH_OFFSET))(this, a1);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetData(::System::Single a1, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a2, ::System::UInt32 a3, ::Nap::NapECS::EcsWorld* a4)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_GETDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::MoleMole::Config::CameraSequence::Utils::CameraRotationBasedOnEntityPolicy_ByEulerOffset_Struct_2_0A6AE3C0591CCDCC Method_4_C4E80F21AB9896CD(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::MoleMole::Config::CameraSequence::Utils::CameraRotationBasedOnEntityPolicy_ByEulerOffset_Struct_2_0A6AE3C0591CCDCC(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_METHOD_4_C4E80F21AB9896CD_OFFSET))(this, a1);
		}

		::System::Void Method_4_439B588EB4881570(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_METHOD_4_439B588EB4881570_OFFSET))(this, a1);
		}

		::System::Void Method_4_5A60CCF7370A1875(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_METHOD_4_5A60CCF7370A1875_OFFSET))(this, a1);
		}
	};
}
