#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xCFE7330)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xCFE7320)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATECLIP_METHOD_4_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xCFE7290)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATECLIP_METHOD_4_C446CE6A5E1982BC_OFFSET UNITYSDK_OFFSET(0xCFE74C0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xCFE7520)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraSmallWindowTemplateClip_TypeDefinitionIndex = 45205;

	class CRPCameraSmallWindowTemplateClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* SmallWindowActorUniqueNames; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* SmallWindowTimelineEffectUniqueNames; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATECLIP__CTOR_OFFSET))(this);
		}

		::System::String* Method_4_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATECLIP_METHOD_4_88B60F3B95FAA4F1_OFFSET))(this);
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
