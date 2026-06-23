#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CRIWARE_CRITIMELINE_MANA_CRIMANATRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1E7DF450)
#define CRIWARE_CRITIMELINE_MANA_CRIMANATRACK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E7E02C0)
#define CRIWARE_CRITIMELINE_MANA_CRIMANATRACK_REMOVETRACKFROMBINDDICT_OFFSET UNITYSDK_OFFSET(0x1E7DFF40)
#define CRIWARE_CRITIMELINE_MANA_CRIMANATRACK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7E0380)
#define CRIWARE_CRITIMELINE_MANA_CRIMANATRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E0320)

namespace CriWare::CriTimeline::Mana
{
	inline static constexpr unsigned int CriManaTrack_TypeDefinitionIndex = 34386;

	class CriManaTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Guid>** StaticGet_bindDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(CriManaTrack_TypeDefinitionIndex)->GetStaticField(0x27A70);
		}
		::System::Boolean frameSync; // 0xB0
		::System::Guid guid; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANATRACK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANATRACK__CCTOR_OFFSET))();
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANATRACK_CREATETRACKMIXER_OFFSET))(this, graph, go, inputCount);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANATRACK_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void RemoveTrackFromBindDict(::CriWare::CriTimeline::Mana::CriManaTrack* trackAsset)
		{
			return ((::System::Void(*)(::CriWare::CriTimeline::Mana::CriManaTrack*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANATRACK_REMOVETRACKFROMBINDDICT_OFFSET))(trackAsset);
		}
	};
}
