#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/FrameOnePointInCorePolicy.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1BABEB10)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE_FETCH_LASTCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1BABECB0)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE_GETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BABE370)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1BABE470)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1BABE8A0)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE_SETPATH_OFFSET UNITYSDK_OFFSET(0x1BABEA70)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BABE990)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BABE8B0)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BABEDE0)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BABEDC0)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE___BASE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1BABEE70)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE___BASE_SETPATH_OFFSET UNITYSDK_OFFSET(0x1BABEF60)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FrameOnePointInCorePolicy_Freeze_TypeDefinitionIndex = 36290;

	class FrameOnePointInCorePolicy_Freeze : public ::PipelineCamera::CameraSequence::FrameOnePointInCorePolicy
	{
	public:
		static ::System::Func_3<::PipelineCamera::WorldBasicCameraData, ::UnityEngine::Vector3, ::PipelineCamera::WorldBasicCameraData>** StaticGet_GetDataDelegate()
		{
			return (::System::Func_3<::PipelineCamera::WorldBasicCameraData, ::UnityEngine::Vector3, ::PipelineCamera::WorldBasicCameraData>**)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_Freeze_TypeDefinitionIndex)->GetStaticField(0x26F30);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_LastCameraData()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_Freeze_TypeDefinitionIndex)->GetStaticField(0x8560);
		}
		::PipelineCamera::WorldBasicCameraData LastCameraData; // 0x40
		::Foundation::Unreal::FName CacheId; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE__CCTOR_OFFSET))();
		}

		static ::PipelineCamera::WorldBasicCameraData GetDataInternal(::PipelineCamera::WorldBasicCameraData data, ::UnityEngine::Vector3 point)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PipelineCamera::WorldBasicCameraData, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE_GETDATAINTERNAL_OFFSET))(data, point);
		}

		::PipelineCamera::WorldBasicCameraData GetData(::System::Single time, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::UnityEngine::Vector3 point)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE_GETDATA_OFFSET))(this, time, context, point);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& path)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE_SETPATH_OFFSET))(this, path);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::PipelineCamera::WorldBasicCameraData fetch_LastCameraData(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE_FETCH_LASTCAMERADATA_OFFSET))(this, context);
		}

		::System::Void __base_CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE___BASE_COLLECTVARIABLE_OFFSET))(this, P0);
		}

		::System::Void __base_SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY_FREEZE___BASE_SETPATH_OFFSET))(this, P0);
		}
	};
}
