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

class Class_0_16E4307DCC419505_18;
class Class_0_16E4307DCC419505_401;
class Class_1_2E57B88467AF63C8_8;
class Class_1_512CC108C22F737B;
class Class_1_5469D397DAE62876;
class Class_1_83AB3963F9C15714;
class Class_1_EE39BEBABF28049C;
class Class_2_6052D6419BE52328;
class Class_2_A0580152EB393340;
class Class_2_F1C3EBA366E084A2;
class Class_3_47866C0C90C73674;
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

#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ADDABILITY_OFFSET UNITYSDK_OFFSET(0xCCBB310)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ADDGLOBALWEAKNESS_OFFSET UNITYSDK_OFFSET(0xCCBCE60)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_CHECKCANADDMODIFIER_OFFSET UNITYSDK_OFFSET(0xCCBA270)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_CLEARADVANCEPERFORMRECORD_OFFSET UNITYSDK_OFFSET(0xCCB8150)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_COMPAREFIRSTADVANCEPERFORMBUFFINFO_OFFSET UNITYSDK_OFFSET(0xCCB7EC0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_CONFIRMFIRSTADVANCEPERFORMBUFFINFO_OFFSET UNITYSDK_OFFSET(0xCCB7FD0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DEFINEPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xCCB74A0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DEFINEPROPERTY_2_OFFSET UNITYSDK_OFFSET(0xCCB7380)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DEFINEPROPERTY_OFFSET UNITYSDK_OFFSET(0xCCB7300)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCCB5710)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ENTERTEMPTERFACETOTARGET_OFFSET UNITYSDK_OFFSET(0xCCBC940)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ENTERTEMPTER_OFFSET UNITYSDK_OFFSET(0xCCBC7C0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_EXITTEMPTER_OFFSET UNITYSDK_OFFSET(0xCCBCCD0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FINDMODIFIERINSTANCES_OFFSET UNITYSDK_OFFSET(0xCCB7200)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FINDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xCCB7140)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FORCEUPDATEBUFFALL_OFFSET UNITYSDK_OFFSET(0xCCBB780)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FORCEUPDATEBUFFNEXTTICKONCE_OFFSET UNITYSDK_OFFSET(0xCCBB730)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETMODIFIERBYINDEX_OFFSET UNITYSDK_OFFSET(0xCCB70A0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETMODIFIERCASTERBYBEHAVIORFLAG_OFFSET UNITYSDK_OFFSET(0xCCBACA0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETNEEDDISPLAYMODIFIERS_OFFSET UNITYSDK_OFFSET(0xCCBA220)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETONHITEFFECTOVERRIDES_OFFSET UNITYSDK_OFFSET(0xCCBF260)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETONHITEFFECTOVERRIDE_OFFSET UNITYSDK_OFFSET(0xCCBF040)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0xCCB7280)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_ABILITYCOMPONENTREF_OFFSET UNITYSDK_OFFSET(0xCCC0140)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_BUFFSYNCED_OFFSET UNITYSDK_OFFSET(0xCCC01B0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_CUSTOMDATAREF_OFFSET UNITYSDK_OFFSET(0xCCC0160)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_FORBIDSELECT_OFFSET UNITYSDK_OFFSET(0xCCC0180)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_GLOBALWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xCCC01D0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_ISSERVERTEAMABILITY_OFFSET UNITYSDK_OFFSET(0xCCC0190)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_MODIFIERCOUNT_OFFSET UNITYSDK_OFFSET(0xCCB8EA0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_NEEDDISPLAYMODIFIERCOUNT_OFFSET UNITYSDK_OFFSET(0xCCC01E0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_INITCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0xCCB6440)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCCB6240)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ISCONTAINBUFF_OFFSET UNITYSDK_OFFSET(0xCCB81D0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ISCONTAINMODIFIERBEHAVIOR_OFFSET UNITYSDK_OFFSET(0xCCBABF0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ISSNEAKING_OFFSET UNITYSDK_OFFSET(0xCCBF6B0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_MODIFYPROPERTY_OFFSET UNITYSDK_OFFSET(0xCCB7530)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ONBACKGROUND_OFFSET UNITYSDK_OFFSET(0xCCC00E0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ONFOREGROUND_OFFSET UNITYSDK_OFFSET(0xCCC0080)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ONMODIFIERINSTANCEDESTROY_OFFSET UNITYSDK_OFFSET(0xCCB9530)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_OVERRIDEONHITEFFECT_OFFSET UNITYSDK_OFFSET(0xCCBE940)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_POSTPROCESSAFTERMODIFIERADD_OFFSET UNITYSDK_OFFSET(0xCCBA950)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_POSTPROCESSAFTERMODIFIERREMOVE_OFFSET UNITYSDK_OFFSET(0xCCBFCC0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_PUSHNEWADVANCEPERFORMMODIFIERINFORECORD_OFFSET UNITYSDK_OFFSET(0xCCB7D70)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_REMOVEGLOBALWEAKNESSBYMODIFIER_OFFSET UNITYSDK_OFFSET(0xCCBD060)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_REMOVEONHITEFFECTOVERRIDE_OFFSET UNITYSDK_OFFSET(0xCCBEEE0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_REVERTALLADVANCEMODIFIER_OFFSET UNITYSDK_OFFSET(0xCCB8190)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SETFORBIDSELECT_OFFSET UNITYSDK_OFFSET(0xCCC0010)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SETSNEAKEXPOSED_OFFSET UNITYSDK_OFFSET(0xCCBF730)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_ABILITYCOMPONENTREF_OFFSET UNITYSDK_OFFSET(0xCCC0150)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_BUFFSYNCED_OFFSET UNITYSDK_OFFSET(0xCCC01C0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_CUSTOMDATAREF_OFFSET UNITYSDK_OFFSET(0xCCC0170)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_ISSERVERTEAMABILITY_OFFSET UNITYSDK_OFFSET(0xCCC01A0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_STACKPROPERTY_OFFSET UNITYSDK_OFFSET(0xCCBB540)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SYNCBUFFSFROMSERVER_OFFSET UNITYSDK_OFFSET(0xCCB5CC0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TICKTEMPTER_OFFSET UNITYSDK_OFFSET(0xCCB5F30)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xCCB5C50)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERBEFOREATTACK_OFFSET UNITYSDK_OFFSET(0xCCBB0D0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONAFTERBATTLE_OFFSET UNITYSDK_OFFSET(0xCCBB250)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONATTACK_OFFSET UNITYSDK_OFFSET(0xCCBB130)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONBEATTACK_OFFSET UNITYSDK_OFFSET(0xCCBB190)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONBEFOREBATTLE_OFFSET UNITYSDK_OFFSET(0xCCBAF80)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONOWNERBEKILLED_OFFSET UNITYSDK_OFFSET(0xCCBB1F0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONSKILLRESET_OFFSET UNITYSDK_OFFSET(0xCCBB2B0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRYADDALERTVALUEWHENADDMODIFIER_OFFSET UNITYSDK_OFFSET(0xCCBA390)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRYADDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xCCBA3E0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_UNSTACKPROPERTY_OFFSET UNITYSDK_OFFSET(0xCCBB650)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_USEABILITY_OFFSET UNITYSDK_OFFSET(0xCCB6EF0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__AFTERPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xCCB7930)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xCCC0230)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCCB5460)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__DOADDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xCCB9850)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__FINDAPPLIEDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xCCB8270)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__GETSTACKINGEFFECTOVERRIDE_OFFSET UNITYSDK_OFFSET(0xCCBEE80)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__HANDLEMODIFIERCONFLICTPOOL_OFFSET UNITYSDK_OFFSET(0xCCB8B60)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__HANDLEMODIFIERINSTANCESTACKING_OFFSET UNITYSDK_OFFSET(0xCCB84C0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__MODIFIERSEXECUTEEVENT_1_OFFSET UNITYSDK_OFFSET(0xCCB9390)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__MODIFIERSEXECUTEEVENT_OFFSET UNITYSDK_OFFSET(0xCCBAFE0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONADDNEWMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xCCB8F00)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0xCCBF920)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xCCBF780)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONAFTERBUFFFULLUPDATE_OFFSET UNITYSDK_OFFSET(0xCCBE8E0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONCHANGETOFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xCCBF9B0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONMPCHANGE_OFFSET UNITYSDK_OFFSET(0xCCBD290)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONNPCMONSTERCREATE_OFFSET UNITYSDK_OFFSET(0xCCBD1F0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONPLAYERTRANSFERTOFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xCCBF860)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONPLAYERTRANSFERTOREALAVATAR_OFFSET UNITYSDK_OFFSET(0xCCBF8C0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONSTAGEBYSTORY_OFFSET UNITYSDK_OFFSET(0xCCBD2F0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONSTAGE_OFFSET UNITYSDK_OFFSET(0xCCBD350)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONTEAMLEADERCHANGE_OFFSET UNITYSDK_OFFSET(0xCCBD470)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONUNSTAGE_OFFSET UNITYSDK_OFFSET(0xCCBD410)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__REFRESHMAXHP_OFFSET UNITYSDK_OFFSET(0xCCBD520)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SETUPJSONCONFIGABILITY_OFFSET UNITYSDK_OFFSET(0xCCB69D0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SYNCBUFFFROMSERVER_OFFSET UNITYSDK_OFFSET(0xCCBB7E0)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SYNCDYNAMICVALUEFROMBUFFINFO_OFFSET UNITYSDK_OFFSET(0xCCBDC20)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SYNCMODIFIERBYBUFFINFO_OFFSET UNITYSDK_OFFSET(0xCCBD890)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__TICKNEEDDISPLAYMODIFIER_OFFSET UNITYSDK_OFFSET(0xCCB6110)
#define RPG_GAMECORE_ADVENTUREABILITYCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xCCC0390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAbilityComponent_TypeDefinitionIndex = 53226;

	class AdventureAbilityComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::AdventureModifierInstance*>** StaticGet_s_SearchResultList()
		{
			return (::Il2CppArray<::RPG::GameCore::AdventureModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureAbilityComponent_TypeDefinitionIndex)->GetStaticField(0x64350);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__SyncedBuffId()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AdventureAbilityComponent_TypeDefinitionIndex)->GetStaticField(0x64358);
		}
		static ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>** StaticGet__DynamicFloatCache()
		{
			return (::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>**)Il2CppClass::FromTypeDefinitionIndex(AdventureAbilityComponent_TypeDefinitionIndex)->GetStaticField(0x64360);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_2E57B88467AF63C8_8*>** StaticGet__BuffLUT()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_2E57B88467AF63C8_8*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureAbilityComponent_TypeDefinitionIndex)->GetStaticField(0x64368);
		}
		static ::System::Single* StaticGet__TempterStopDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AdventureAbilityComponent_TypeDefinitionIndex)->GetStaticField(0x13A70);
		}
		::RPG::GameCore::CharacterVisibleComponent* _VisibleCmpt; // 0x18
		::System::Collections::Generic::List_1<::Struct_2_FEFADCB82FEB841E_5>* _AdvanceBuffPerformQueue; // 0x20
		::Class_2_F1C3EBA366E084A2* _FeatureFlagCmpt; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AdventureModifierInstance*>* _MazeBuffIdToModifier; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureModifierBehaviorFlag, ::System::Int32>* _AdventureModifierBehaviorFlagDict; // 0x38
		::RPG::GameCore::GameEntity* _TempteTarget; // 0x40
		::RPG::GameCore::AbilityComponent* _AbilityComponentRef_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>* _GlobalWeaknessList; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _AbilityToSkillMapping; // 0x58
		::RPG::GameCore::AdventureCharacterConfig* _CharacterConfig; // 0x60
		::Class_2_A0580152EB393340* _NavCmpt; // 0x68
		::System::Collections::Generic::List_1<::Struct_2_8CB9647E1F3FB914>* _OnHitEffectOverride; // 0x70
		::Class_3_47866C0C90C73674* _CustomDataRef_k__BackingField; // 0x78
		::System::Collections::Generic::List_1<::Struct_2_8CB9647E1F3FB914>* _OnHitEffectMultipleOverride; // 0x80
		::System::Collections::Generic::List_1<::RPG::GameCore::AdventureModifierInstance*>* _NeedDisplayModifier; // 0x88
		::RPG::GameCore::GameComponentBase* _ServerEntityInfoProvider; // 0x90
		::RPG::GameCore::NPCComponent* _NpcCmpt; // 0x98
		::Il2CppArray<::Class_1_83AB3963F9C15714*>* _AbilityProperties; // 0xA0
		::System::Boolean _BuffSynced_k__BackingField; // 0xA8
		::System::Boolean IsAttackingTriggerBattle; // 0xA9
		::System::Boolean _IsSneakExposed; // 0xAA
		::System::Boolean _IsServerTeamAbility_k__BackingField; // 0xAB
		::System::Int32 _SyncedBuffStamp; // 0xAC
		::System::Int32 _AdvanceBuffPerformQueueLength; // 0xB0
		::System::Int32 _SyncedBuffStampEntity; // 0xB4
		::System::UInt32 _ForbidSelectCount; // 0xB8
		::System::Int32 _HighestPriorityOnHitEffect; // 0xBC
		::System::Boolean TriggerBattleOnAttacked; // 0xC0
		::System::Boolean _IsInTempter; // 0xC1
		::System::Boolean _ForceUpdateBuffOnce; // 0xC2
		::System::Boolean _TempterMoving; // 0xC3

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

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void InitComponent(::RPG::GameCore::AdventureCharacterDataComponent* a1, ::RPG::GameCore::AbilityComponent* a2, ::Class_3_47866C0C90C73674* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterDataComponent*, ::RPG::GameCore::AbilityComponent*, ::Class_3_47866C0C90C73674*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_INITCOMPONENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitComponent_1(::Class_0_16E4307DCC419505_18* a1, ::RPG::GameCore::AbilityComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_18*, ::RPG::GameCore::AbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_INITCOMPONENT_1_OFFSET))(this, a1, a2);
		}

		::Class_2_6052D6419BE52328* UseAbility(::System::String* a1, ::Class_1_512CC108C22F737B* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3)
		{
			return ((::Class_2_6052D6419BE52328*(*)(::PVOID, ::System::String*, ::Class_1_512CC108C22F737B*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_USEABILITY_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::AdventureModifierInstance* GetModifierByIndex(::System::Int32 a1)
		{
			return ((::RPG::GameCore::AdventureModifierInstance*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETMODIFIERBYINDEX_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureModifierInstance* FindModifierInstance(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::AdventureModifierInstance*(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FINDMODIFIERINSTANCE_OFFSET))(this, a1, a2);
		}

		::System::Int32 FindModifierInstances(::System::String* a1, ::System::UInt32 a2, ::Il2CppArray<::RPG::GameCore::AdventureModifierInstance*>* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::AdventureModifierInstance*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_FINDMODIFIERINSTANCES_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint GetProperty(::RPG::GameCore::AdventureAbilityProperty a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETPROPERTY_OFFSET))(this, a1);
		}

		::System::Void DefineProperty(::RPG::GameCore::AdventureAbilityProperty a1, ::RPG::GameCore::PropertyStacking a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::RPG::GameCore::PropertyStacking, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DEFINEPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DefineProperty_1(::RPG::GameCore::AdventureAbilityProperty a1, ::RPG::GameCore::PropertyStacking a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::RPG::GameCore::PropertyStacking, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DEFINEPROPERTY_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DefineProperty_2(::RPG::GameCore::AdventureAbilityProperty a1, ::RPG::GameCore::PropertyStacking a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::RPG::GameCore::PropertyStacking, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_DEFINEPROPERTY_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ModifyProperty(::RPG::GameCore::AdventureAbilityProperty a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_MODIFYPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PushNewAdvancePerformModifierInfoRecord(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_PUSHNEWADVANCEPERFORMMODIFIERINFORECORD_OFFSET))(this, a1, a2);
		}

		::System::Boolean CompareFirstAdvancePerformBuffInfo(::Class_1_2E57B88467AF63C8_8* a1, ::System::Boolean a2, ::System::Boolean& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_2E57B88467AF63C8_8*, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_COMPAREFIRSTADVANCEPERFORMBUFFINFO_OFFSET))(this, a1, a2, a3);
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

		::System::Boolean IsContainBuff(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ISCONTAINBUFF_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureModifierInstance* _FindAppliedModifierInstance(::System::String* a1, ::RPG::GameCore::AdventureModifierConfig* a2, ::Class_2_6052D6419BE52328* a3)
		{
			return ((::RPG::GameCore::AdventureModifierInstance*(*)(::PVOID, ::System::String*, ::RPG::GameCore::AdventureModifierConfig*, ::Class_2_6052D6419BE52328*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__FINDAPPLIEDMODIFIERINSTANCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _HandleModifierInstanceStacking(::RPG::GameCore::AdventureModifierInstance* a1, ::RPG::GameCore::AdventureModifierInitParams* a2, ::RPG::GameCore::AdventureModifierConfig* a3, ::Class_2_6052D6419BE52328* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*, ::RPG::GameCore::AdventureModifierInitParams*, ::RPG::GameCore::AdventureModifierConfig*, ::Class_2_6052D6419BE52328*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__HANDLEMODIFIERINSTANCESTACKING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _HandleModifierConflictPool(::System::UInt32 a1, ::RPG::GameCore::AdventureModifierInstance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__HANDLEMODIFIERCONFLICTPOOL_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAddNewModifierInstance(::RPG::GameCore::AdventureModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONADDNEWMODIFIERINSTANCE_OFFSET))(this, a1);
		}

		::System::Void OnModifierInstanceDestroy(::RPG::GameCore::AdventureModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ONMODIFIERINSTANCEDESTROY_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureModifierInstance* _DoAddModifierInstance(::System::String* a1, ::RPG::GameCore::AdventureModifierConfig* a2, ::Class_2_6052D6419BE52328* a3, ::System::UInt32 a4, ::RPG::GameCore::AdventureModifierInitParams* a5, ::RPG::GameCore::GameEntity* a6)
		{
			return ((::RPG::GameCore::AdventureModifierInstance*(*)(::PVOID, ::System::String*, ::RPG::GameCore::AdventureModifierConfig*, ::Class_2_6052D6419BE52328*, ::System::UInt32, ::RPG::GameCore::AdventureModifierInitParams*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__DOADDMODIFIERINSTANCE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AdventureModifierInstance*>* GetNeedDisplayModifiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AdventureModifierInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETNEEDDISPLAYMODIFIERS_OFFSET))(this);
		}

		::System::Boolean CheckCanAddModifier(::RPG::GameCore::AdventureModifierConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_CHECKCANADDMODIFIER_OFFSET))(this, a1);
		}

		::System::Void TryAddAlertValueWhenAddModifier(::Class_2_6052D6419BE52328* a1, ::RPG::GameCore::AdventureModifierConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_6052D6419BE52328*, ::RPG::GameCore::AdventureModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRYADDALERTVALUEWHENADDMODIFIER_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryAddModifierInstance(::System::String* a1, ::RPG::GameCore::AdventureModifierConfig* a2, ::System::UInt32 a3, ::Class_2_6052D6419BE52328* a4, ::RPG::GameCore::AdventureModifierInitParams* a5, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a6, ::RPG::GameCore::GameEntity* a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::AdventureModifierConfig*, ::System::UInt32, ::Class_2_6052D6419BE52328*, ::RPG::GameCore::AdventureModifierInitParams*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRYADDMODIFIERINSTANCE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean IsContainModifierBehavior(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ISCONTAINMODIFIERBEHAVIOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetModifierCasterByBehaviorFlag(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETMODIFIERCASTERBYBEHAVIORFLAG_OFFSET))(this, a1);
		}

		::System::Void TriggerOnBeforeBattle(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONBEFOREBATTLE_OFFSET))(this, a1);
		}

		::System::Void TriggerBeforeAttack(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERBEFOREATTACK_OFFSET))(this, a1);
		}

		::System::Void TriggerOnAttack(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONATTACK_OFFSET))(this, a1);
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

		::System::Void TriggerOnSkillReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TRIGGERONSKILLRESET_OFFSET))(this);
		}

		::Class_2_6052D6419BE52328* AddAbility(::System::String* a1)
		{
			return ((::Class_2_6052D6419BE52328*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ADDABILITY_OFFSET))(this, a1);
		}

		::System::Int32 StackProperty(::RPG::GameCore::AdventureAbilityProperty a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_STACKPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnStackProperty(::RPG::GameCore::AdventureAbilityProperty a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_UNSTACKPROPERTY_OFFSET))(this, a1, a2);
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

		::System::Void EnterTempter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ENTERTEMPTER_OFFSET))(this, a1);
		}

		::System::Void ExitTempter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_EXITTEMPTER_OFFSET))(this);
		}

		::System::Void AddGlobalWeakness(::RPG::GameCore::AdventureModifierInstance* a1, ::RPG::GameCore::AttackDamageType a2, ::RPG::GameCore::MonsterRank a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*, ::RPG::GameCore::AttackDamageType, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ADDGLOBALWEAKNESS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveGlobalWeaknessByModifier(::RPG::GameCore::AdventureModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_REMOVEGLOBALWEAKNESSBYMODIFIER_OFFSET))(this, a1);
		}

		::System::Void _SetupJsonConfigAbility(::Class_0_16E4307DCC419505_18* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_18*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SETUPJSONCONFIGABILITY_OFFSET))(this, a1);
		}

		::System::Void _OnNpcMonsterCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONNPCMONSTERCREATE_OFFSET))(this, a1);
		}

		::System::Void _OnMPChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONMPCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnStageByStory(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONSTAGEBYSTORY_OFFSET))(this, a1);
		}

		::System::Void _OnStage(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONSTAGE_OFFSET))(this, a1);
		}

		::System::Void _OnUnstage(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONUNSTAGE_OFFSET))(this, a1);
		}

		::System::Void _OnTeamLeaderChange(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONTEAMLEADERCHANGE_OFFSET))(this, a1);
		}

		::System::Void _ModifiersExecuteEvent(::RPG::GameCore::AdventureModifierEvent a1, ::RPG::GameCore::GameEntity* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierEvent, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__MODIFIERSEXECUTEEVENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ModifiersExecuteEvent_1(::RPG::GameCore::AdventureModifierEvent a1, ::Class_1_5469D397DAE62876* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierEvent, ::Class_1_5469D397DAE62876*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__MODIFIERSEXECUTEEVENT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _AfterPropertyChanged(::RPG::GameCore::AdventureAbilityProperty a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__AFTERPROPERTYCHANGED_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _RefreshMaxHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__REFRESHMAXHP_OFFSET))(this);
		}

		::System::Void _SyncBuffFromServer(::Class_1_EE39BEBABF28049C* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EE39BEBABF28049C*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SYNCBUFFFROMSERVER_OFFSET))(this, a1, a2);
		}

		static ::System::Void _SyncModifierByBuffInfo(::RPG::GameCore::AdventureModifierInstance* a1, ::Class_1_2E57B88467AF63C8_8* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::AdventureModifierInstance*, ::Class_1_2E57B88467AF63C8_8*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SYNCMODIFIERBYBUFFINFO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _SyncDynamicValueFromBuffInfo(::System::Boolean a1, ::System::Boolean a2, ::Class_1_2E57B88467AF63C8_8* a3, ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* a4)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::Class_1_2E57B88467AF63C8_8*, ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__SYNCDYNAMICVALUEFROMBUFFINFO_OFFSET))(a1, a2, a3, a4);
		}

		::System::Int32 OverrideOnHitEffect(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3, ::RPG::MVector3 a4, ::RPG::GameCore::ModifierHitEffectStacking a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean, ::RPG::MVector3, ::RPG::GameCore::ModifierHitEffectStacking))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_OVERRIDEONHITEFFECT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void RemoveOnHitEffectOverride(::System::Int32 a1, ::RPG::GameCore::ModifierHitEffectStacking a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::ModifierHitEffectStacking))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_REMOVEONHITEFFECTOVERRIDE_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetOnHitEffectOverride(::System::String*& a1, ::System::Boolean& a2, ::RPG::MVector3& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::System::Boolean&, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETONHITEFFECTOVERRIDE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetOnHitEffectOverrides(::System::Collections::Generic::List_1<::System::String*>*& a1, ::System::Boolean& a2, ::RPG::MVector3& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Boolean&, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GETONHITEFFECTOVERRIDES_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::Struct_2_8CB9647E1F3FB914>* _GetStackingEffectOverride(::RPG::GameCore::ModifierHitEffectStacking a1)
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_8CB9647E1F3FB914>*(*)(::PVOID, ::RPG::GameCore::ModifierHitEffectStacking))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__GETSTACKINGEFFECTOVERRIDE_OFFSET))(this, a1);
		}

		::System::Void TickTempter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_TICKTEMPTER_OFFSET))(this);
		}

		::System::Void _TickNeedDisplayModifier()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__TICKNEEDDISPLAYMODIFIER_OFFSET))(this);
		}

		::System::Void EnterTempterFaceToTarget(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ENTERTEMPTERFACETOTARGET_OFFSET))(this, a1);
		}

		::System::Boolean IsSneaking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_ISSNEAKING_OFFSET))(this);
		}

		::System::Void SetSneakExposed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SETSNEAKEXPOSED_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerTransferToFakeAvatar(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONPLAYERTRANSFERTOFAKEAVATAR_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerTransferToRealAvatar(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONPLAYERTRANSFERTOREALAVATAR_OFFSET))(this, a1);
		}

		::System::Void _OnAfterBuffFullUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONAFTERBUFFFULLUPDATE_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONADVENTUREPHASEEND_OFFSET))(this, a1);
		}

		::System::Void _OnChangeToFakeAvatar(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT__ONCHANGETOFAKEAVATAR_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureModifierInstance* PostProcessAfterModifierAdd(::RPG::GameCore::AdventureModifierInstance* a1)
		{
			return ((::RPG::GameCore::AdventureModifierInstance*(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_POSTPROCESSAFTERMODIFIERADD_OFFSET))(this, a1);
		}

		::System::Void PostProcessAfterModifierRemove(::RPG::GameCore::AdventureModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_POSTPROCESSAFTERMODIFIERREMOVE_OFFSET))(this, a1);
		}

		::System::Void SetForbidSelect(::System::Boolean a1, ::RPG::GameCore::ForbidSelectReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::ForbidSelectReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SETFORBIDSELECT_OFFSET))(this, a1, a2);
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

		::System::Void set_AbilityComponentRef(::RPG::GameCore::AbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_ABILITYCOMPONENTREF_OFFSET))(this, a1);
		}

		::Class_3_47866C0C90C73674* get_CustomDataRef()
		{
			return ((::Class_3_47866C0C90C73674*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_CUSTOMDATAREF_OFFSET))(this);
		}

		::System::Void set_CustomDataRef(::Class_3_47866C0C90C73674* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_47866C0C90C73674*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_CUSTOMDATAREF_OFFSET))(this, a1);
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

		::System::Void set_IsServerTeamAbility(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_ISSERVERTEAMABILITY_OFFSET))(this, a1);
		}

		::System::Boolean get_BuffSynced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_BUFFSYNCED_OFFSET))(this);
		}

		::System::Void set_BuffSynced(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_SET_BUFFSYNCED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>* get_GlobalWeaknessList()
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_GLOBALWEAKNESSLIST_OFFSET))(this);
		}

		::System::Int32 get_NeedDisplayModifierCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT_GET_NEEDDISPLAYMODIFIERCOUNT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}
	};
}
