#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE823800)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8237F0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATECLIP_METHOD_4_C446CE6A5E1982BC_OFFSET UNITYSDK_OFFSET(0xE823990)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATECLIP_METHOD_4_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xE823790)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE8239F0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraSmallWindowTemplateClip_TypeDefinitionIndex = 48363;

	class CRPCameraSmallWindowTemplateClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* SmallWindowActorUniqueNames; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* SmallWindowTimelineEffectUniqueNames; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATECLIP__CTOR_OFFSET))(this);
		}

		::System::String* Method_4_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATECLIP_METHOD_4_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_4_C446CE6A5E1982BC()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATECLIP_METHOD_4_C446CE6A5E1982BC_OFFSET))(this);
		}
	};
}
