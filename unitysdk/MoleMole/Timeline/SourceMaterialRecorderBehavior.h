#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class KeyframeMBP; }
namespace MoleMole::Timeline { class SourceMaterialInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Timeline { class AnimationTrack; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_CHECKMATERIALINDEXVALID_OFFSET UNITYSDK_OFFSET(0x1E5D35D0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_CLEARFRAMEALTERS_OFFSET UNITYSDK_OFFSET(0x1E5D3020)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_FINDPROPERTYALTERS_OFFSET UNITYSDK_OFFSET(0x1E5D3310)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_GETFRAMETIMES_OFFSET UNITYSDK_OFFSET(0x1E5D3920)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_GETKEYFRAMES_OFFSET UNITYSDK_OFFSET(0x1E5D2700)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_GETMULTIMATERIALPATTERN_OFFSET UNITYSDK_OFFSET(0x1E5D3570)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1E5D2230)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_GET_FRAMEENDTIME_OFFSET UNITYSDK_OFFSET(0x1E5D23B0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_GET_FRAMESTARTTIME_OFFSET UNITYSDK_OFFSET(0x1E5D22C0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1E5D21B0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_INIT_OFFSET UNITYSDK_OFFSET(0x1E5D24A0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_LOADKFRAMESFROMANIMATOR_OFFSET UNITYSDK_OFFSET(0x1E5D24D0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1E5D2500)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x1E5D24E0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_ONPROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1E5D30C0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_RECORDERFRAMES_OFFSET UNITYSDK_OFFSET(0x1E5D3730)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_RECORDER_OFFSET UNITYSDK_OFFSET(0x1E5D3010)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_RECOVERMESHRENDERS_OFFSET UNITYSDK_OFFSET(0x1E5D2F10)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_UPDATEALTERS_OFFSET UNITYSDK_OFFSET(0x1E5D4070)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_UPDATEMATERIALONINSPECTORGUI_OFFSET UNITYSDK_OFFSET(0x1E5D2520)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D41C0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D40E0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SourceMaterialRecorderBehavior_TypeDefinitionIndex = 32202;

	class SourceMaterialRecorderBehavior : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_MatchStrDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialRecorderBehavior_TypeDefinitionIndex)->GetStaticField(0x26B30);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_RealKeyPathDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialRecorderBehavior_TypeDefinitionIndex)->GetStaticField(0x26B38);
		}
		// static const ::System::Double deltaTime; // 0x0
		// static const ::System::String* MultiMaterialKey; // 0x0
		// static const ::System::String* MultiMaterialPattern; // 0x0
		::UnityEngine::Material* sourceMaterial; // 0x18
		::MoleMole::Timeline::SourceMaterialInfo* SourceMaterialInfo; // 0x20
		::UnityEngine::Timeline::AnimationTrack* kFrameTrack; // 0x28
		::System::Collections::Generic::List_1<::System::Double>* frameTimes; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*>* frameAttrs; // 0x38
		::UnityEngine::Timeline::TimelineClip* parentRecorderClip; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Double get_startTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_GET_STARTTIME_OFFSET))(this);
		}

		::System::Double get_endTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_GET_ENDTIME_OFFSET))(this);
		}

		::System::Double get_frameStartTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_GET_FRAMESTARTTIME_OFFSET))(this);
		}

		::System::Double get_frameEndTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_GET_FRAMEENDTIME_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Material* material, ::UnityEngine::Timeline::AnimationTrack* kFrameTrack, ::UnityEngine::Timeline::TimelineClip* parentClip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Timeline::AnimationTrack*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_INIT_OFFSET))(this, material, kFrameTrack, parentClip);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void UpdateMaterialOnInspectorGui(::System::Double curTime, ::UnityEngine::Material* instanceMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_UPDATEMATERIALONINSPECTORGUI_OFFSET))(this, curTime, instanceMaterial);
		}

		::System::Void RecoverMeshRenders(::System::Boolean isInit, ::System::Boolean clearMpb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_RECOVERMESHRENDERS_OFFSET))(this, isInit, clearMpb);
		}

		::System::Void Recorder(::UnityEngine::Material* sourceInstanceMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_RECORDER_OFFSET))(this, sourceInstanceMaterial);
		}

		::System::Void LoadKFramesFromAnimator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_LOADKFRAMESFROMANIMATOR_OFFSET))(this);
		}

		::System::Void ClearFrameAlters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_CLEARFRAMEALTERS_OFFSET))(this);
		}

		::System::Void OnProcessFrame(::UnityEngine::Playables::Playable rootPlayable, ::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData, ::System::Single weight, ::System::Int32 mixerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_ONPROCESSFRAME_OFFSET))(this, rootPlayable, playable, info, playerData, weight, mixerIndex);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FindPropertyAlters(::System::Double curTime, ::UnityEngine::Material* inspectorMaterial)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID, ::System::Double, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_FINDPROPERTYALTERS_OFFSET))(this, curTime, inspectorMaterial);
		}

		static ::System::String* GetMultiMaterialPattern(::System::Int32 materialIndex)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_GETMULTIMATERIALPATTERN_OFFSET))(materialIndex);
		}

		static ::System::Boolean CheckMaterialIndexValid(::System::String* frameKey, ::System::Int32 materialIndex)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_CHECKMATERIALINDEXVALID_OFFSET))(frameKey, materialIndex);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* GetKeyFrames(::System::Int32 materialIndex, ::System::Double curTime)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_GETKEYFRAMES_OFFSET))(this, materialIndex, curTime);
		}

		::System::Void RecorderFrames(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*>* rendererFrames)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_RECORDERFRAMES_OFFSET))(this, rendererFrames);
		}

		::System::Void UpdateAlters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_UPDATEALTERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Double>* GetFrameTimes()
		{
			return ((::System::Collections::Generic::List_1<::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR_GETFRAMETIMES_OFFSET))(this);
		}
	};
}
