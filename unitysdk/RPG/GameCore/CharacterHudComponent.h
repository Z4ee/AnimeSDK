#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_ADDMODIFIER_OFFSET UNITYSDK_OFFSET(0xB5E0940)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5DF3B0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_ENABLETARGETHUDMINI_OFFSET UNITYSDK_OFFSET(0xB5E0100)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_ENABLETARGETHUD_OFFSET UNITYSDK_OFFSET(0xB5E02A0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_GET_ISSHOWPHASE_OFFSET UNITYSDK_OFFSET(0xB5E15C0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB5DF880)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xB5DFE70)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xB5E0060)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_REFRESHCHARACTERSPPRE_OFFSET UNITYSDK_OFFSET(0xB5E0850)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_REFRESHCHARACTERSP_OFFSET UNITYSDK_OFFSET(0xB5E0440)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_REMOVEMODIFIER_OFFSET UNITYSDK_OFFSET(0xB5E09A0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_SETHPINFOVISIBLE_OFFSET UNITYSDK_OFFSET(0xB5E0A60)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_SETSHOWPHASE_OFFSET UNITYSDK_OFFSET(0xB5E0B20)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_SETSTANCETOBEEMPTY_OFFSET UNITYSDK_OFFSET(0xB5E00B0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_SET_ISSHOWPHASE_OFFSET UNITYSDK_OFFSET(0xB5E15D0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xB5E0B90)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_UPDATEMODIFIERNUMBERS_OFFSET UNITYSDK_OFFSET(0xB5E0A00)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5E15E0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB5DF370)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYBEINGSTANCECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xB5E0F10)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYCHARACTERMODELCHANGE_OFFSET UNITYSDK_OFFSET(0xB5E1480)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYDAMAGEPERFORMFINISH_OFFSET UNITYSDK_OFFSET(0xB5E13F0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYSKILLPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0xB5E1530)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONCOOLDOWNCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xB5E0FB0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONDIRTYHPCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xB5E0D60)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYDYINGEVENT_BATTLEEVENT_OFFSET UNITYSDK_OFFSET(0xB5E11D0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYDYINGEVENT_OFFSET UNITYSDK_OFFSET(0xB5E1140)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYESCAPEEVENT_OFFSET UNITYSDK_OFFSET(0xB5E1360)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYREVIVEEVENT_OFFSET UNITYSDK_OFFSET(0xB5E1260)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONHPCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xB5E0BF0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONRALLYHPCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xB5E0DF0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONSPCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xB5E0C40)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONSPECIALSPCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xB5E0CD0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONSTANCECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xB5E0E80)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xB5E1630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterHudComponent_TypeDefinitionIndex = 52705;

	class CharacterHudComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__EnableTargetHudMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(CharacterHudComponent_TypeDefinitionIndex)->GetStaticField(0x44C40);
		}
		static ::System::Int32* StaticGet_sIsSpAddHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterHudComponent_TypeDefinitionIndex)->GetStaticField(0xF460);
		}
		::RPG::Client::BattleGamePhase* _BattlePhase; // 0x18
		::UnityEngine::AnimationState* _LoopOutlineAnimState; // 0x20
		::RPG::GameCore::TurnBasedAbilityComponent* _turnBasedAbilityRef; // 0x28
		::RPG::GameCore::CharacterModelComponent* _ModelComponentRef; // 0x30
		::UnityEngine::Animation* _RootAnimation; // 0x38
		::System::Single _LastDamageTextTimeStamp; // 0x40
		::System::Boolean _IsShowPhase_k__BackingField; // 0x44
		::UnityEngine::Vector3 _LastDamageTextOffset; // 0x48
		::UnityEngine::Vector3 _OffsetBase; // 0x54

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

		::System::Void InitComponent(::RPG::GameCore::CharacterModelComponent* ModelComponenet, ::RPG::GameCore::TurnBasedAbilityComponent* turnBasedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterModelComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_INITCOMPONENT_OFFSET))(this, ModelComponenet, turnBasedAbility);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void SetStanceToBeEmpty(::System::Boolean empty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_SETSTANCETOBEEMPTY_OFFSET))(this, empty);
		}

		::System::Void EnableTargetHudMini(::System::Boolean bEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_ENABLETARGETHUDMINI_OFFSET))(this, bEnable);
		}

		::System::Void EnableTargetHud(::System::Boolean bEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_ENABLETARGETHUD_OFFSET))(this, bEnable);
		}

		static ::System::Void RefreshCharacterSP(::UnityEngine::Transform* emptyRoot, ::UnityEngine::Transform* activeRoot, ::UnityEngine::Transform* fullRoot, ::RPG::GameCore::TurnBasedAbilityComponent* component, ::System::Boolean isAddSP)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_REFRESHCHARACTERSP_OFFSET))(emptyRoot, activeRoot, fullRoot, component, isAddSP);
		}

		static ::System::Void RefreshCharacterSPPre(::UnityEngine::Transform* emptyRoot, ::System::Int32 addSp, ::System::Int32 currentSP)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_REFRESHCHARACTERSPPRE_OFFSET))(emptyRoot, addSp, currentSP);
		}

		::System::Void AddModifier(::RPG::GameCore::TurnBasedModifierInstance* pModifierInstance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_ADDMODIFIER_OFFSET))(this, pModifierInstance);
		}

		::System::Void RemoveModifier(::RPG::GameCore::TurnBasedModifierInstance* pModifierInstance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_REMOVEMODIFIER_OFFSET))(this, pModifierInstance);
		}

		::System::Void UpdateModifierNumbers(::RPG::GameCore::TurnBasedModifierInstance* pModifierInstance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_UPDATEMODIFIERNUMBERS_OFFSET))(this, pModifierInstance);
		}

		::System::Void SetHPInfoVisible(::System::Boolean isVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_SETHPINFOVISIBLE_OFFSET))(this, isVisible);
		}

		::System::Void SetShowPhase(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_SETSHOWPHASE_OFFSET))(this, isShow);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _OnHPChangeEvent(::Class_0_16E4307DCC419505_382* Evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONHPCHANGEEVENT_OFFSET))(this, Evt);
		}

		::System::Void _OnSPChangeEvent(::Class_0_16E4307DCC419505_382* Evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONSPCHANGEEVENT_OFFSET))(this, Evt);
		}

		::System::Void _OnSpecialSPChangeEvent(::Class_0_16E4307DCC419505_382* Evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONSPECIALSPCHANGEEVENT_OFFSET))(this, Evt);
		}

		::System::Void _OnDirtyHPChangeEvent(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONDIRTYHPCHANGEEVENT_OFFSET))(this, evt);
		}

		::System::Void _OnRallyHPChangeEvent(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONRALLYHPCHANGEEVENT_OFFSET))(this, evt);
		}

		::System::Void _OnStanceChangeEvent(::Class_0_16E4307DCC419505_382* Evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONSTANCECHANGEEVENT_OFFSET))(this, Evt);
		}

		::System::Void _OnAbilityBeingStanceCountDown(::Class_0_16E4307DCC419505_382* Evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYBEINGSTANCECOUNTDOWN_OFFSET))(this, Evt);
		}

		::System::Void _OnCoolDownChangeEvent(::Class_0_16E4307DCC419505_382* Evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONCOOLDOWNCHANGEEVENT_OFFSET))(this, Evt);
		}

		::System::Void _OnEntityDyingEvent(::Class_0_16E4307DCC419505_382* Evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYDYINGEVENT_OFFSET))(this, Evt);
		}

		::System::Void _OnEntityDyingEvent_BattleEvent(::Class_0_16E4307DCC419505_382* Evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYDYINGEVENT_BATTLEEVENT_OFFSET))(this, Evt);
		}

		::System::Void _OnEntityReviveEvent(::Class_0_16E4307DCC419505_382* Evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYREVIVEEVENT_OFFSET))(this, Evt);
		}

		::System::Void _OnEntityEscapeEvent(::Class_0_16E4307DCC419505_382* Evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYESCAPEEVENT_OFFSET))(this, Evt);
		}

		::System::Void _OnAbilityDamagePerformFinish(::Class_0_16E4307DCC419505_382* Evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYDAMAGEPERFORMFINISH_OFFSET))(this, Evt);
		}

		::System::Void _OnAbilityCharacterModelChange(::Class_0_16E4307DCC419505_382* Evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYCHARACTERMODELCHANGE_OFFSET))(this, Evt);
		}

		::System::Void _OnAbilitySkillPropertyChange(::Class_0_16E4307DCC419505_382* Evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYSKILLPROPERTYCHANGE_OFFSET))(this, Evt);
		}

		::System::Boolean get_IsShowPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_GET_ISSHOWPHASE_OFFSET))(this);
		}

		::System::Void set_IsShowPhase(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_SET_ISSHOWPHASE_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
