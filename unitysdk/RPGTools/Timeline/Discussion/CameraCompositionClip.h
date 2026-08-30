#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_DISCUSSION_CAMERACOMPOSITIONCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE83DDD0)
#define RPGTOOLS_TIMELINE_DISCUSSION_CAMERACOMPOSITIONCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE83DDC0)
#define RPGTOOLS_TIMELINE_DISCUSSION_CAMERACOMPOSITIONCLIP_GET_ENABLEEDIT_OFFSET UNITYSDK_OFFSET(0xE83DDB0)
#define RPGTOOLS_TIMELINE_DISCUSSION_CAMERACOMPOSITIONCLIP_GET_ISBLENDANCHOREMPTY_OFFSET UNITYSDK_OFFSET(0xE83DD20)
#define RPGTOOLS_TIMELINE_DISCUSSION_CAMERACOMPOSITIONCLIP_GET_STREAMINGSOURCEINDEX_OFFSET UNITYSDK_OFFSET(0xE83DD90)
#define RPGTOOLS_TIMELINE_DISCUSSION_CAMERACOMPOSITIONCLIP_SET_STREAMINGSOURCEINDEX_OFFSET UNITYSDK_OFFSET(0xE83DDA0)
#define RPGTOOLS_TIMELINE_DISCUSSION_CAMERACOMPOSITIONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE83DF30)

namespace RPGTools::Timeline::Discussion
{
	inline static constexpr unsigned int CameraCompositionClip_TypeDefinitionIndex = 49238;

	class CameraCompositionClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* AreaName; // 0x18
		::System::String* AnchorName; // 0x20
		::System::Boolean EnableBlend; // 0x28
		::System::String* BlendAnchorName; // 0x30
		::RPG::GameCore::VCameraBlendType BlendType; // 0x38
		::System::Single BlendTime; // 0x3C
		::System::Int32 _StreamingSourceIndex_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_CAMERACOMPOSITIONCLIP__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsBlendAnchorEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_CAMERACOMPOSITIONCLIP_GET_ISBLENDANCHOREMPTY_OFFSET))(this);
		}

		::System::Int32 get_StreamingSourceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_CAMERACOMPOSITIONCLIP_GET_STREAMINGSOURCEINDEX_OFFSET))(this);
		}

		::System::Void set_StreamingSourceIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_CAMERACOMPOSITIONCLIP_SET_STREAMINGSOURCEINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_CAMERACOMPOSITIONCLIP_GET_ENABLEEDIT_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_CAMERACOMPOSITIONCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_CAMERACOMPOSITIONCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
