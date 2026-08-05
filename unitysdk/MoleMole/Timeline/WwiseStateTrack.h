#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

class Class_2_5AD8A37AA06A2983_3;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_WWISESTATETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1B21F0E0)
#define MOLEMOLE_TIMELINE_WWISESTATETRACK_METHOD_5_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x1B21F4D0)
#define MOLEMOLE_TIMELINE_WWISESTATETRACK_METHOD_5_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x1B21F2E0)
#define MOLEMOLE_TIMELINE_WWISESTATETRACK_METHOD_5_B1CEB44F8026DA0D_OFFSET UNITYSDK_OFFSET(0x1B21F490)
#define MOLEMOLE_TIMELINE_WWISESTATETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B21F240)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int WwiseStateTrack_TypeDefinitionIndex = 56551;

	class WwiseStateTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_5AD8A37AA06A2983_3*>* paramList; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATETRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATETRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_87318FF00D6BC7EB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATETRACK_METHOD_5_87318FF00D6BC7EB_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable Method_5_B1CEB44F8026DA0D(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATETRACK_METHOD_5_B1CEB44F8026DA0D_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_6916CB2AB9451DD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATETRACK_METHOD_5_6916CB2AB9451DD7_OFFSET))(this);
		}
	};
}
