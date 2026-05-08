#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/CameraSequence/FramePivotDataInCore.h"
#include "unitysdk/PipelineCamera/CameraSequence/FramePivotInCoreChannel.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class FramePivotInCore_DataProvider; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x1B8A3A60)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1B8A3AD0)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_FETCH_ACTIVECHANNEL_OFFSET UNITYSDK_OFFSET(0x1B8A3CE0)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_FETCH_RESAMPLEEACHTIME_OFFSET UNITYSDK_OFFSET(0x1B8A3C30)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x1B8A3DE0)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B8A3E80)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x1B8A3D90)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1B8A3E70)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1B8A3E30)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8A4590)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A4530)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FramePivotInCore_TypeDefinitionIndex = 36360;

	class FramePivotInCore : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::System::Func_4<::PipelineCamera::CameraSequence::FramePivotInCore_DataProvider*, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::CameraSequence::FramePivotDataInCore>** StaticGet_GetDataInternal()
		{
			return (::System::Func_4<::PipelineCamera::CameraSequence::FramePivotInCore_DataProvider*, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::CameraSequence::FramePivotDataInCore>**)Il2CppClass::FromTypeDefinitionIndex(FramePivotInCore_TypeDefinitionIndex)->GetStaticField(0x270F0);
		}
		static ::Foundation::Unreal::FName* StaticGet__cacheId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FramePivotInCore_TypeDefinitionIndex)->GetStaticField(0x8800);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_activeChannel()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FramePivotInCore_TypeDefinitionIndex)->GetStaticField(0x8808);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_resampleEachTime()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FramePivotInCore_TypeDefinitionIndex)->GetStaticField(0x8810);
		}
		::PipelineCamera::CameraSequence::FramePivotInCore_DataProvider* runtimeDataProvider; // 0x18
		::System::Single playLength; // 0x20
		::System::Boolean resampleEachTime; // 0x24
		::PipelineCamera::CameraSequence::FramePivotInCoreChannel activeChannel; // 0x28
		::System::Boolean makeContextDependent; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE__CCTOR_OFFSET))();
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::System::Boolean fetch_resampleEachTime(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_FETCH_RESAMPLEEACHTIME_OFFSET))(this, context);
		}

		::PipelineCamera::CameraSequence::FramePivotInCoreChannel fetch_activeChannel(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::PipelineCamera::CameraSequence::FramePivotInCoreChannel(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_FETCH_ACTIVECHANNEL_OFFSET))(this, context);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_ISLOOP_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single sampleTime, ::PipelineCamera::WorldBasicCameraData& data, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_GETSEQUENCEDATAINTERNAL_OFFSET))(this, sampleTime, data, context);
		}
	};
}
