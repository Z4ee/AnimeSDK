#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetClockBoyEmotion; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xCFF9360)
#define RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONBEHAVIOUR_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xCFF9380)
#define RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONBEHAVIOUR_METHOD_2_33B23A505F8C30B9_OFFSET UNITYSDK_OFFSET(0xCFF95F0)
#define RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONBEHAVIOUR_METHOD_2_D9120CDF6DC9905D_OFFSET UNITYSDK_OFFSET(0xCFF9450)
#define RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCFF93A0)
#define RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xCFF9370)
#define RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONBEHAVIOUR_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xCFF9390)
#define RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xCFF96C0)
#define RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCFF96D0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ClockBoyEmotionBehaviour_TypeDefinitionIndex = 45334;

	class ClockBoyEmotionBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* _CharacterUniqueName_k__BackingField; // 0x10
		::RPG::GameCore::SetClockBoyEmotion* _Config_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::String* get_CharacterUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONBEHAVIOUR_GET_CHARACTERUNIQUENAME_OFFSET))(this);
		}

		::System::Void set_CharacterUniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONBEHAVIOUR_SET_CHARACTERUNIQUENAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::SetClockBoyEmotion* get_Config()
		{
			return ((::RPG::GameCore::SetClockBoyEmotion*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONBEHAVIOUR_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::SetClockBoyEmotion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetClockBoyEmotion*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONBEHAVIOUR_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_D9120CDF6DC9905D(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONBEHAVIOUR_METHOD_2_D9120CDF6DC9905D_OFFSET))(this, a1);
		}

		::System::Void Method_2_33B23A505F8C30B9(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONBEHAVIOUR_METHOD_2_33B23A505F8C30B9_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
