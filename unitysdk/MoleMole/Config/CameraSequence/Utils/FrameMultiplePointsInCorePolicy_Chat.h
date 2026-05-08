#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/FrameMultiplePointsInCorePolicy.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config::CameraSequence::Utils { class FrameTwoPointsInCorePolicy_Chat; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0xF9757C0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_GETDATA_OFFSET UNITYSDK_OFFSET(0xF975960)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0xF9772E0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_039520BBA66362E2_OFFSET UNITYSDK_OFFSET(0xF977570)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_0BC937355C326A37_OFFSET UNITYSDK_OFFSET(0xF9779C0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_14818C3563DF6DE0_OFFSET UNITYSDK_OFFSET(0xF978740)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_2A00B01FC7DAA3A7_OFFSET UNITYSDK_OFFSET(0xF9784D0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_439B588EB4881570_OFFSET UNITYSDK_OFFSET(0xF9774E0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_5A60CCF7370A1875_OFFSET UNITYSDK_OFFSET(0xF977C10)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_665A2A86C3DB15E2_OFFSET UNITYSDK_OFFSET(0xF977D00)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_718E382165851819_OFFSET UNITYSDK_OFFSET(0xF9776D0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_83ED25F6A8C66D20_1_OFFSET UNITYSDK_OFFSET(0xF977910)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_83ED25F6A8C66D20_2_OFFSET UNITYSDK_OFFSET(0xF977B60)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_83ED25F6A8C66D20_3_OFFSET UNITYSDK_OFFSET(0xF977DB0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_83ED25F6A8C66D20_4_OFFSET UNITYSDK_OFFSET(0xF978690)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_83ED25F6A8C66D20_5_OFFSET UNITYSDK_OFFSET(0xF978850)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_83ED25F6A8C66D20_6_OFFSET UNITYSDK_OFFSET(0xF978900)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_83ED25F6A8C66D20_OFFSET UNITYSDK_OFFSET(0xF977860)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_D9C5942334FA9FC6_OFFSET UNITYSDK_OFFSET(0xF977E60)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_SETPATH_OFFSET UNITYSDK_OFFSET(0xF975720)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT__CCTOR_OFFSET UNITYSDK_OFFSET(0xF977320)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT__CTOR_OFFSET UNITYSDK_OFFSET(0xF9772F0)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int FrameMultiplePointsInCorePolicy_Chat_TypeDefinitionIndex = 73195;

	class FrameMultiplePointsInCorePolicy_Chat : public ::PipelineCamera::CameraSequence::FrameMultiplePointsInCorePolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_heightRatio()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x10FA0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_fieldOfView()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x10FA8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_radius()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x10FB0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_maxAngle()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x10FB8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_heightOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x10FC0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_deltaHeightToPitch()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x10FC8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_PlayerHeight()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x10FD0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_minAngle()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x10FD8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_BeginCameraData()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x10FE0);
		}
		::System::Single radius; // 0x40
		::System::Single heightOffset; // 0x44
		::System::Single heightRatio; // 0x48
		::System::Single PlayerHeight; // 0x4C
		::System::Single minAngle; // 0x50
		::System::Single maxAngle; // 0x54
		::System::Single fieldOfView; // 0x58
		::UnityEngine::LayerMask layerMask; // 0x5C
		::PipelineCamera::WorldBasicCameraData BeginCameraData; // 0x60
		::UnityEngine::AnimationCurve* deltaHeightToPitch; // 0x90
		::MoleMole::Config::CameraSequence::Utils::FrameTwoPointsInCorePolicy_Chat* fallback; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_SETPATH_OFFSET))(this, a1);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::PipelineCamera::WorldBasicCameraData GetData(::System::Single a1, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a2, ::UnityEngine::Vector3 a3, ::System::Span_1<::UnityEngine::Vector3> a4)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3, ::System::Span_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_GETDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void Method_3_439B588EB4881570(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_439B588EB4881570_OFFSET))(this, a1);
		}

		::System::Single Method_3_039520BBA66362E2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_039520BBA66362E2_OFFSET))(this, a1, a2, a3);
		}

		static ::UnityEngine::Vector3 Method_3_718E382165851819(::System::Span_1<::UnityEngine::Vector3> a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::System::Span_1<::UnityEngine::Vector3>, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_718E382165851819_OFFSET))(a1, a2);
		}

		::System::Single Method_3_83ED25F6A8C66D20(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_83ED25F6A8C66D20_OFFSET))(this, a1);
		}

		::System::Single Method_3_83ED25F6A8C66D20_1(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_83ED25F6A8C66D20_1_OFFSET))(this, a1);
		}

		static ::System::Single Method_3_0BC937355C326A37(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_0BC937355C326A37_OFFSET))(a1, a2, a3, a4);
		}

		::System::Single Method_3_83ED25F6A8C66D20_2(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_83ED25F6A8C66D20_2_OFFSET))(this, a1);
		}

		::System::Void Method_3_5A60CCF7370A1875(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_5A60CCF7370A1875_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* Method_3_665A2A86C3DB15E2(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_665A2A86C3DB15E2_OFFSET))(this, a1);
		}

		::System::Single Method_3_83ED25F6A8C66D20_3(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_83ED25F6A8C66D20_3_OFFSET))(this, a1);
		}

		::System::Single Method_3_D9C5942334FA9FC6(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_D9C5942334FA9FC6_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 Method_3_2A00B01FC7DAA3A7(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_2A00B01FC7DAA3A7_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_3_83ED25F6A8C66D20_4(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_83ED25F6A8C66D20_4_OFFSET))(this, a1);
		}

		::PipelineCamera::WorldBasicCameraData Method_3_14818C3563DF6DE0(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_14818C3563DF6DE0_OFFSET))(this, a1);
		}

		::System::Single Method_3_83ED25F6A8C66D20_5(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_83ED25F6A8C66D20_5_OFFSET))(this, a1);
		}

		::System::Single Method_3_83ED25F6A8C66D20_6(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_METHOD_3_83ED25F6A8C66D20_6_OFFSET))(this, a1);
		}
	};
}
