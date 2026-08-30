#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::GameCore { class CharacterAtlasFaceEmotion; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1B5316B0)
#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1B5316D0)
#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_METHOD_2_57463EAF62638A1C_OFFSET UNITYSDK_OFFSET(0x1B531790)
#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B5316F0)
#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1B5316C0)
#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1B5316E0)
#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B531870)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AtlasFaceEmotionBehaviour_TypeDefinitionIndex = 48489;

	class AtlasFaceEmotionBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* _CharacterUniqueName_k__BackingField; // 0x10
		::RPG::GameCore::CharacterAtlasFaceEmotion* _Config_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::String* get_CharacterUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET))(this);
		}

		::System::Void set_CharacterUniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterAtlasFaceEmotion* get_Config()
		{
			return ((::RPG::GameCore::CharacterAtlasFaceEmotion*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::CharacterAtlasFaceEmotion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterAtlasFaceEmotion*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_57463EAF62638A1C(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_METHOD_2_57463EAF62638A1C_OFFSET))(this, a1);
		}
	};
}
