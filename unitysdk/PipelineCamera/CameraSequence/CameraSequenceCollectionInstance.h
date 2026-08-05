#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceCollectionInstance_StepResult.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventOperation.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceBlendSetting; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class CameraSequenceEventQueue; }
namespace PipelineCamera::CameraSequence { class ICameraSequenceBindingResolver; }
namespace PipelineCamera::CameraSequence { class ICameraSequenceCollection; }
namespace PipelineCamera::CameraSequence { class ICameraSequenceCollectionPlayer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_ADVANCE_OFFSET UNITYSDK_OFFSET(0x1C10F3D0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_COLLECTEVENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C10BF50)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_CONSUMEDELTATIME_OFFSET UNITYSDK_OFFSET(0x1C10D1A0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_CONSUMEONINTERRUPT_OFFSET UNITYSDK_OFFSET(0x1C10DD80)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_CONSUMEONSTOP_OFFSET UNITYSDK_OFFSET(0x1C10DDD0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GETCURRENTSECTION_OFFSET UNITYSDK_OFFSET(0x1C10ED20)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GETINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1C10EB80)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GETNEXTSECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1C10F180)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GETNEXTSECTIONNAME_OFFSET UNITYSDK_OFFSET(0x1C10F1F0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GETNEXTSECTION_OFFSET UNITYSDK_OFFSET(0x1C10EF40)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GETPLAYRATE_OFFSET UNITYSDK_OFFSET(0x1C10EC10)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1C10EBC0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1C10BBE0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1C10E160)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C10DEA0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1C10EAF0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_ISSTOPPED_OFFSET UNITYSDK_OFFSET(0x1C10DAE0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C10BEF0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_JUMPTOSECTION_1_OFFSET UNITYSDK_OFFSET(0x1C10E640)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_JUMPTOSECTION_OFFSET UNITYSDK_OFFSET(0x1C10E2D0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_PAUSE_OFFSET UNITYSDK_OFFSET(0x1C10DE20)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_PLAY_1_OFFSET UNITYSDK_OFFSET(0x1C10D3F0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_PLAY_OFFSET UNITYSDK_OFFSET(0x1C10D290)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_REBUILDSECTIONGRAPH_OFFSET UNITYSDK_OFFSET(0x1C10BBF0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_RESUME_OFFSET UNITYSDK_OFFSET(0x1C10DE60)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_SETNEXTSECTIONBYID_OFFSET UNITYSDK_OFFSET(0x1C10E9C0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_SETNEXTSECTIONBYNAME_OFFSET UNITYSDK_OFFSET(0x1C10E780)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_SETNEXTSECTIONGRAPH_OFFSET UNITYSDK_OFFSET(0x1C10EA50)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_SETONSTOPPED_OFFSET UNITYSDK_OFFSET(0x1C10D570)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_SETPLAYRATE_OFFSET UNITYSDK_OFFSET(0x1C10ECC0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1C10EC60)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_SETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x1C10D5D0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_STEPOVERSECTION_OFFSET UNITYSDK_OFFSET(0x1C10CD60)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_STOP_1_OFFSET UNITYSDK_OFFSET(0x1C10D760)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_STOP_OFFSET UNITYSDK_OFFSET(0x1C10D620)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE__ADVANCE_B__57_0_OFFSET UNITYSDK_OFFSET(0x1C1103E0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C110380)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C110180)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceCollectionInstance_TypeDefinitionIndex = 38464;

	class CameraSequenceCollectionInstance : public ::System::Object
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet_SequencePlayerContext()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollectionInstance_TypeDefinitionIndex)->GetStaticField(0x8BE0);
		}
		static ::System::Int32* StaticGet__instanceCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollectionInstance_TypeDefinitionIndex)->GetStaticField(0x8BE8);
		}
		// static const ::System::Int32 MaxStepsPerFrame = 0x10; // 0x0
		// static const ::System::String* SequencePlayerContextName; // 0x0
		::PipelineCamera::CameraSequence::ICameraSequenceCollectionPlayer* _player; // 0x10
		::System::Action* _onInterrupted; // 0x18
		::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventOperation>* _operationBuffer; // 0x20
		::Il2CppArray<::System::Int32>* _nextSections; // 0x28
		::PipelineCamera::CameraSequence::ICameraSequenceCollection* _collection; // 0x30
		::System::Func_1<::System::Single>* _timeScale; // 0x38
		::PipelineCamera::CameraSequence::CameraSequenceEventQueue* _eventQueue; // 0x40
		::System::Action* _onStopped; // 0x48
		::PipelineCamera::CameraSequence::CameraSequenceContext* _context; // 0x50
		::Foundation::Unreal::FName _sectionGraph; // 0x58
		::System::Single _remainingTime; // 0x60
		::System::Single _playRate; // 0x64
		::System::Int32 _instanceId; // 0x68
		::System::Single _position; // 0x6C
		::System::Boolean _isPlaying; // 0x70
		::System::Single _remainingTimeToPlay; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE__CCTOR_OFFSET))();
		}

		::PipelineCamera::CameraSequence::CameraSequenceContext* get_Context()
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GET_CONTEXT_OFFSET))(this);
		}

		::System::Boolean RebuildSectionGraph(::Foundation::Unreal::FName sectionGraph)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_REBUILDSECTIONGRAPH_OFFSET))(this, sectionGraph);
		}

		::System::Void CollectEventInternal(::Foundation::Unreal::Interval_1<::System::Single>& timespan)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_COLLECTEVENTINTERNAL_OFFSET))(this, timespan);
		}

		::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance_StepResult StepOverSection(::System::Single& position, ::System::Int32& currentSectionIndex)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance_StepResult(*)(::PVOID, ::System::Single&, ::System::Int32&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_STEPOVERSECTION_OFFSET))(this, position, currentSectionIndex);
		}

		::System::Boolean ConsumeDeltaTime(::System::Single& deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_CONSUMEDELTATIME_OFFSET))(this, deltaTime);
		}

		::System::Void Play(::System::Single playRate, ::System::Single timeout, ::Foundation::Unreal::FName sectionGraph)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_PLAY_OFFSET))(this, playRate, timeout, sectionGraph);
		}

		::System::Void Play_1(::System::Single playRate, ::System::Single timeout, ::Foundation::Unreal::FName sectionGraph, ::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*& blendInSettings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Foundation::Unreal::FName, ::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_PLAY_1_OFFSET))(this, playRate, timeout, sectionGraph, blendInSettings);
		}

		::System::Void SetOnStopped(::System::Action* onStopped, ::System::Action* onInterrupted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_SETONSTOPPED_OFFSET))(this, onStopped, onInterrupted);
		}

		::System::Void SetTimeScale(::System::Func_1<::System::Single>* timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_SETTIMESCALE_OFFSET))(this, timeScale);
		}

		::System::Void Stop(::System::Boolean isInterrupt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_STOP_OFFSET))(this, isInterrupt);
		}

		::System::Void Stop_1(::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*& blendOutSetting, ::System::Boolean isInterrupt)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*&, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_STOP_1_OFFSET))(this, blendOutSetting, isInterrupt);
		}

		::System::Action* ConsumeOnInterrupt()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_CONSUMEONINTERRUPT_OFFSET))(this);
		}

		::System::Action* ConsumeOnStop()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_CONSUMEONSTOP_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_PAUSE_OFFSET))(this);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_RESUME_OFFSET))(this);
		}

		::System::Void Initialize(::PipelineCamera::CameraSequence::ICameraSequenceCollection* collection, ::PipelineCamera::CameraSequence::ICameraSequenceCollectionPlayer* player)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::ICameraSequenceCollection*, ::PipelineCamera::CameraSequence::ICameraSequenceCollectionPlayer*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_INITIALIZE_OFFSET))(this, collection, player);
		}

		::System::Void Initialize_1(::PipelineCamera::CameraSequence::ICameraSequenceCollection* collection, ::PipelineCamera::CameraSequence::ICameraSequenceCollectionPlayer* player, ::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::ICameraSequenceCollection*, ::PipelineCamera::CameraSequence::ICameraSequenceCollectionPlayer*, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_INITIALIZE_1_OFFSET))(this, collection, player, context);
		}

		::System::Boolean JumpToSection(::Foundation::Unreal::FName section, ::System::Boolean endOfSection)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FName, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_JUMPTOSECTION_OFFSET))(this, section, endOfSection);
		}

		::System::Boolean JumpToSection_1(::Foundation::Unreal::FName section, ::System::Boolean endOfSection, ::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*& blendSetting)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FName, ::System::Boolean, ::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_JUMPTOSECTION_1_OFFSET))(this, section, endOfSection, blendSetting);
		}

		::System::Boolean SetNextSectionByName(::Foundation::Unreal::FName section, ::Foundation::Unreal::FName nextSection)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FName, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_SETNEXTSECTIONBYNAME_OFFSET))(this, section, nextSection);
		}

		::System::Boolean SetNextSectionById(::System::Int32 section, ::System::Int32 nextSection)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_SETNEXTSECTIONBYID_OFFSET))(this, section, nextSection);
		}

		::System::Boolean SetNextSectionGraph(::Foundation::Unreal::FName sectionGraph)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_SETNEXTSECTIONGRAPH_OFFSET))(this, sectionGraph);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_ISVALID_OFFSET))(this);
		}

		::System::Boolean IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean IsStopped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_ISSTOPPED_OFFSET))(this);
		}

		::System::Int32 GetInstanceId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GETINSTANCEID_OFFSET))(this);
		}

		::System::Single GetPosition()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GETPOSITION_OFFSET))(this);
		}

		::System::Single GetPlayRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GETPLAYRATE_OFFSET))(this);
		}

		::System::Void SetPosition(::System::Single position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_SETPOSITION_OFFSET))(this, position);
		}

		::System::Void SetPlayRate(::System::Single playRate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_SETPLAYRATE_OFFSET))(this, playRate);
		}

		::Foundation::Unreal::FName GetCurrentSection()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GETCURRENTSECTION_OFFSET))(this);
		}

		::Foundation::Unreal::FName GetNextSection()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GETNEXTSECTION_OFFSET))(this);
		}

		::System::Int32 GetNextSectionIndex(::System::Int32 sectionIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GETNEXTSECTIONINDEX_OFFSET))(this, sectionIndex);
		}

		::Foundation::Unreal::FName GetNextSectionName(::System::Int32 sectionIndex)
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GETNEXTSECTIONNAME_OFFSET))(this, sectionIndex);
		}

		::System::Void Advance(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_ADVANCE_OFFSET))(this, deltaTime);
		}

		::System::Void _Advance_b__57_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE__ADVANCE_B__57_0_OFFSET))(this);
		}
	};
}
