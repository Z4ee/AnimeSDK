#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAbilityProperty.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/AdventureModifierEvent.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ForbidSelectReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/ModifierHitEffectStacking.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/PropertyStacking.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_8CB9647E1F3FB914.h"
#include "unitysdk/Struct_2_A98C406BD653F8E9.h"
#include "unitysdk/Struct_2_DF90B2BD73749811_1.h"
#include "unitysdk/Struct_2_FEFADCB82FEB841E_5.h"

class Class_0_16E4307DCC419505_22;
class Class_0_16E4307DCC419505_375;
class Class_1_2E57B88467AF63C8_5;
class Class_1_512CC108C22F737B;
class Class_1_5469D397DAE62876;
class Class_1_83AB3963F9C15714;
class Class_1_EE39BEBABF28049C;
class Class_2_1A037263741137E5;
class Class_2_A0580152EB393340;
class Class_2_F1C3EBA366E084A2;
class Class_3_C1B871875244D398;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class AdventureCharacterConfig; }
namespace RPG::GameCore { class AdventureCharacterDataComponent; }
namespace RPG::GameCore { class AdventureModifierConfig; }
namespace RPG::GameCore { class AdventureModifierInitParams; }
namespace RPG::GameCore { class AdventureModifierInstance; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ADDABILITY_OFFSET UNITYSDK_OFFSET(0xA817120)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ADDGLOBALWEAKNESS_OFFSET UNITYSDK_OFFSET(0xA819670)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_CHECKCANADDMODIFIER_OFFSET UNITYSDK_OFFSET(0xA815E30)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_CLEARADVANCEPERFORMRECORD_OFFSET UNITYSDK_OFFSET(0xA814060)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_COMPAREFIRSTADVANCEPERFORMBUFFINFO_OFFSET UNITYSDK_OFFSET(0xA813E00)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_CONFIRMFIRSTADVANCEPERFORMBUFFINFO_OFFSET UNITYSDK_OFFSET(0xA813EF0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DEFINEPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xA813850)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DEFINEPROPERTY_2_OFFSET UNITYSDK_OFFSET(0xA813720)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DEFINEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA8136B0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA812710)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ENTERTEMPTERFACETOTARGET_OFFSET UNITYSDK_OFFSET(0xA819150)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ENTERTEMPTER_OFFSET UNITYSDK_OFFSET(0xA818FD0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_EXITTEMPTER_OFFSET UNITYSDK_OFFSET(0xA8194E0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FINDMODIFIERINSTANCES_OFFSET UNITYSDK_OFFSET(0xA813630)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FINDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xA813570)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FORCEUPDATEBUFFALL_OFFSET UNITYSDK_OFFSET(0xA8179F0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FORCEUPDATEBUFFNEXTTICKONCE_OFFSET UNITYSDK_OFFSET(0xA8179A0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETMODIFIERBYINDEX_OFFSET UNITYSDK_OFFSET(0xA813480)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETMODIFIERCASTERBYBEHAVIORFLAG_OFFSET UNITYSDK_OFFSET(0xA816AB0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETNEEDDISPLAYMODIFIERS_OFFSET UNITYSDK_OFFSET(0xA815DF0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETONHITEFFECTOVERRIDES_OFFSET UNITYSDK_OFFSET(0xA81BF70)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETONHITEFFECTOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA81BDA0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0xA7EC0F0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_ABILITYCOMPONENTREF_OFFSET UNITYSDK_OFFSET(0xA81D0E0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_BUFFSYNCED_OFFSET UNITYSDK_OFFSET(0xA81D150)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_CUSTOMDATAREF_OFFSET UNITYSDK_OFFSET(0xA81D100)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_FORBIDSELECT_OFFSET UNITYSDK_OFFSET(0xA81D120)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_GLOBALWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xA81D170)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_ISSERVERTEAMABILITY_OFFSET UNITYSDK_OFFSET(0xA81D130)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_MODIFIERCOUNT_OFFSET UNITYSDK_OFFSET(0xA816D90)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_NEEDDISPLAYMODIFIERCOUNT_OFFSET UNITYSDK_OFFSET(0xA81D180)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_INITCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0xA812E10)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA812C10)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ISCONTAINBUFF_OFFSET UNITYSDK_OFFSET(0xA8140E0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ISCONTAINMODIFIERBEHAVIOR_OFFSET UNITYSDK_OFFSET(0xA8169F0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ISSNEAKING_OFFSET UNITYSDK_OFFSET(0xA81C6F0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_MODIFYPROPERTY_OFFSET UNITYSDK_OFFSET(0xA8138E0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ONBACKGROUND_OFFSET UNITYSDK_OFFSET(0xA81D080)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ONFOREGROUND_OFFSET UNITYSDK_OFFSET(0xA81D020)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ONMODIFIERINSTANCEDESTROY_OFFSET UNITYSDK_OFFSET(0xA815020)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_OVERRIDEONHITEFFECT_OFFSET UNITYSDK_OFFSET(0xA81B750)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_POSTPROCESSAFTERMODIFIERADD_OFFSET UNITYSDK_OFFSET(0xA816720)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_POSTPROCESSAFTERMODIFIERREMOVE_OFFSET UNITYSDK_OFFSET(0xA81CCC0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_PUSHNEWADVANCEPERFORMMODIFIERINFORECORD_OFFSET UNITYSDK_OFFSET(0xA813D20)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_REMOVEGLOBALWEAKNESSBYMODIFIER_OFFSET UNITYSDK_OFFSET(0xA819810)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_REMOVEONHITEFFECTOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA81BC40)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_REVERTALLADVANCEMODIFIER_OFFSET UNITYSDK_OFFSET(0xA8140A0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SETFORBIDSELECT_OFFSET UNITYSDK_OFFSET(0xA81CFB0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SETSNEAKEXPOSED_OFFSET UNITYSDK_OFFSET(0xA81C770)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_ABILITYCOMPONENTREF_OFFSET UNITYSDK_OFFSET(0xA81D0F0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_BUFFSYNCED_OFFSET UNITYSDK_OFFSET(0xA81D160)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_CUSTOMDATAREF_OFFSET UNITYSDK_OFFSET(0xA81D110)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_ISSERVERTEAMABILITY_OFFSET UNITYSDK_OFFSET(0xA81D140)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_STACKPROPERTY_OFFSET UNITYSDK_OFFSET(0xA817350)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SYNCBUFFSFROMSERVER_OFFSET UNITYSDK_OFFSET(0xA817A50)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TICKTEMPTER_OFFSET UNITYSDK_OFFSET(0xA81C3F0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xA812BA0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERBEFOREATTACK_OFFSET UNITYSDK_OFFSET(0xA816F40)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONAFTERBATTLE_OFFSET UNITYSDK_OFFSET(0xA8170C0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONATTACK_OFFSET UNITYSDK_OFFSET(0xA816FA0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONBEATTACK_OFFSET UNITYSDK_OFFSET(0xA817000)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONBEFOREBATTLE_OFFSET UNITYSDK_OFFSET(0xA816DF0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONOWNERBEKILLED_OFFSET UNITYSDK_OFFSET(0xA817060)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRYADDALERTVALUEWHENADDMODIFIER_OFFSET UNITYSDK_OFFSET(0xA815F60)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRYADDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xA815FB0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_UNSTACKPROPERTY_OFFSET UNITYSDK_OFFSET(0xA817890)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_USEABILITY_OFFSET UNITYSDK_OFFSET(0xA8132F0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__AFTERPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xA817490)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xA81D1D0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA812460)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__DOADDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xA815480)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__FINDAPPLIEDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xA8141B0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__GETSTACKINGEFFECTOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA81BBE0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__HANDLEMODIFIERCONFLICTPOOL_OFFSET UNITYSDK_OFFSET(0xA8148B0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__HANDLEMODIFIERINSTANCESTACKING_OFFSET UNITYSDK_OFFSET(0xA8143F0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__MODIFIERSEXECUTEEVENT_1_OFFSET UNITYSDK_OFFSET(0xA815350)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__MODIFIERSEXECUTEEVENT_OFFSET UNITYSDK_OFFSET(0xA816E50)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONADDNEWMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xA814B30)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0xA81C960)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xA81C7C0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONAFTERBUFFFULLUPDATE_OFFSET UNITYSDK_OFFSET(0xA81B5B0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONCHANGETOFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xA81C9F0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONNPCMONSTERCREATE_OFFSET UNITYSDK_OFFSET(0xA819E20)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONPLAYERTRANSFERTOFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xA81C8A0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONPLAYERTRANSFERTOREALAVATAR_OFFSET UNITYSDK_OFFSET(0xA81C900)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONSTAGEBYSTORY_OFFSET UNITYSDK_OFFSET(0xA819EB0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONSTAGE_OFFSET UNITYSDK_OFFSET(0xA819F10)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONTEAMLEADERCHANGE_OFFSET UNITYSDK_OFFSET(0xA81A030)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONUNSTAGE_OFFSET UNITYSDK_OFFSET(0xA819FD0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__REFRESHMAXHP_OFFSET UNITYSDK_OFFSET(0xA81A0E0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SETUPJSONCONFIGABILITY_OFFSET UNITYSDK_OFFSET(0xA8198F0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SYNCBUFFFROMSERVER_OFFSET UNITYSDK_OFFSET(0xA817FC0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SYNCDYNAMICVALUEFROMBUFFINFO_OFFSET UNITYSDK_OFFSET(0xA81AAE0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SYNCMODIFIERBYBUFFINFO_OFFSET UNITYSDK_OFFSET(0xA81A220)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__TICKNEEDDISPLAYMODIFIER_OFFSET UNITYSDK_OFFSET(0xA81C5D0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA81D330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAbilityComponent_TypeDefinitionIndex = 45868;

	class AdventureAbilityComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_2E57B88467AF63C8_5*>** StaticGet__BuffLUT()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_2E57B88467AF63C8_5*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureAbilityComponent_TypeDefinitionIndex)->GetStaticField(0x41740);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__SyncedBuffId()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AdventureAbilityComponent_TypeDefinitionIndex)->GetStaticField(0x41748);
		}
		static ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>** StaticGet__DynamicFloatCache()
		{
			return (::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>**)Il2CppClass::FromTypeDefinitionIndex(AdventureAbilityComponent_TypeDefinitionIndex)->GetStaticField(0x41750);
		}
		static ::Il2CppArray<::RPG::GameCore::AdventureModifierInstance*>** StaticGet_s_SearchResultList()
		{
			return (::Il2CppArray<::RPG::GameCore::AdventureModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureAbilityComponent_TypeDefinitionIndex)->GetStaticField(0x41758);
		}
		static ::System::Single* StaticGet__TempterStopDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AdventureAbilityComponent_TypeDefinitionIndex)->GetStaticField(0x116F0);
		}
		::RPG::GameCore::AbilityComponent* _AbilityComponentRef_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::Struct_2_FEFADCB82FEB841E_5>* _AdvanceBuffPerformQueue; // 0x20
		::Class_2_F1C3EBA366E084A2* _FeatureFlagCmpt; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AdventureModifierInstance*>* _MazeBuffIdToModifier; // 0x30
		::Class_3_C1B871875244D398* _CustomDataRef_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::Struct_2_8CB9647E1F3FB914>* _OnHitEffectOverride; // 0x40
		::RPG::GameCore::CharacterVisibleComponent* _VisibleCmpt; // 0x48
		::Class_2_A0580152EB393340* _NavCmpt; // 0x50
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureModifierBehaviorFlag, ::System::Int32>* _AdventureModifierBehaviorFlagDict; // 0x58
		::System::Collections::Generic::List_1<::Struct_2_8CB9647E1F3FB914>* _OnHitEffectMultipleOverride; // 0x60
		::RPG::GameCore::GameEntity* _TempteTarget; // 0x68
		::System::Collections::Generic::List_1<::RPG::GameCore::AdventureModifierInstance*>* _NeedDisplayModifier; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _AbilityToSkillMapping; // 0x78
		::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>* _GlobalWeaknessList; // 0x80
		::RPG::GameCore::GameComponentBase* _ServerEntityInfoProvider; // 0x88
		::Il2CppArray<::Class_1_83AB3963F9C15714*>* _AbilityProperties; // 0x90
		::RPG::GameCore::NPCComponent* _NpcCmpt; // 0x98
		::RPG::GameCore::AdventureCharacterConfig* _CharacterConfig; // 0xA0
		::System::Int32 _HighestPriorityOnHitEffect; // 0xA8
		::System::Int32 _AdvanceBuffPerformQueueLength; // 0xAC
		::System::Boolean TriggerBattleOnAttacked; // 0xB0
		::System::Boolean IsAttackingTriggerBattle; // 0xB1
		::System::Boolean _IsInTempter; // 0xB2
		::System::Boolean _IsServerTeamAbility_k__BackingField; // 0xB3
		::System::UInt32 _ForbidSelectCount; // 0xB4
		::System::Int32 _SyncedBuffStampEntity; // 0xB8
		::System::Boolean _TempterMoving; // 0xBC
		::System::Boolean _ForceUpdateBuffOnce; // 0xBD
		::System::Boolean _IsSneakExposed; // 0xBE
		::System::Boolean _BuffSynced_k__BackingField; // 0xBF
		::System::Int32 _SyncedBuffStamp; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void InitComponent(::RPG::GameCore::AdventureCharacterDataComponent* advCharacter, ::RPG::GameCore::AbilityComponent* Ability, ::Class_3_C1B871875244D398* customDataCpnt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterDataComponent*, ::RPG::GameCore::AbilityComponent*, ::Class_3_C1B871875244D398*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_INITCOMPONENT_OFFSET))(this, advCharacter, Ability, customDataCpnt);
		}

		::System::Void InitComponent_1(::Class_0_16E4307DCC419505_22* skillConfig, ::RPG::GameCore::AbilityComponent* Ability)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_22*, ::RPG::GameCore::AbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_INITCOMPONENT_1_OFFSET))(this, skillConfig, Ability);
		}

		::Class_2_1A037263741137E5* UseAbility(::System::String* sAbilityName, ::Class_1_512CC108C22F737B* useAbilityParam, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* InheritTargets)
		{
			return ((::Class_2_1A037263741137E5*(*)(::PVOID, ::System::String*, ::Class_1_512CC108C22F737B*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_USEABILITY_OFFSET))(this, sAbilityName, useAbilityParam, InheritTargets);
		}

		::RPG::GameCore::AdventureModifierInstance* GetModifierByIndex(::System::Int32 nIndex)
		{
			return ((::RPG::GameCore::AdventureModifierInstance*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETMODIFIERBYINDEX_OFFSET))(this, nIndex);
		}

		::RPG::GameCore::AdventureModifierInstance* FindModifierInstance(::System::String* sModifierName, ::System::UInt32 nRuntimeID)
		{
			return ((::RPG::GameCore::AdventureModifierInstance*(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FINDMODIFIERINSTANCE_OFFSET))(this, sModifierName, nRuntimeID);
		}

		::System::Int32 FindModifierInstances(::System::String* sModifierName, ::System::UInt32 nRuntimeID, ::Il2CppArray<::RPG::GameCore::AdventureModifierInstance*>* arrResults)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::AdventureModifierInstance*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FINDMODIFIERINSTANCES_OFFSET))(this, sModifierName, nRuntimeID, arrResults);
		}

		::RPG::GameCore::FixPoint GetProperty(::RPG::GameCore::AdventureAbilityProperty eProperty)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETPROPERTY_OFFSET))(this, eProperty);
		}

		::System::Void DefineProperty(::RPG::GameCore::AdventureAbilityProperty eProperty, ::RPG::GameCore::PropertyStacking eStacking, ::RPG::GameCore::FixPoint fInitValue)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::RPG::GameCore::PropertyStacking, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DEFINEPROPERTY_OFFSET))(this, eProperty, eStacking, fInitValue);
		}

		::System::Void DefineProperty_1(::RPG::GameCore::AdventureAbilityProperty eProperty, ::RPG::GameCore::PropertyStacking eStacking, ::RPG::GameCore::FixPoint fInitValue, ::RPG::GameCore::FixPoint fMin)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::RPG::GameCore::PropertyStacking, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DEFINEPROPERTY_1_OFFSET))(this, eProperty, eStacking, fInitValue, fMin);
		}

		::System::Void DefineProperty_2(::RPG::GameCore::AdventureAbilityProperty eProperty, ::RPG::GameCore::PropertyStacking eStacking, ::RPG::GameCore::FixPoint fInitValue, ::RPG::GameCore::FixPoint fMin, ::RPG::GameCore::FixPoint fMax)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::RPG::GameCore::PropertyStacking, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DEFINEPROPERTY_2_OFFSET))(this, eProperty, eStacking, fInitValue, fMin, fMax);
		}

		::System::Void ModifyProperty(::RPG::GameCore::AdventureAbilityProperty eProperty, ::RPG::GameCore::PropertyModifyFunction eModifyFunction, ::RPG::GameCore::FixPoint fModifyValue)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_MODIFYPROPERTY_OFFSET))(this, eProperty, eModifyFunction, fModifyValue);
		}

		::System::Void PushNewAdvancePerformModifierInfoRecord(::System::UInt32 fromBuffID, ::System::Boolean isAdd)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_PUSHNEWADVANCEPERFORMMODIFIERINFORECORD_OFFSET))(this, fromBuffID, isAdd);
		}

		::System::Boolean CompareFirstAdvancePerformBuffInfo(::Class_1_2E57B88467AF63C8_5* info, ::System::Boolean isAdd, ::System::Boolean& rewind)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_2E57B88467AF63C8_5*, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_COMPAREFIRSTADVANCEPERFORMBUFFINFO_OFFSET))(this, info, isAdd, rewind);
		}

		::System::Void ConfirmFirstAdvancePerformBuffInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_CONFIRMFIRSTADVANCEPERFORMBUFFINFO_OFFSET))(this);
		}

		::System::Void ClearAdvancePerformRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_CLEARADVANCEPERFORMRECORD_OFFSET))(this);
		}

		::System::Void RevertAllAdvanceModifier()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_REVERTALLADVANCEMODIFIER_OFFSET))(this);
		}

		::System::Boolean IsContainBuff(::System::UInt32 buffID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ISCONTAINBUFF_OFFSET))(this, buffID);
		}

		::RPG::GameCore::AdventureModifierInstance* _FindAppliedModifierInstance(::System::String* sModifierName, ::RPG::GameCore::AdventureModifierConfig* pModifierConfig, ::Class_2_1A037263741137E5* pParentAbility)
		{
			return ((::RPG::GameCore::AdventureModifierInstance*(*)(::PVOID, ::System::String*, ::RPG::GameCore::AdventureModifierConfig*, ::Class_2_1A037263741137E5*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__FINDAPPLIEDMODIFIERINSTANCE_OFFSET))(this, sModifierName, pModifierConfig, pParentAbility);
		}

		::System::Boolean _HandleModifierInstanceStacking(::RPG::GameCore::AdventureModifierInstance* pAppliedInstance, ::RPG::GameCore::AdventureModifierInitParams* pInitParams, ::RPG::GameCore::AdventureModifierConfig* pModifierConfig, ::Class_2_1A037263741137E5* pParentAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*, ::RPG::GameCore::AdventureModifierInitParams*, ::RPG::GameCore::AdventureModifierConfig*, ::Class_2_1A037263741137E5*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__HANDLEMODIFIERINSTANCESTACKING_OFFSET))(this, pAppliedInstance, pInitParams, pModifierConfig, pParentAbility);
		}

		::System::Void _HandleModifierConflictPool(::System::UInt32 iFromBuffID, ::RPG::GameCore::AdventureModifierInstance* pAppliedInstance)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__HANDLEMODIFIERCONFLICTPOOL_OFFSET))(this, iFromBuffID, pAppliedInstance);
		}

		::System::Void _OnAddNewModifierInstance(::RPG::GameCore::AdventureModifierInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONADDNEWMODIFIERINSTANCE_OFFSET))(this, instance);
		}

		::System::Void OnModifierInstanceDestroy(::RPG::GameCore::AdventureModifierInstance* modifierInstance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ONMODIFIERINSTANCEDESTROY_OFFSET))(this, modifierInstance);
		}

		::RPG::GameCore::AdventureModifierInstance* _DoAddModifierInstance(::System::String* sModifierName, ::RPG::GameCore::AdventureModifierConfig* pModifierConfig, ::Class_2_1A037263741137E5* pParentAbility, ::System::UInt32 iFromBuffID, ::RPG::GameCore::AdventureModifierInitParams* pInitParams, ::RPG::GameCore::GameEntity* specifiedCaster)
		{
			return ((::RPG::GameCore::AdventureModifierInstance*(*)(::PVOID, ::System::String*, ::RPG::GameCore::AdventureModifierConfig*, ::Class_2_1A037263741137E5*, ::System::UInt32, ::RPG::GameCore::AdventureModifierInitParams*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__DOADDMODIFIERINSTANCE_OFFSET))(this, sModifierName, pModifierConfig, pParentAbility, iFromBuffID, pInitParams, specifiedCaster);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AdventureModifierInstance*>* GetNeedDisplayModifiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AdventureModifierInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETNEEDDISPLAYMODIFIERS_OFFSET))(this);
		}

		::System::Boolean CheckCanAddModifier(::RPG::GameCore::AdventureModifierConfig* modifierConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_CHECKCANADDMODIFIER_OFFSET))(this, modifierConfig);
		}

		::System::Void TryAddAlertValueWhenAddModifier(::Class_2_1A037263741137E5* pParentAbility, ::RPG::GameCore::AdventureModifierConfig* modifierConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1A037263741137E5*, ::RPG::GameCore::AdventureModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRYADDALERTVALUEWHENADDMODIFIER_OFFSET))(this, pParentAbility, modifierConfig);
		}

		::System::Boolean TryAddModifierInstance(::System::String* sModifierName, ::RPG::GameCore::AdventureModifierConfig* pModifierConfig, ::System::UInt32 iFromBuffID, ::Class_2_1A037263741137E5* pParentAbility, ::RPG::GameCore::AdventureModifierInitParams* pInitParams, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* pBindingAffectedEntities, ::RPG::GameCore::GameEntity* specifiedCaster)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::AdventureModifierConfig*, ::System::UInt32, ::Class_2_1A037263741137E5*, ::RPG::GameCore::AdventureModifierInitParams*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRYADDMODIFIERINSTANCE_OFFSET))(this, sModifierName, pModifierConfig, iFromBuffID, pParentAbility, pInitParams, pBindingAffectedEntities, specifiedCaster);
		}

		::System::Boolean IsContainModifierBehavior(::RPG::GameCore::AdventureModifierBehaviorFlag eFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ISCONTAINMODIFIERBEHAVIOR_OFFSET))(this, eFlag);
		}

		::RPG::GameCore::GameEntity* GetModifierCasterByBehaviorFlag(::RPG::GameCore::AdventureModifierBehaviorFlag flag)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETMODIFIERCASTERBYBEHAVIORFLAG_OFFSET))(this, flag);
		}

		::System::Void TriggerOnBeforeBattle(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* paramEntityList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONBEFOREBATTLE_OFFSET))(this, paramEntityList);
		}

		::System::Void TriggerBeforeAttack(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* paramEntityList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERBEFOREATTACK_OFFSET))(this, paramEntityList);
		}

		::System::Void TriggerOnAttack(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* paramEntityList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONATTACK_OFFSET))(this, paramEntityList);
		}

		::System::Void TriggerOnBeAttack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONBEATTACK_OFFSET))(this);
		}

		::System::Void TriggerOnOwnerBeKilled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONOWNERBEKILLED_OFFSET))(this);
		}

		::System::Void TriggerOnAfterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONAFTERBATTLE_OFFSET))(this);
		}

		::Class_2_1A037263741137E5* AddAbility(::System::String* sAbilityName)
		{
			return ((::Class_2_1A037263741137E5*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ADDABILITY_OFFSET))(this, sAbilityName);
		}

		::System::Int32 StackProperty(::RPG::GameCore::AdventureAbilityProperty Property, ::RPG::GameCore::FixPoint PropertyValue)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_STACKPROPERTY_OFFSET))(this, Property, PropertyValue);
		}

		::System::Void UnStackProperty(::RPG::GameCore::AdventureAbilityProperty Property, ::System::Int32 nPropertyIndex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_UNSTACKPROPERTY_OFFSET))(this, Property, nPropertyIndex);
		}

		::System::Void ForceUpdateBuffNextTickOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FORCEUPDATEBUFFNEXTTICKONCE_OFFSET))(this);
		}

		::System::Void ForceUpdateBuffAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FORCEUPDATEBUFFALL_OFFSET))(this);
		}

		::System::Void SyncBuffsFromServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SYNCBUFFSFROMSERVER_OFFSET))(this);
		}

		::System::Void EnterTempter(::RPG::GameCore::GameEntity* caster)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ENTERTEMPTER_OFFSET))(this, caster);
		}

		::System::Void ExitTempter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_EXITTEMPTER_OFFSET))(this);
		}

		::System::Void AddGlobalWeakness(::RPG::GameCore::AdventureModifierInstance* mdf, ::RPG::GameCore::AttackDamageType weakness, ::RPG::GameCore::MonsterRank minRank)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*, ::RPG::GameCore::AttackDamageType, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ADDGLOBALWEAKNESS_OFFSET))(this, mdf, weakness, minRank);
		}

		::System::Void RemoveGlobalWeaknessByModifier(::RPG::GameCore::AdventureModifierInstance* mdf)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_REMOVEGLOBALWEAKNESSBYMODIFIER_OFFSET))(this, mdf);
		}

		::System::Void _SetupJsonConfigAbility(::Class_0_16E4307DCC419505_22* skillConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_22*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SETUPJSONCONFIGABILITY_OFFSET))(this, skillConfig);
		}

		::System::Void _OnNpcMonsterCreate(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONNPCMONSTERCREATE_OFFSET))(this, obj);
		}

		::System::Void _OnStageByStory(::Class_0_16E4307DCC419505_375* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONSTAGEBYSTORY_OFFSET))(this, evt);
		}

		::System::Void _OnStage(::Class_0_16E4307DCC419505_375* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONSTAGE_OFFSET))(this, evt);
		}

		::System::Void _OnUnstage(::Class_0_16E4307DCC419505_375* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONUNSTAGE_OFFSET))(this, evt);
		}

		::System::Void _OnTeamLeaderChange(::Class_0_16E4307DCC419505_375* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONTEAMLEADERCHANGE_OFFSET))(this, evt);
		}

		::System::Void _ModifiersExecuteEvent(::RPG::GameCore::AdventureModifierEvent eEvent, ::RPG::GameCore::GameEntity* pParamEntity, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* pParamEntityList, ::System::Boolean bExecuteWhenModifierDestroyed)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierEvent, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__MODIFIERSEXECUTEEVENT_OFFSET))(this, eEvent, pParamEntity, pParamEntityList, bExecuteWhenModifierDestroyed);
		}

		::System::Void _ModifiersExecuteEvent_1(::RPG::GameCore::AdventureModifierEvent eEvent, ::Class_1_5469D397DAE62876* paramData, ::System::Boolean bExecuteWhenModifierDestroyed)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierEvent, ::Class_1_5469D397DAE62876*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__MODIFIERSEXECUTEEVENT_1_OFFSET))(this, eEvent, paramData, bExecuteWhenModifierDestroyed);
		}

		::System::Void _AfterPropertyChanged(::RPG::GameCore::AdventureAbilityProperty eProperty, ::RPG::GameCore::FixPoint fOldValue, ::RPG::GameCore::FixPoint fNewValue, ::RPG::GameCore::FixPoint fOriginModifyValue, ::RPG::GameCore::FixPoint fChangeValue)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__AFTERPROPERTYCHANGED_OFFSET))(this, eProperty, fOldValue, fNewValue, fOriginModifyValue, fChangeValue);
		}

		::System::Void _RefreshMaxHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__REFRESHMAXHP_OFFSET))(this);
		}

		::System::Void _SyncBuffFromServer(::Class_1_EE39BEBABF28049C* def, ::System::Boolean fullUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EE39BEBABF28049C*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SYNCBUFFFROMSERVER_OFFSET))(this, def, fullUpdate);
		}

		static ::System::Void _SyncModifierByBuffInfo(::RPG::GameCore::AdventureModifierInstance* modifierInstance, ::Class_1_2E57B88467AF63C8_5* buffInfo)
		{
			return ((::System::Void(*)(::RPG::GameCore::AdventureModifierInstance*, ::Class_1_2E57B88467AF63C8_5*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SYNCMODIFIERBYBUFFINFO_OFFSET))(modifierInstance, buffInfo);
		}

		static ::System::Void _SyncDynamicValueFromBuffInfo(::System::Boolean syncServerValue, ::System::Boolean syncExcelDefaultValue, ::Class_1_2E57B88467AF63C8_5* syncBuffInfo, ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* dynamicValueContainer)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::Class_1_2E57B88467AF63C8_5*, ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SYNCDYNAMICVALUEFROMBUFFINFO_OFFSET))(syncServerValue, syncExcelDefaultValue, syncBuffInfo, dynamicValueContainer);
		}

		::System::Int32 OverrideOnHitEffect(::System::String* strEffectPath, ::System::Int32 priority, ::System::Boolean useOverrideOffset, ::RPG::MVector3 overrideOffset, ::RPG::GameCore::ModifierHitEffectStacking stacking)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean, ::RPG::MVector3, ::RPG::GameCore::ModifierHitEffectStacking))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_OVERRIDEONHITEFFECT_OFFSET))(this, strEffectPath, priority, useOverrideOffset, overrideOffset, stacking);
		}

		::System::Void RemoveOnHitEffectOverride(::System::Int32 index, ::RPG::GameCore::ModifierHitEffectStacking stacking)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::ModifierHitEffectStacking))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_REMOVEONHITEFFECTOVERRIDE_OFFSET))(this, index, stacking);
		}

		::System::Boolean GetOnHitEffectOverride(::System::String*& effectPath, ::System::Boolean& overrideOffset, ::RPG::MVector3& effectOffset)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::System::Boolean&, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETONHITEFFECTOVERRIDE_OFFSET))(this, effectPath, overrideOffset, effectOffset);
		}

		::System::Void GetOnHitEffectOverrides(::System::Collections::Generic::List_1<::System::String*>*& effectPaths, ::System::Boolean& overrideOffset, ::RPG::MVector3& effectOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Boolean&, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETONHITEFFECTOVERRIDES_OFFSET))(this, effectPaths, overrideOffset, effectOffset);
		}

		::System::Collections::Generic::List_1<::Struct_2_8CB9647E1F3FB914>* _GetStackingEffectOverride(::RPG::GameCore::ModifierHitEffectStacking stacking)
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_8CB9647E1F3FB914>*(*)(::PVOID, ::RPG::GameCore::ModifierHitEffectStacking))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__GETSTACKINGEFFECTOVERRIDE_OFFSET))(this, stacking);
		}

		::System::Void TickTempter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TICKTEMPTER_OFFSET))(this);
		}

		::System::Void _TickNeedDisplayModifier()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__TICKNEEDDISPLAYMODIFIER_OFFSET))(this);
		}

		::System::Void EnterTempterFaceToTarget(::RPG::GameCore::GameEntity* targetEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ENTERTEMPTERFACETOTARGET_OFFSET))(this, targetEntity);
		}

		::System::Boolean IsSneaking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ISSNEAKING_OFFSET))(this);
		}

		::System::Void SetSneakExposed(::System::Boolean exposed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SETSNEAKEXPOSED_OFFSET))(this, exposed);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _OnPlayerTransferToFakeAvatar(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONPLAYERTRANSFERTOFAKEAVATAR_OFFSET))(this, arg);
		}

		::System::Void _OnPlayerTransferToRealAvatar(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONPLAYERTRANSFERTOREALAVATAR_OFFSET))(this, arg);
		}

		::System::Void _OnAfterBuffFullUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONAFTERBUFFFULLUPDATE_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONADVENTUREPHASEEND_OFFSET))(this, arg);
		}

		::System::Void _OnChangeToFakeAvatar(::Class_0_16E4307DCC419505_375* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONCHANGETOFAKEAVATAR_OFFSET))(this, evt);
		}

		::RPG::GameCore::AdventureModifierInstance* PostProcessAfterModifierAdd(::RPG::GameCore::AdventureModifierInstance* pAppliedInstance)
		{
			return ((::RPG::GameCore::AdventureModifierInstance*(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_POSTPROCESSAFTERMODIFIERADD_OFFSET))(this, pAppliedInstance);
		}

		::System::Void PostProcessAfterModifierRemove(::RPG::GameCore::AdventureModifierInstance* pAppliedInstance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_POSTPROCESSAFTERMODIFIERREMOVE_OFFSET))(this, pAppliedInstance);
		}

		::System::Void SetForbidSelect(::System::Boolean enable, ::RPG::GameCore::ForbidSelectReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::ForbidSelectReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SETFORBIDSELECT_OFFSET))(this, enable, reason);
		}

		::System::Void OnForeGround()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ONFOREGROUND_OFFSET))(this);
		}

		::System::Void OnBackGround()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ONBACKGROUND_OFFSET))(this);
		}

		::RPG::GameCore::AbilityComponent* get_AbilityComponentRef()
		{
			return ((::RPG::GameCore::AbilityComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_ABILITYCOMPONENTREF_OFFSET))(this);
		}

		::System::Void set_AbilityComponentRef(::RPG::GameCore::AbilityComponent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_ABILITYCOMPONENTREF_OFFSET))(this, value);
		}

		::Class_3_C1B871875244D398* get_CustomDataRef()
		{
			return ((::Class_3_C1B871875244D398*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_CUSTOMDATAREF_OFFSET))(this);
		}

		::System::Void set_CustomDataRef(::Class_3_C1B871875244D398* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_C1B871875244D398*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_CUSTOMDATAREF_OFFSET))(this, value);
		}

		::System::Int32 get_ModifierCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_MODIFIERCOUNT_OFFSET))(this);
		}

		::System::Boolean get_ForbidSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_FORBIDSELECT_OFFSET))(this);
		}

		::System::Boolean get_IsServerTeamAbility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_ISSERVERTEAMABILITY_OFFSET))(this);
		}

		::System::Void set_IsServerTeamAbility(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_ISSERVERTEAMABILITY_OFFSET))(this, value);
		}

		::System::Boolean get_BuffSynced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_BUFFSYNCED_OFFSET))(this);
		}

		::System::Void set_BuffSynced(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_BUFFSYNCED_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>* get_GlobalWeaknessList()
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_GLOBALWEAKNESSLIST_OFFSET))(this);
		}

		::System::Int32 get_NeedDisplayModifierCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_NEEDDISPLAYMODIFIERCOUNT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
