#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/FrameTwoPointsInCorePolicy.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::FlowCanvas::Nodes { class AspectRatioProvider; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x148587B0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_GETDATA_OFFSET UNITYSDK_OFFSET(0x14858950)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1485AA30)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_0BC937355C326A37_OFFSET UNITYSDK_OFFSET(0x1485B9A0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_14818C3563DF6DE0_OFFSET UNITYSDK_OFFSET(0x1485B4E0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_24B1E1DE85E3C92F_OFFSET UNITYSDK_OFFSET(0x1485B420)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_2E16F53A4F27C49D_1_OFFSET UNITYSDK_OFFSET(0x1485BD80)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_2E16F53A4F27C49D_OFFSET UNITYSDK_OFFSET(0x1485B830)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_439B588EB4881570_OFFSET UNITYSDK_OFFSET(0x1485B390)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_5A60CCF7370A1875_OFFSET UNITYSDK_OFFSET(0x1485ADD0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x1485B1C0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_83ED25F6A8C66D20_OFFSET UNITYSDK_OFFSET(0x1485B600)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_10_OFFSET UNITYSDK_OFFSET(0x1485BCC0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_1_OFFSET UNITYSDK_OFFSET(0x1485AF80)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_2_OFFSET UNITYSDK_OFFSET(0x1485B040)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_3_OFFSET UNITYSDK_OFFSET(0x1485B100)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_4_OFFSET UNITYSDK_OFFSET(0x1485B2D0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_5_OFFSET UNITYSDK_OFFSET(0x1485B6B0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_6_OFFSET UNITYSDK_OFFSET(0x1485B770)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_7_OFFSET UNITYSDK_OFFSET(0x1485B8E0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_8_OFFSET UNITYSDK_OFFSET(0x1485BB40)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_9_OFFSET UNITYSDK_OFFSET(0x1485BC00)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_OFFSET UNITYSDK_OFFSET(0x1485AEC0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_SETPATH_OFFSET UNITYSDK_OFFSET(0x14858710)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1485AAB0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1485AA40)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex = 65187;

	class FrameTwoPointsInCorePolicy_LevelSettlement : public ::PipelineCamera::CameraSequence::FrameTwoPointsInCorePolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_minSubVerticalOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0xF550);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_IsPlayerOnLeft()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0xF558);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_minAngle()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0xF560);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_IsMainOnLeft()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0xF568);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_maxSubVerticalOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0xF570);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_heightRatio()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0xF578);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_ensureSubVerticalOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0xF580);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_roll()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0xF588);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_MainHeight()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0xF590);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_mainVerticalOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0xF598);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_maxAngle()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0xF5A0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_mainHorizontalOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0xF5A8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_LastCameraData()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0xF5B0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_fieldOfView()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0xF5B8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_pitch()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0xF5C0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_subHorizontalOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0xF5C8);
		}
		::MoleMole::FlowCanvas::Nodes::AspectRatioProvider* aspectRatio; // 0x40
		::System::Single heightRatio; // 0x48
		::System::Single fieldOfView; // 0x4C
		::System::Single pitch; // 0x50
		::System::Single roll; // 0x54
		::System::Single minAngle; // 0x58
		::System::Single maxAngle; // 0x5C
		::System::Single subHorizontalOffset; // 0x60
		::System::Single mainHorizontalOffset; // 0x64
		::System::Single mainVerticalOffset; // 0x68
		::System::Boolean ensureSubVerticalOffset; // 0x6C
		::System::Single minSubVerticalOffset; // 0x70
		::System::Single maxSubVerticalOffset; // 0x74
		::System::Single minPitch; // 0x78
		::System::Single maxPitch; // 0x7C
		::System::Boolean makeContextDependent; // 0x80
		::System::Boolean IsMainOnLeft; // 0x81
		::System::Boolean IsPlayerOnLeft; // 0x82
		::System::Single MainHeight; // 0x84
		::PipelineCamera::WorldBasicCameraData LastCameraData; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_SETPATH_OFFSET))(this, a1);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::PipelineCamera::WorldBasicCameraData GetData(::System::Single a1, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_GETDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void Method_4_5A60CCF7370A1875(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_5A60CCF7370A1875_OFFSET))(this, a1);
		}

		::System::Single Method_4_C1397965C8E8E75A(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_OFFSET))(this, a1);
		}

		::System::Single Method_4_C1397965C8E8E75A_1(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_1_OFFSET))(this, a1);
		}

		::System::Single Method_4_C1397965C8E8E75A_2(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_2_OFFSET))(this, a1);
		}

		::System::Single Method_4_C1397965C8E8E75A_3(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_3_OFFSET))(this, a1);
		}

		::System::Void Method_4_7033EFB970A18315()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_7033EFB970A18315_OFFSET))(this);
		}

		::System::Single Method_4_C1397965C8E8E75A_4(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_4_OFFSET))(this, a1);
		}

		::System::Void Method_4_439B588EB4881570(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_439B588EB4881570_OFFSET))(this, a1);
		}

		::System::Boolean Method_4_24B1E1DE85E3C92F(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_24B1E1DE85E3C92F_OFFSET))(this, a1);
		}

		::PipelineCamera::WorldBasicCameraData Method_4_14818C3563DF6DE0(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_14818C3563DF6DE0_OFFSET))(this, a1);
		}

		::System::Single Method_4_83ED25F6A8C66D20(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_83ED25F6A8C66D20_OFFSET))(this, a1);
		}

		::System::Single Method_4_C1397965C8E8E75A_5(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_5_OFFSET))(this, a1);
		}

		::System::Single Method_4_C1397965C8E8E75A_6(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_6_OFFSET))(this, a1);
		}

		::System::Boolean Method_4_2E16F53A4F27C49D(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_2E16F53A4F27C49D_OFFSET))(this, a1);
		}

		::System::Single Method_4_C1397965C8E8E75A_7(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_7_OFFSET))(this, a1);
		}

		static ::System::Single Method_4_0BC937355C326A37(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_0BC937355C326A37_OFFSET))(a1, a2, a3, a4);
		}

		::System::Single Method_4_C1397965C8E8E75A_8(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_8_OFFSET))(this, a1);
		}

		::System::Single Method_4_C1397965C8E8E75A_9(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_9_OFFSET))(this, a1);
		}

		::System::Single Method_4_C1397965C8E8E75A_10(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_C1397965C8E8E75A_10_OFFSET))(this, a1);
		}

		::System::Boolean Method_4_2E16F53A4F27C49D_1(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_METHOD_4_2E16F53A4F27C49D_1_OFFSET))(this, a1);
		}
	};
}
