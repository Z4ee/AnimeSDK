#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/FrameOnePointInCorePolicy.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class AspectRatioPolicy_Default; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0xF133E90)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_GETDATA_OFFSET UNITYSDK_OFFSET(0xF134030)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0xF134860)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_METHOD_4_0BC937355C326A37_OFFSET UNITYSDK_OFFSET(0xF134BC0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_METHOD_4_439B588EB4881570_OFFSET UNITYSDK_OFFSET(0xF134F00)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_METHOD_4_5A60CCF7370A1875_OFFSET UNITYSDK_OFFSET(0xF134E10)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_METHOD_4_834919B5E4C42716_OFFSET UNITYSDK_OFFSET(0xF134B10)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_METHOD_4_83ED25F6A8C66D20_OFFSET UNITYSDK_OFFSET(0xF134D60)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_METHOD_4_C1397965C8E8E75A_1_OFFSET UNITYSDK_OFFSET(0xF134A60)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_METHOD_4_C1397965C8E8E75A_OFFSET UNITYSDK_OFFSET(0xF1349B0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_SETPATH_OFFSET UNITYSDK_OFFSET(0xF133DF0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF__CCTOR_OFFSET UNITYSDK_OFFSET(0xF1348D0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF__CTOR_OFFSET UNITYSDK_OFFSET(0xF134870)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int FrameOnePointInCorePolicy_ByHSF_TypeDefinitionIndex = 47224;

	class FrameOnePointInCorePolicy_ByHSF : public ::PipelineCamera::CameraSequence::FrameOnePointInCorePolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_fieldOfView()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_ByHSF_TypeDefinitionIndex)->GetStaticField(0x12C40);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_screenOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_ByHSF_TypeDefinitionIndex)->GetStaticField(0x12C48);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_heightRatio()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_ByHSF_TypeDefinitionIndex)->GetStaticField(0x12C50);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityHeight()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_ByHSF_TypeDefinitionIndex)->GetStaticField(0x12C58);
		}
		::PipelineCamera::CameraSequence::AspectRatioPolicy_Default* aspectRatio; // 0x40
		::System::Single EntityHeight; // 0x48
		::System::Single heightRatio; // 0x4C
		::System::Single fieldOfView; // 0x50
		::UnityEngine::Vector2 screenOffset; // 0x54
		::System::Boolean makeContextDependent; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_SETPATH_OFFSET))(this, a1);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::PipelineCamera::WorldBasicCameraData GetData(::System::Single a1, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a2, ::UnityEngine::Vector3 a3)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_GETDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Single Method_4_C1397965C8E8E75A(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_METHOD_4_C1397965C8E8E75A_OFFSET))(this, a1);
		}

		::System::Single Method_4_C1397965C8E8E75A_1(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_METHOD_4_C1397965C8E8E75A_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 Method_4_834919B5E4C42716(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_METHOD_4_834919B5E4C42716_OFFSET))(this, a1);
		}

		static ::System::Single Method_4_0BC937355C326A37(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_METHOD_4_0BC937355C326A37_OFFSET))(a1, a2, a3, a4);
		}

		::System::Single Method_4_83ED25F6A8C66D20(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_METHOD_4_83ED25F6A8C66D20_OFFSET))(this, a1);
		}

		::System::Void Method_4_5A60CCF7370A1875(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_METHOD_4_5A60CCF7370A1875_OFFSET))(this, a1);
		}

		::System::Void Method_4_439B588EB4881570(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYHSF_METHOD_4_439B588EB4881570_OFFSET))(this, a1);
		}
	};
}
