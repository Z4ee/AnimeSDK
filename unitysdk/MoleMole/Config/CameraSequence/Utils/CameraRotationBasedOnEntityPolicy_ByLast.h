#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Config/CameraSequence/Utils/CameraRotationBasedOnEntityPolicy.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x162A3070)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_GETDATA_OFFSET UNITYSDK_OFFSET(0x162A3210)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x162A3890)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_METHOD_4_14818C3563DF6DE0_OFFSET UNITYSDK_OFFSET(0x162A3D20)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_METHOD_4_439B588EB4881570_OFFSET UNITYSDK_OFFSET(0x162A3EF0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_METHOD_4_5A60CCF7370A1875_OFFSET UNITYSDK_OFFSET(0x162A39D0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_METHOD_4_8067ABEE1E847951_OFFSET UNITYSDK_OFFSET(0x162A3440)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_METHOD_4_8958B8FE55CDB36F_OFFSET UNITYSDK_OFFSET(0x162A3C40)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_METHOD_4_C1397965C8E8E75A_1_OFFSET UNITYSDK_OFFSET(0x162A3B80)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_METHOD_4_C1397965C8E8E75A_2_OFFSET UNITYSDK_OFFSET(0x162A3E30)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_METHOD_4_C1397965C8E8E75A_OFFSET UNITYSDK_OFFSET(0x162A3AC0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_SETPATH_OFFSET UNITYSDK_OFFSET(0x162A2FD0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST__CCTOR_OFFSET UNITYSDK_OFFSET(0x162A38C0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST__CTOR_OFFSET UNITYSDK_OFFSET(0x162A38A0)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int CameraRotationBasedOnEntityPolicy_ByLast_TypeDefinitionIndex = 61740;

	class CameraRotationBasedOnEntityPolicy_ByLast : public ::MoleMole::Config::CameraSequence::Utils::CameraRotationBasedOnEntityPolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityRotation()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraRotationBasedOnEntityPolicy_ByLast_TypeDefinitionIndex)->GetStaticField(0x10A30);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_pitch()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraRotationBasedOnEntityPolicy_ByLast_TypeDefinitionIndex)->GetStaticField(0x10A38);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_roll()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraRotationBasedOnEntityPolicy_ByLast_TypeDefinitionIndex)->GetStaticField(0x10A40);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_LastCameraData()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraRotationBasedOnEntityPolicy_ByLast_TypeDefinitionIndex)->GetStaticField(0x10A48);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_yaw()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraRotationBasedOnEntityPolicy_ByLast_TypeDefinitionIndex)->GetStaticField(0x10A50);
		}
		::System::Boolean overridePitch; // 0x40
		::System::Single pitch; // 0x44
		::System::Boolean overrideYaw; // 0x48
		::System::Single yaw; // 0x4C
		::System::Boolean overrideRoll; // 0x50
		::System::Single roll; // 0x54
		::PipelineCamera::WorldBasicCameraData LastCameraData; // 0x58
		::System::Boolean useRelativeYaw; // 0x84
		::UnityEngine::Quaternion EntityRotation; // 0x88
		::System::Boolean makeContextDependent; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_SETPATH_OFFSET))(this, a1);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion GetData(::System::Single a1, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a2, ::System::UInt32 a3, ::Nap::NapECS::EcsWorld* a4)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_GETDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void Method_4_5A60CCF7370A1875(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_METHOD_4_5A60CCF7370A1875_OFFSET))(this, a1);
		}

		::System::Single Method_4_C1397965C8E8E75A(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_METHOD_4_C1397965C8E8E75A_OFFSET))(this, a1);
		}

		::System::Single Method_4_C1397965C8E8E75A_1(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_METHOD_4_C1397965C8E8E75A_1_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion Method_4_8958B8FE55CDB36F(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_METHOD_4_8958B8FE55CDB36F_OFFSET))(this, a1);
		}

		::PipelineCamera::WorldBasicCameraData Method_4_14818C3563DF6DE0(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_METHOD_4_14818C3563DF6DE0_OFFSET))(this, a1);
		}

		::System::Single Method_4_C1397965C8E8E75A_2(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_METHOD_4_C1397965C8E8E75A_2_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_4_8067ABEE1E847951(::PipelineCamera::CameraSequence::CameraSequenceContext*& a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_METHOD_4_8067ABEE1E847951_OFFSET))(this, a1);
		}

		::System::Void Method_4_439B588EB4881570(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_METHOD_4_439B588EB4881570_OFFSET))(this, a1);
		}
	};
}
