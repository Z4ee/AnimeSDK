#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MarbleBattleAffiliationType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL_AWAKE_OFFSET UNITYSDK_OFFSET(0xDACABD0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL_CLEARCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xDACB6F0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL_GET__ISENEMYTURN_OFFSET UNITYSDK_OFFSET(0xDACAB80)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL_GET__ISSELF1P_OFFSET UNITYSDK_OFFSET(0xDACA940)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDACB030)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xDACAD00)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL_REFRESHCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xDACAD50)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL_SETAFFILIATION_OFFSET UNITYSDK_OFFSET(0xDACB780)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xDACB0B0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL_UPDATE_OFFSET UNITYSDK_OFFSET(0xDACAE50)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0xDACB840)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL__ONSTARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xDACB7D0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL__SETTIPSTEXT_OFFSET UNITYSDK_OFFSET(0xDACB530)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xDACAED0)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleBattleTimePanel_TypeDefinitionIndex = 74701;

	class PetMarbleBattleTimePanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* FADE_IN_CLIP; // 0x0
		// static const ::System::String* FADE_OUT_CLIP; // 0x0
		// static const ::System::String* HINT_CLIP; // 0x0
		// static const ::System::String* _1P_TURN_TEXT_ID; // 0x0
		// static const ::System::String* _2P_TURN_TEXT_ID; // 0x0
		// static const ::System::String* ENEMY_TURN_TEXT_ID; // 0x0
		::System::Single Seconds; // 0x18
		::System::Int32 _DisplayIntSeconds; // 0x1C
		::System::Int32 _CountDownThreshold; // 0x20
		::System::Boolean _IsShowing; // 0x24
		::RPG::Client::MarbleBattleAffiliationType _CurAffiliation; // 0x28
		::UnityEngine::UI::Text* SecondText; // 0x30
		::UnityEngine::UI::Image* SecondProgress; // 0x38
		::UnityEngine::UI::Text* TipsText; // 0x40
		::UnityEngine::UI::Image* TipsBg; // 0x48
		::UnityEngine::Animation* Anim; // 0x50
		::UnityEngine::Animation* SecondAnim; // 0x58
		::UnityEngine::Color AllyProgressColor; // 0x60
		::UnityEngine::Color AllyTextBgColor; // 0x70
		::UnityEngine::Color AllySecondTextColor; // 0x80
		::UnityEngine::Color EnemyProgressColor; // 0x90
		::UnityEngine::Color EnemyTextBgColor; // 0xA0
		::UnityEngine::Color EnemySecondTextColor; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL__CTOR_OFFSET))(this);
		}

		::System::Boolean get__IsSelf1P()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL_GET__ISSELF1P_OFFSET))(this);
		}

		::System::Boolean get__IsEnemyTurn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL_GET__ISENEMYTURN_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL_ONDESTROY_OFFSET))(this);
		}

		::System::Void StartCountDown(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL_STARTCOUNTDOWN_OFFSET))(this, a1);
		}

		::System::Void ClearCountDown(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL_CLEARCOUNTDOWN_OFFSET))(this, a1);
		}

		::System::Void SetAffiliation(::RPG::Client::MarbleBattleAffiliationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MarbleBattleAffiliationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL_SETAFFILIATION_OFFSET))(this, a1);
		}

		::System::Void RefreshCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL_REFRESHCOUNTDOWN_OFFSET))(this);
		}

		::System::Void _OnStartCountDown(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL__ONSTARTCOUNTDOWN_OFFSET))(this, a1);
		}

		::System::Void _SetupView(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL__SETUPVIEW_OFFSET))(this, a1);
		}

		::System::Void _SetTipsText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLETIMEPANEL__SETTIPSTEXT_OFFSET))(this);
		}
	};
}
