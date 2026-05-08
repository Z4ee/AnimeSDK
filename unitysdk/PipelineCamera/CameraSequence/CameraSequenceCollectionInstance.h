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

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_ADVANCE_OFFSET UNITYSDK_OFFSET(0x189D77B0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_COLLECTEVENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x189D42E0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_CONSUMEDELTATIME_OFFSET UNITYSDK_OFFSET(0x189D5560)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_CONSUMEONINTERRUPT_OFFSET UNITYSDK_OFFSET(0x189D6140)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_CONSUMEONSTOP_OFFSET UNITYSDK_OFFSET(0x189D6190)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GETCURRENTSECTION_OFFSET UNITYSDK_OFFSET(0x189D70D0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GETINSTANCEID_OFFSET UNITYSDK_OFFSET(0x189D6F30)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GETNEXTSECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x189D7540)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GETNEXTSECTIONNAME_OFFSET UNITYSDK_OFFSET(0x189D75C0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GETNEXTSECTION_OFFSET UNITYSDK_OFFSET(0x189D72F0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GETPLAYRATE_OFFSET UNITYSDK_OFFSET(0x189D6FC0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x189D6F70)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x189D3F60)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x189D6530)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x189D6260)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x189D6EA0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_ISSTOPPED_OFFSET UNITYSDK_OFFSET(0x189D5EA0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_ISVALID_OFFSET UNITYSDK_OFFSET(0x189D4280)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_JUMPTOSECTION_1_OFFSET UNITYSDK_OFFSET(0x189D6A20)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_JUMPTOSECTION_OFFSET UNITYSDK_OFFSET(0x189D66B0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_PAUSE_OFFSET UNITYSDK_OFFSET(0x189D61E0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_PLAY_1_OFFSET UNITYSDK_OFFSET(0x189D57B0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_PLAY_OFFSET UNITYSDK_OFFSET(0x189D5650)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_REBUILDSECTIONGRAPH_OFFSET UNITYSDK_OFFSET(0x189D3F70)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_RESUME_OFFSET UNITYSDK_OFFSET(0x189D6220)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_SETNEXTSECTIONBYID_OFFSET UNITYSDK_OFFSET(0x189D6D40)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_SETNEXTSECTIONBYNAME_OFFSET UNITYSDK_OFFSET(0x189D6B60)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_SETNEXTSECTIONGRAPH_OFFSET UNITYSDK_OFFSET(0x189D6E00)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_SETONSTOPPED_OFFSET UNITYSDK_OFFSET(0x189D5930)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_SETPLAYRATE_OFFSET UNITYSDK_OFFSET(0x189D7070)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x189D7010)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_SETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x189D5990)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_STEPOVERSECTION_OFFSET UNITYSDK_OFFSET(0x189D5100)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_STOP_1_OFFSET UNITYSDK_OFFSET(0x189D5B20)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE_STOP_OFFSET UNITYSDK_OFFSET(0x189D59E0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE__ADVANCE_B__57_0_OFFSET UNITYSDK_OFFSET(0x189D87E0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x189D8780)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECOLLECTIONINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x189D8580)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceCollectionInstance_TypeDefinitionIndex = 36195;

	class CameraSequenceCollectionInstance : public ::System::Object
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet_SequencePlayerContext()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollectionInstance_TypeDefinitionIndex)->GetStaticField(0x8630);
		}
		static ::System::Int32* StaticGet__instanceCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollectionInstance_TypeDefinitionIndex)->GetStaticField(0x8638);
		}
		// static const ::System::Int32 MaxStepsPerFrame = 0x10; // 0x0
		// static const ::System::String* SequencePlayerContextName; // 0x0
		::System::Func_1<::System::Single>* _timeScale; // 0x10
		::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventOperation>* _operationBuffer; // 0x18
		::PipelineCamera::CameraSequence::CameraSequenceEventQueue* _eventQueue; // 0x20
		::PipelineCamera::CameraSequence::CameraSequenceContext* _context; // 0x28
		::PipelineCamera::CameraSequence::ICameraSequenceCollectionPlayer* _player; // 0x30
		::Il2CppArray<::System::Int32>* _nextSections; // 0x38
		::System::Action* _onStopped; // 0x40
		::System::Action* _onInterrupted; // 0x48
		::PipelineCamera::CameraSequence::ICameraSequenceCollection* _collection; // 0x50
		::System::Single _remainingTime; // 0x58
		::System::Single _playRate; // 0x5C
		::System::Int32 _instanceId; // 0x60
		::Foundation::Unreal::FName _sectionGraph; // 0x64
		::System::Boolean _isPlaying; // 0x6C
		::System::Single _remainingTimeToPlay; // 0x70
		::System::Single _position; // 0x74

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
