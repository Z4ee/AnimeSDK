#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE824520)
#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE824510)
#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATECLIP_METHOD_4_C446CE6A5E1982BC_OFFSET UNITYSDK_OFFSET(0xE824680)
#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATECLIP_METHOD_4_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xE8244B0)
#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE8246E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraSplitScreenTemplateClip_TypeDefinitionIndex = 48371;

	class CRPCameraSplitScreenTemplateClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* LeftActorUniqueNames; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* LeftTimelineEffectUniqueNames; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* RightActorUniqueNames; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* RightTimelineEffectUniqueNames; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATECLIP__CTOR_OFFSET))(this);
		}

		::System::String* Method_4_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATECLIP_METHOD_4_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_4_C446CE6A5E1982BC()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATECLIP_METHOD_4_C446CE6A5E1982BC_OFFSET))(this);
		}
	};
}
