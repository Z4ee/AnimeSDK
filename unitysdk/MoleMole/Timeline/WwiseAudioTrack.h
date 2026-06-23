#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

class Class_2_5AD8A37AA06A2983;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x18D25770)
#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x18D259C0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_METHOD_5_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x18D25BD0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_METHOD_5_4D7DB0CF65D56E84_OFFSET UNITYSDK_OFFSET(0x18D26860)
#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_METHOD_5_652F102150AC9967_OFFSET UNITYSDK_OFFSET(0x18D26620)
#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_METHOD_5_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x18D26AC0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_METHOD_5_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x18D26660)
#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_METHOD_5_B1CEB44F8026DA0D_OFFSET UNITYSDK_OFFSET(0x18D26820)
#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_METHOD_5_F4A2D18676C51961_OFFSET UNITYSDK_OFFSET(0x18D25CA0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D25BC0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18D25B20)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int WwiseAudioTrack_TypeDefinitionIndex = 42119;

	class WwiseAudioTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		static ::System::Boolean* StaticGet_overRide_DisplayName()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WwiseAudioTrack_TypeDefinitionIndex)->GetStaticField(0x13030);
		}
		static ::System::Boolean* StaticGet_hasLoadAudio()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WwiseAudioTrack_TypeDefinitionIndex)->GetStaticField(0x13031);
		}
		::System::Collections::Generic::List_1<::Class_2_5AD8A37AA06A2983*>* paramList; // 0xB0
		::Il2CppArray<::System::Int32>* disableInVoiceLanguages; // 0xB8
		::System::Boolean disableMale; // 0xC0
		::System::Boolean disableFamale; // 0xC1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK__CCTOR_OFFSET))();
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_METHOD_5_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Boolean Method_5_F4A2D18676C51961()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_METHOD_5_F4A2D18676C51961_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable Method_5_652F102150AC9967(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_METHOD_5_652F102150AC9967_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_87318FF00D6BC7EB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_METHOD_5_87318FF00D6BC7EB_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable Method_5_B1CEB44F8026DA0D(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_METHOD_5_B1CEB44F8026DA0D_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_4D7DB0CF65D56E84()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_METHOD_5_4D7DB0CF65D56E84_OFFSET))(this);
		}

		::System::Void Method_5_704FAC4600717444()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_METHOD_5_704FAC4600717444_OFFSET))(this);
		}
	};
}
