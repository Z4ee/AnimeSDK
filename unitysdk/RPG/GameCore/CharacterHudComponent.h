#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_ADDMODIFIER_OFFSET UNITYSDK_OFFSET(0xCD471B0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD45950)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_ENABLETARGETHUDMINI_OFFSET UNITYSDK_OFFSET(0xCD46820)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_ENABLETARGETHUD_OFFSET UNITYSDK_OFFSET(0xCD469C0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_GET_ISSHOWPHASE_OFFSET UNITYSDK_OFFSET(0xCD47E60)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCD45ED0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xCD46590)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xCD46780)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_REFRESHCHARACTERSPPRE_OFFSET UNITYSDK_OFFSET(0xCD470C0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_REFRESHCHARACTERSP_OFFSET UNITYSDK_OFFSET(0xCD46B60)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_REMOVEMODIFIER_OFFSET UNITYSDK_OFFSET(0xCD47210)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_SETHPINFOVISIBLE_OFFSET UNITYSDK_OFFSET(0xCD472D0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_SETSHOWPHASE_OFFSET UNITYSDK_OFFSET(0xCD47390)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_SETSTANCETOBEEMPTY_OFFSET UNITYSDK_OFFSET(0xCD467D0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_SET_ISSHOWPHASE_OFFSET UNITYSDK_OFFSET(0xCD47E70)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xCD47400)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_UPDATEMODIFIERNUMBERS_OFFSET UNITYSDK_OFFSET(0xCD47270)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD47E80)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCD45910)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYBEINGSTANCECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xCD47780)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYCHARACTERMODELCHANGE_OFFSET UNITYSDK_OFFSET(0xCD47D20)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYDAMAGEPERFORMFINISH_OFFSET UNITYSDK_OFFSET(0xCD47C80)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYSKILLPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0xCD47DD0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONCOOLDOWNCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xCD47820)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONDIRTYHPCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xCD475D0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYDYINGEVENT_BATTLEEVENT_OFFSET UNITYSDK_OFFSET(0xCD47A40)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYDYINGEVENT_OFFSET UNITYSDK_OFFSET(0xCD479B0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYESCAPEEVENT_OFFSET UNITYSDK_OFFSET(0xCD47BE0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYREVIVEEVENT_OFFSET UNITYSDK_OFFSET(0xCD47AD0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONHPCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xCD47460)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONRALLYHPCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xCD47660)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONSPCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xCD474B0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONSPECIALSPCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xCD47540)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONSTANCECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xCD476F0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xCD47ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterHudComponent_TypeDefinitionIndex = 53407;

	class CharacterHudComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__EnableTargetHudMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(CharacterHudComponent_TypeDefinitionIndex)->GetStaticField(0x665D0);
		}
		static ::System::Int32* StaticGet_sIsSpAddHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterHudComponent_TypeDefinitionIndex)->GetStaticField(0x13D90);
		}
		::RPG::GameCore::CharacterModelComponent* _ModelComponentRef; // 0x18
		::RPG::Client::BattleGamePhase* _BattlePhase; // 0x20
		::RPG::GameCore::TurnBasedAbilityComponent* _turnBasedAbilityRef; // 0x28
		::UnityEngine::AnimationState* _LoopOutlineAnimState; // 0x30
		::UnityEngine::Animation* _RootAnimation; // 0x38
		::UnityEngine::Vector3 _OffsetBase; // 0x40
		::System::Boolean _IsShowPhase_k__BackingField; // 0x4C
		::System::Single _LastDamageTextTimeStamp; // 0x50
		::UnityEngine::Vector3 _LastDamageTextOffset; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::CharacterModelComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterModelComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_INITCOMPONENT_OFFSET))(this, a1, a2);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void SetStanceToBeEmpty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_SETSTANCETOBEEMPTY_OFFSET))(this, a1);
		}

		::System::Void EnableTargetHudMini(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_ENABLETARGETHUDMINI_OFFSET))(this, a1);
		}

		::System::Void EnableTargetHud(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_ENABLETARGETHUD_OFFSET))(this, a1);
		}

		static ::System::Void RefreshCharacterSP(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_REFRESHCHARACTERSP_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void RefreshCharacterSPPre(::UnityEngine::Transform* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_REFRESHCHARACTERSPPRE_OFFSET))(a1, a2, a3);
		}

		::System::Void AddModifier(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_ADDMODIFIER_OFFSET))(this, a1);
		}

		::System::Void RemoveModifier(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_REMOVEMODIFIER_OFFSET))(this, a1);
		}

		::System::Void UpdateModifierNumbers(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_UPDATEMODIFIERNUMBERS_OFFSET))(this, a1);
		}

		::System::Void SetHPInfoVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_SETHPINFOVISIBLE_OFFSET))(this, a1);
		}

		::System::Void SetShowPhase(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_SETSHOWPHASE_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnHPChangeEvent(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONHPCHANGEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnSPChangeEvent(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONSPCHANGEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnSpecialSPChangeEvent(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONSPECIALSPCHANGEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnDirtyHPChangeEvent(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONDIRTYHPCHANGEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnRallyHPChangeEvent(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONRALLYHPCHANGEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnStanceChangeEvent(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONSTANCECHANGEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnAbilityBeingStanceCountDown(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYBEINGSTANCECOUNTDOWN_OFFSET))(this, a1);
		}

		::System::Void _OnCoolDownChangeEvent(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONCOOLDOWNCHANGEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnEntityDyingEvent(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYDYINGEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnEntityDyingEvent_BattleEvent(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYDYINGEVENT_BATTLEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnEntityReviveEvent(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYREVIVEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnEntityEscapeEvent(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYESCAPEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnAbilityDamagePerformFinish(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYDAMAGEPERFORMFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnAbilityCharacterModelChange(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYCHARACTERMODELCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnAbilitySkillPropertyChange(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYSKILLPROPERTYCHANGE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_GET_ISSHOWPHASE_OFFSET))(this);
		}

		::System::Void set_IsShowPhase(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_SET_ISSHOWPHASE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}
	};
}
