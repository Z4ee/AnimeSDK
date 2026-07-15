#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_TIMELINE_MANAVIDEOTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x178A1900)
#define RPG_CLIENT_TIMELINE_MANAVIDEOTRACK_METHOD_5_17C76E3E11978D77_OFFSET UNITYSDK_OFFSET(0x178A24C0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOTRACK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x178A2820)
#define RPG_CLIENT_TIMELINE_MANAVIDEOTRACK__CCTOR_OFFSET UNITYSDK_OFFSET(0x178A2990)
#define RPG_CLIENT_TIMELINE_MANAVIDEOTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x178A28A0)

namespace RPG::Client::Timeline
{
	inline static constexpr unsigned int ManaVideoTrack_TypeDefinitionIndex = 70000;

	class ManaVideoTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Guid>** StaticGet_bindDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(ManaVideoTrack_TypeDefinitionIndex)->GetStaticField(0x43140);
		}
		::System::Guid guid; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOTRACK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOTRACK__CCTOR_OFFSET))();
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOTRACK_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void Method_5_17C76E3E11978D77(::RPG::Client::Timeline::ManaVideoTrack* a1)
		{
			return ((::System::Void(*)(::RPG::Client::Timeline::ManaVideoTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOTRACK_METHOD_5_17C76E3E11978D77_OFFSET))(a1);
		}
	};
}
