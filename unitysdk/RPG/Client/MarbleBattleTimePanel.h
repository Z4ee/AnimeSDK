#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MARBLEBATTLETIMEPANEL_AWAKE_OFFSET UNITYSDK_OFFSET(0xA813000)
#define RPG_CLIENT_MARBLEBATTLETIMEPANEL_CLEARCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xA812E00)
#define RPG_CLIENT_MARBLEBATTLETIMEPANEL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA8130F0)
#define RPG_CLIENT_MARBLEBATTLETIMEPANEL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA813170)
#define RPG_CLIENT_MARBLEBATTLETIMEPANEL_REFRESHCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xA812E90)
#define RPG_CLIENT_MARBLEBATTLETIMEPANEL_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xA812950)
#define RPG_CLIENT_MARBLEBATTLETIMEPANEL_UPDATE_OFFSET UNITYSDK_OFFSET(0xA8131C0)
#define RPG_CLIENT_MARBLEBATTLETIMEPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0xA813330)
#define RPG_CLIENT_MARBLEBATTLETIMEPANEL__ONSTARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xA812F90)
#define RPG_CLIENT_MARBLEBATTLETIMEPANEL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xA813240)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleTimePanel_TypeDefinitionIndex = 60607;

	class MarbleBattleTimePanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* FADE_IN_CLIP; // 0x0
		// static const ::System::String* FADE_OUT_CLIP; // 0x0
		// static const ::System::String* HINT_CLIP; // 0x0
		::System::Single Seconds; // 0x18
		::System::Int32 _DisplayIntSeconds; // 0x1C
		::System::Int32 _CountDownThreshold; // 0x20
		::System::Boolean _IsShowing; // 0x24
		::UnityEngine::UI::Text* SecondText; // 0x28
		::UnityEngine::UI::Image* SecondProgress; // 0x30
		::UnityEngine::UI::Text* TipsText; // 0x38
		::UnityEngine::UI::Image* TipsBg; // 0x40
		::UnityEngine::Animation* Anim; // 0x48
		::UnityEngine::Animation* SecondAnim; // 0x50
		::UnityEngine::Color AllyProgressColor; // 0x58
		::UnityEngine::Color AllyTextBgColor; // 0x68
		::UnityEngine::Color AllySecondTextColor; // 0x78
		::UnityEngine::Color EnemyProgressColor; // 0x88
		::UnityEngine::Color EnemyTextBgColor; // 0x98
		::UnityEngine::Color EnemySecondTextColor; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLETIMEPANEL__CTOR_OFFSET))(this);
		}

		::System::Void StartCountDown(::System::Single seconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLETIMEPANEL_STARTCOUNTDOWN_OFFSET))(this, seconds);
		}

		::System::Void ClearCountDown(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLETIMEPANEL_CLEARCOUNTDOWN_OFFSET))(this, param);
		}

		::System::Void RefreshCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLETIMEPANEL_REFRESHCOUNTDOWN_OFFSET))(this);
		}

		::System::Void _OnStartCountDown(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLETIMEPANEL__ONSTARTCOUNTDOWN_OFFSET))(this, param);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLETIMEPANEL_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLETIMEPANEL_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLETIMEPANEL_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLETIMEPANEL_UPDATE_OFFSET))(this);
		}

		::System::Void _SetupView(::System::Single seconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLETIMEPANEL__SETUPVIEW_OFFSET))(this, seconds);
		}
	};
}
