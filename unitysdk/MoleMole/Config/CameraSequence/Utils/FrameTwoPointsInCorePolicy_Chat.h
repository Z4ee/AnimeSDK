#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/FrameTwoPointsInCorePolicy.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::FlowCanvas::Nodes { class AspectRatioProvider; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x12A4B150)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_GETDATA_OFFSET UNITYSDK_OFFSET(0x12A4B2F0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x12A4BD70)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_METHOD_4_14818C3563DF6DE0_OFFSET UNITYSDK_OFFSET(0x12A4C900)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_METHOD_4_439B588EB4881570_OFFSET UNITYSDK_OFFSET(0x12A4C340)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_METHOD_4_5A60CCF7370A1875_OFFSET UNITYSDK_OFFSET(0x12A4C1A0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_METHOD_4_660E6E01F1B2AE8E_OFFSET UNITYSDK_OFFSET(0x12A4C3D0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_METHOD_4_83ED25F6A8C66D20_1_OFFSET UNITYSDK_OFFSET(0x12A4C290)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_METHOD_4_83ED25F6A8C66D20_OFFSET UNITYSDK_OFFSET(0x12A4C0F0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_METHOD_4_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x12A4BEA0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_SETPATH_OFFSET UNITYSDK_OFFSET(0x12A4B0B0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A4BDF0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT__CTOR_OFFSET UNITYSDK_OFFSET(0x12A4BD80)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int FrameTwoPointsInCorePolicy_Chat_TypeDefinitionIndex = 67719;

	class FrameTwoPointsInCorePolicy_Chat : public ::PipelineCamera::CameraSequence::FrameTwoPointsInCorePolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_TargetHeight()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x11300);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_PlayerHeight()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x11308);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_BeginCameraData()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x11310);
		}
		::MoleMole::FlowCanvas::Nodes::AspectRatioProvider* aspectRatio; // 0x40
		::System::Single heightRatio; // 0x48
		::System::Single minPlayerHeightRatio; // 0x4C
		::System::Single maxPlayerHeightRatio; // 0x50
		::System::Single fieldOfView; // 0x54
		::System::Single pitch; // 0x58
		::System::Single minAngle; // 0x5C
		::System::Single maxAngle; // 0x60
		::System::Single subHorizontalOffset; // 0x64
		::System::Single mainHorizontalOffset; // 0x68
		::System::Single mainVerticalOffset; // 0x6C
		::System::Single minTargetVerticalOffset; // 0x70
		::System::Single maxTargetVerticalOffset; // 0x74
		::System::Single minPitch; // 0x78
		::System::Single maxPitch; // 0x7C
		::System::Single PlayerHeight; // 0x80
		::System::Single TargetHeight; // 0x84
		::PipelineCamera::WorldBasicCameraData BeginCameraData; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_SETPATH_OFFSET))(this, a1);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::PipelineCamera::WorldBasicCameraData GetData(::System::Single a1, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_GETDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void Method_4_F0BD65B017F2AC0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_METHOD_4_F0BD65B017F2AC0B_OFFSET))(this);
		}

		::System::Single Method_4_83ED25F6A8C66D20(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_METHOD_4_83ED25F6A8C66D20_OFFSET))(this, a1);
		}

		::System::Void Method_4_5A60CCF7370A1875(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_METHOD_4_5A60CCF7370A1875_OFFSET))(this, a1);
		}

		::System::Single Method_4_83ED25F6A8C66D20_1(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_METHOD_4_83ED25F6A8C66D20_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_439B588EB4881570(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_METHOD_4_439B588EB4881570_OFFSET))(this, a1);
		}

		static ::System::ValueTuple_2<::System::Boolean, ::System::Single> Method_4_660E6E01F1B2AE8E(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::PipelineCamera::WorldBasicCameraData& a4)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::Single>(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_METHOD_4_660E6E01F1B2AE8E_OFFSET))(a1, a2, a3, a4);
		}

		::PipelineCamera::WorldBasicCameraData Method_4_14818C3563DF6DE0(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_METHOD_4_14818C3563DF6DE0_OFFSET))(this, a1);
		}
	};
}
