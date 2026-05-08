#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Config/CameraSequence/Utils/FrameMultiplePointsInCorePolicy_ChatByScore_Struct_2_F3159D6CA15F934C.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/FrameMultiplePointsInCorePolicy.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class AspectRatioPolicy; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x110238B0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_GETDATA_OFFSET UNITYSDK_OFFSET(0x11023A60)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x11023A50)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_METHOD_3_439B588EB4881570_OFFSET UNITYSDK_OFFSET(0x11024000)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_METHOD_3_47ABBFA84E9D76E4_OFFSET UNITYSDK_OFFSET(0x11023F20)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_METHOD_3_5A60CCF7370A1875_OFFSET UNITYSDK_OFFSET(0x11024090)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_SETPATH_OFFSET UNITYSDK_OFFSET(0x11023810)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE__CCTOR_OFFSET UNITYSDK_OFFSET(0x11023CD0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x11023CA0)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex = 70863;

	class FrameMultiplePointsInCorePolicy_ChatByScore : public ::PipelineCamera::CameraSequence::FrameMultiplePointsInCorePolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_maxAngle()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xA850);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_sampleStep()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xA858);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_overlapPenalty()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xA860);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_deviationPenalty()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xA868);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_variancePenalty()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xA870);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_minRadius()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xA878);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_heightOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xA880);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_minAngle()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xA888);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_horizontalRatio()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xA890);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_pitch()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xA898);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_fieldOfView()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xA8A0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_BeginCameraData()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xA8A8);
		}
		// static const ::System::Single TargetRadius; // 0x0
		::System::Single minRadius; // 0x40
		::System::Single heightOffset; // 0x44
		::System::Single horizontalRatio; // 0x48
		::System::Int32 minAngle; // 0x4C
		::System::Int32 maxAngle; // 0x50
		::System::Single fieldOfView; // 0x54
		::System::Single deviationPenalty; // 0x58
		::System::Single overlapPenalty; // 0x5C
		::System::Single variancePenalty; // 0x60
		::System::Single pitch; // 0x64
		::System::Int32 sampleStep; // 0x68
		::UnityEngine::LayerMask layerMask; // 0x6C
		::PipelineCamera::CameraSequence::AspectRatioPolicy* aspectRatioPolicy; // 0x70
		::System::Boolean makeContextDependent; // 0x78
		::PipelineCamera::WorldBasicCameraData BeginCameraData; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_SETPATH_OFFSET))(this, a1);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetData(::System::Single a1, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a2, ::UnityEngine::Vector3 a3, ::System::Span_1<::UnityEngine::Vector3> a4)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3, ::System::Span_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_GETDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::MoleMole::Config::CameraSequence::Utils::FrameMultiplePointsInCorePolicy_ChatByScore_Struct_2_F3159D6CA15F934C Method_3_47ABBFA84E9D76E4(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::MoleMole::Config::CameraSequence::Utils::FrameMultiplePointsInCorePolicy_ChatByScore_Struct_2_F3159D6CA15F934C(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_METHOD_3_47ABBFA84E9D76E4_OFFSET))(this, a1);
		}

		::System::Void Method_3_439B588EB4881570(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_METHOD_3_439B588EB4881570_OFFSET))(this, a1);
		}

		::System::Void Method_3_5A60CCF7370A1875(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_METHOD_3_5A60CCF7370A1875_OFFSET))(this, a1);
		}
	};
}
