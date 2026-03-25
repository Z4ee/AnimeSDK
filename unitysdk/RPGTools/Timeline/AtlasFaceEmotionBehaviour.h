#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::GameCore { class CharacterAtlasFaceEmotion; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xAB20A10)
#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xAB20A30)
#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_METHOD_2_57463EAF62638A1C_OFFSET UNITYSDK_OFFSET(0xAB20AF0)
#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB20A50)
#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xAB20A20)
#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xAB20A40)
#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB20BD0)
#define RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB20BE0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AtlasFaceEmotionBehaviour_TypeDefinitionIndex = 38881;

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

		::System::Void set_CharacterUniqueName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET))(this, value);
		}

		::RPG::GameCore::CharacterAtlasFaceEmotion* get_Config()
		{
			return ((::RPG::GameCore::CharacterAtlasFaceEmotion*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::CharacterAtlasFaceEmotion* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterAtlasFaceEmotion*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_SET_CONFIG_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_57463EAF62638A1C(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR_METHOD_2_57463EAF62638A1C_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATLASFACEEMOTIONBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
