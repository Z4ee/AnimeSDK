#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::Client { class AnimatorButton; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Slider; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL_AWAKE_OFFSET UNITYSDK_OFFSET(0xB1524C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB152E80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB153460)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL_REGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1526B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB152700)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB153690)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL__INSERTULTRASKILL_OFFSET UNITYSDK_OFFSET(0xB152EE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL__ONAUTOBATTLESTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0xB153390)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL__ONULTRASKILLBEGIN_OFFSET UNITYSDK_OFFSET(0xB1533E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL__ONULTRASKILLBTNCLICK_OFFSET UNITYSDK_OFFSET(0xB153050)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL__REFRESHONSPCHANGED_OFFSET UNITYSDK_OFFSET(0xB152DD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL__REFRESHSP_OFFSET UNITYSDK_OFFSET(0xB152A50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL__RESETSTATE_OFFSET UNITYSDK_OFFSET(0xB1529E0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveInGameUltraSkillPanel_TypeDefinitionIndex = 70055;

	class IdleLiveInGameUltraSkillPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* _ANIM_NAME_ULTRA_SKILL_MAX; // 0x0
		// static const ::System::String* _ANIM_NAME_ULTRA_SKILL_Active; // 0x0
		// static const ::System::Single _FILL_BASE_RATIO; // 0x0
		// static const ::System::Single _FILL_MAX_RATIO; // 0x0
		::UnityEngine::UI::Slider* _UltraSkillProgress; // 0x18
		::UnityEngine::UI::Slider* _UltraSkillProgress2; // 0x20
		::RPG::Client::AnimatorButton* _UltraSkillBtn; // 0x28
		::System::Action* _UltraSkillBtnClickCallback; // 0x30
		::UnityEngine::Animation* _UltraSkillFullHint; // 0x38
		::System::Single _LastUltraSkillRatio; // 0x40
		::RPG::GameCore::FixPoint _CurSp; // 0x48
		::RPG::GameCore::FixPoint _MaxSp; // 0x50
		::RPG::GameCore::FixPoint _PendingCurSp; // 0x58
		::RPG::GameCore::FixPoint _PendingMaxSp; // 0x60
		::System::Boolean _IsSpDirty; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL_AWAKE_OFFSET))(this);
		}

		::System::Void RegisterCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL_REGISTERCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void _ResetState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL__RESETSTATE_OFFSET))(this);
		}

		::System::Void _RefreshSp(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL__REFRESHSP_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshOnSpChanged(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL__REFRESHONSPCHANGED_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL_LATEUPDATE_OFFSET))(this);
		}

		::System::Void _InsertUltraSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL__INSERTULTRASKILL_OFFSET))(this);
		}

		::System::Void _OnUltraSkillBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL__ONULTRASKILLBTNCLICK_OFFSET))(this);
		}

		::System::Void _OnAutoBattleStatusChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL__ONAUTOBATTLESTATUSCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnUltraSkillBegin(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL__ONULTRASKILLBEGIN_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEINGAMEULTRASKILLPANEL_ONDESTROY_OFFSET))(this);
		}
	};
}
