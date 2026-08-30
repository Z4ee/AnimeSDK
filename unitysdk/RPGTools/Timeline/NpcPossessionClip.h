#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8BBE00)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8BBDD0)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_GET_TRACKINSTANCEID_OFFSET UNITYSDK_OFFSET(0xE8BBDE0)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_METHOD_4_6C88CD2F7D698314_OFFSET UNITYSDK_OFFSET(0xE8BBF90)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_METHOD_4_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xE8BBFD0)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_SET_TRACKINSTANCEID_OFFSET UNITYSDK_OFFSET(0xE8BBDF0)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE8BC020)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int NpcPossessionClip_TypeDefinitionIndex = 48671;

	class NpcPossessionClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::Boolean IsDelete; // 0x20
		::System::Single DitherTime; // 0x24
		::RPG::GameCore::LevelNPCPossessionInfo* PossessionInfo; // 0x28
		::System::Action* OnLevelNPCPossessionInfoChanged; // 0x30
		::System::String* _TrackInstanceID_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::String* get_TrackInstanceID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_GET_TRACKINSTANCEID_OFFSET))(this);
		}

		::System::Void set_TrackInstanceID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_SET_TRACKINSTANCEID_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::NPCSubType Method_4_6C88CD2F7D698314()
		{
			return ((::RPG::GameCore::NPCSubType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_METHOD_4_6C88CD2F7D698314_OFFSET))(this);
		}

		::System::String* Method_4_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONCLIP_METHOD_4_DA1BF2C227DC3D86_OFFSET))(this);
		}
	};
}
