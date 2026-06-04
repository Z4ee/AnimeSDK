#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoPrefabSwitcher; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Events { class UnityEvent; }

#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGITEMCONTROL_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0xB4BF740)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGITEMCONTROL_GET_ONCLICK_OFFSET UNITYSDK_OFFSET(0xB4BF670)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGITEMCONTROL_GET_SHOULDSHOWRIGHTBAR_OFFSET UNITYSDK_OFFSET(0xB4BF820)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGITEMCONTROL_SET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0xB4BF7C0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGITEMCONTROL_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB4BF6D0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGITEMCONTROL_SET_SHOULDSHOWRIGHTBAR_OFFSET UNITYSDK_OFFSET(0xB4BF890)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB4BF8F0)

namespace RPG::Client::Challenge::Boss
{
	inline static constexpr unsigned int ChallengeBossGuideTagItemControl_TypeDefinitionIndex = 74291;

	class ChallengeBossGuideTagItemControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::AnimatorButton* _BtnRoot; // 0x18
		::RPG::Client::LocalizedText* _TextName; // 0x20
		::RPG::Client::MonoPrefabSwitcher* _Switcher; // 0x28
		::System::String* _StateNormal; // 0x30
		::System::String* _StateSpecial; // 0x38
		::UnityEngine::RectTransform* _NodeRightBar; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGITEMCONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Events::UnityEvent* get_OnClick()
		{
			return ((::UnityEngine::Events::UnityEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGITEMCONTROL_GET_ONCLICK_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGITEMCONTROL_SET_NAME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSpecial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGITEMCONTROL_GET_ISSPECIAL_OFFSET))(this);
		}

		::System::Void set_IsSpecial(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGITEMCONTROL_SET_ISSPECIAL_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldShowRightBar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGITEMCONTROL_GET_SHOULDSHOWRIGHTBAR_OFFSET))(this);
		}

		::System::Void set_ShouldShowRightBar(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGITEMCONTROL_SET_SHOULDSHOWRIGHTBAR_OFFSET))(this, a1);
		}
	};
}
