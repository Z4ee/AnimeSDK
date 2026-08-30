#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_3.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActionBarType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/CharacterCollisionType.h"
#include "unitysdk/RPG/GameCore/CharacterEnhancedStateType.h"
#include "unitysdk/RPG/GameCore/CharacterHUDType.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoWidthType.h"
#include "unitysdk/RPG/GameCore/CrosshairLayoutType.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/RPG/GameCore/EffectScaleAdaptType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/ResilienceEnum.h"
#include "unitysdk/RPG/GameCore/SpecialSkillButtonGroupType.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_E6EED6AD1AB6FE17.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_417;
class Class_1_B8FB38F0526A59B0;
namespace RPG::GameCore { class AttachPointEffectAdaptionConfig; }
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class CharacterUIConfig; }
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class EffectAdaptionConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ICharacterRowData; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class LocationConfig; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }

#define RPG_GAMECORE_CHARACTERDATACOMPONENT_DESTROYDUMMYENTITY_OFFSET UNITYSDK_OFFSET(0xE544DD0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE5453B0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETATTACHPOINTEFFECTADAPTIONCONFIG_1_OFFSET UNITYSDK_OFFSET(0xE5431C0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETATTACHPOINTEFFECTADAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xE542EF0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETCHARACTERHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xE5458C0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETCHARACTERNAMEID_OFFSET UNITYSDK_OFFSET(0xE5457F0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETCHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xE545700)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETCHARACTERUICUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0xE545E10)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETDUMMYENTITY_OFFSET UNITYSDK_OFFSET(0xE5448C0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETEFFECTADAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xE543230)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETEFFECTATTACHPOINTREDIRECT_OFFSET UNITYSDK_OFFSET(0xE543560)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETNATUREID_OFFSET UNITYSDK_OFFSET(0xE545A40)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GETSOMATOWIDTHTYPE_OFFSET UNITYSDK_OFFSET(0xE541A20)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ACTIONBARTYPE_OFFSET UNITYSDK_OFFSET(0xE544270)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0xE546060)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ANIMEVENTCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xE543CD0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ANIMEVENTPRELOADTAG_OFFSET UNITYSDK_OFFSET(0xE543D30)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_BUFFPANELOFFSET_OFFSET UNITYSDK_OFFSET(0xE543770)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CHARACTERHUDOFFSETBLENDTIME_OFFSET UNITYSDK_OFFSET(0xE544870)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CHARACTERHUDOFFSET_OFFSET UNITYSDK_OFFSET(0xE543EB0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xE545F00)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xE546790)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CROSSHAIRLAYOUT_OFFSET UNITYSDK_OFFSET(0xE544470)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CROSSHAIRTYPE_OFFSET UNITYSDK_OFFSET(0xE544300)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CUSTOMHUDATTACHPOINTNAME_OFFSET UNITYSDK_OFFSET(0xE544030)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xE545F20)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_DISABLEHEADLOOKATACTIONENTITY_OFFSET UNITYSDK_OFFSET(0xE5465E0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_DISABLEROOTYAWMAPPING_OFFSET UNITYSDK_OFFSET(0xE546630)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_EFFECTADAPTIONLIST_OFFSET UNITYSDK_OFFSET(0xE543DD0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_GRAPHEMOTIONASSET_OFFSET UNITYSDK_OFFSET(0xE543E40)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_GRIDFIGHTTAG_OFFSET UNITYSDK_OFFSET(0xE546770)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HASLIFE_OFFSET UNITYSDK_OFFSET(0xE546050)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xE545910)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xE543C60)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXHEIGHT_OFFSET UNITYSDK_OFFSET(0xE543B60)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXLENGTH_OFFSET UNITYSDK_OFFSET(0xE543AF0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXOFFSET_OFFSET UNITYSDK_OFFSET(0xE543BD0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXTYPE_OFFSET UNITYSDK_OFFSET(0xE543A20)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXWIDTH_OFFSET UNITYSDK_OFFSET(0xE543A80)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HUDTYPE_OFFSET UNITYSDK_OFFSET(0xE5440A0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ISHITBOXVALID_OFFSET UNITYSDK_OFFSET(0xE5439C0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ISPUPPETCHARACTER_OFFSET UNITYSDK_OFFSET(0xE5436B0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ISVISIBLEINVIEWMODE_OFFSET UNITYSDK_OFFSET(0xE546580)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_JSONCONFIG_OFFSET UNITYSDK_OFFSET(0xE5435C0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_LASTACTTURNCOUNT_OFFSET UNITYSDK_OFFSET(0xE5462C0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_LOCALOFFSETASMOVETARGET_OFFSET UNITYSDK_OFFSET(0xE546540)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0xE543900)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_MAINCROSSHAIRTYPE_OFFSET UNITYSDK_OFFSET(0xE544580)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xE5462E0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0xE545A90)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_OVERRIDEAIPATHS_OFFSET UNITYSDK_OFFSET(0xE546190)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_RESILIENCE_OFFSET UNITYSDK_OFFSET(0xE543710)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xE546410)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ROWDATA_OFFSET UNITYSDK_OFFSET(0xE546650)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SAVEMODELWHENDEAD_OFFSET UNITYSDK_OFFSET(0xE5435E0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SHOWSUMMONEDUI_OFFSET UNITYSDK_OFFSET(0xE5465C0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SHOWSUMMONERUI_OFFSET UNITYSDK_OFFSET(0xE5465A0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0xE546670)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SKILLTARGETAGENT_OFFSET UNITYSDK_OFFSET(0xE545340)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SOMATOTYPE_OFFSET UNITYSDK_OFFSET(0xE543D70)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SPECIALSKILLBUTTONGROUPTYPE_OFFSET UNITYSDK_OFFSET(0xE544690)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_TRIGGEREDFORMATIONASSETAUTOCENTERMASK_OFFSET UNITYSDK_OFFSET(0xE546900)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_VIEWMODEEXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0xE544800)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_VISUALRADIUS_OFFSET UNITYSDK_OFFSET(0xE543960)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_GET__UICONFIG_OFFSET UNITYSDK_OFFSET(0xE544210)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_INITBATTLECHARACTERDATA_OFFSET UNITYSDK_OFFSET(0xE545C10)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_INITCOMPONENTBYCHARACTERROWDATA_OFFSET UNITYSDK_OFFSET(0xE545490)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xE545400)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_ONABILITYCHARACTERINITIALIZED_OFFSET UNITYSDK_OFFSET(0xE545BC0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_ONBATTLEDATAVIEWDUMMYENTITY_OFFSET UNITYSDK_OFFSET(0xE5450A0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_ONCUSTOMDATAINITIALIZE_OFFSET UNITYSDK_OFFSET(0xE546920)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_OVERRIDECHARACTERCONFIG_OFFSET UNITYSDK_OFFSET(0xE542A00)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_RESETOVERRIDECHARACTERCONFIG_OFFSET UNITYSDK_OFFSET(0xE5429B0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_RESETOVERRIDECLIENTONLYCHARACTERCONFIG_OFFSET UNITYSDK_OFFSET(0xE541BA0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_RESETOVERRIDERESILIENCE_OFFSET UNITYSDK_OFFSET(0xE542E20)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SETCHARACTERUICUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0xE545C60)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SETDYNAMICATTACHPOINTEFFECTADAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xE542E80)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xE545F10)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_DISABLEROOTYAWMAPPING_OFFSET UNITYSDK_OFFSET(0xE546640)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_GRIDFIGHTTAG_OFFSET UNITYSDK_OFFSET(0xE546780)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_ISVISIBLEINVIEWMODE_OFFSET UNITYSDK_OFFSET(0xE546590)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_JSONCONFIG_OFFSET UNITYSDK_OFFSET(0xE5435D0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_LASTACTTURNCOUNT_OFFSET UNITYSDK_OFFSET(0xE5462D0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_LOCALOFFSETASMOVETARGET_OFFSET UNITYSDK_OFFSET(0xE546560)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_ROWDATA_OFFSET UNITYSDK_OFFSET(0xE546660)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_SAVEMODELWHENDEAD_OFFSET UNITYSDK_OFFSET(0xE543650)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_SHOWSUMMONEDUI_OFFSET UNITYSDK_OFFSET(0xE5465D0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_SHOWSUMMONERUI_OFFSET UNITYSDK_OFFSET(0xE5465B0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_TRIGGEREDFORMATIONASSETAUTOCENTERMASK_OFFSET UNITYSDK_OFFSET(0xE546910)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT__CREATEDUMMYENTITY_OFFSET UNITYSDK_OFFSET(0xE544AA0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xE546960)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT__DESTROYALLDUMMYENTITIES_OFFSET UNITYSDK_OFFSET(0xE545190)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT__ONANIMEVENTCONFIGLISTCHANGED_OFFSET UNITYSDK_OFFSET(0xE542330)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT__ONCHARACTERHUDTYPECHANGED_OFFSET UNITYSDK_OFFSET(0xE542960)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT__ONCROSSHAIRTYPECHANGED_OFFSET UNITYSDK_OFFSET(0xE5428C0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT__ONEFFECTADAPTIONLISTCHANGED_OFFSET UNITYSDK_OFFSET(0xE542460)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT__ONHITBOXCHANGED_OFFSET UNITYSDK_OFFSET(0xE5422C0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT__ONHUDOFFSETCHANGED_OFFSET UNITYSDK_OFFSET(0xE542860)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT__ONLOCATIONCONFIGCHANGED_OFFSET UNITYSDK_OFFSET(0xE5421C0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT__ONRESILIENCECHANGED_OFFSET UNITYSDK_OFFSET(0xE5420E0)
#define RPG_GAMECORE_CHARACTERDATACOMPONENT__ONSPECIALSKILLBUTTONGROUPTYPECHANGED_OFFSET UNITYSDK_OFFSET(0xE542910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterDataComponent_TypeDefinitionIndex = 57085;

	class CharacterDataComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		// static const ::System::String* DefaultDummyEntityName; // 0x0
		// static const ::System::String* SkillTargetAgentDummyName; // 0x0
		::Il2CppArray<::RPG::GameCore::EffectScaleAdaptType>* _DynamicScaleAdaptTypes; // 0x18
		::RPG::GameCore::CharacterConfig* _JsonConfig_k__BackingField; // 0x20
		::Struct_2_E6EED6AD1AB6FE17 _OverrideCharacterConfigParam; // 0x28
		::RPG::GameCore::GameEntity* Summoner; // 0xB0
		::System::String* OrbitAgentDummyName; // 0xB8
		::RPG::GameCore::DamageDisplayData* DefaultDamageDisplayData; // 0xC0
		::Class_0_16E4307DCC419505_417* SummonAbilityInst; // 0xC8
		::System::Collections::Generic::HashSet_1<::System::String*>* HideDisplayInfoSkillNames; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _CharacterUICustomValueDict; // 0xD8
		::System::Text::RegularExpressions::Regex* _DynamicScaleAdaptEffectPathRule; // 0xE0
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::RPG::GameCore::GameEntity*>>* _DummpyEntityList; // 0xE8
		::RPG::GameCore::GameEntity* Creator; // 0xF0
		::Il2CppArray<::RPG::GameCore::AttachPointEffectAdaptionConfig*>* _DynamicScaleAdaptConfigs; // 0xF8
		::RPG::GameCore::ICharacterRowData* _RowData; // 0x100
		::RPG::GameCore::CharacterEnhancedStateType EnhancedState; // 0x108
		::RPG::MVector3 _LocalOffsetAsMoveTarget_k__BackingField; // 0x10C
		::System::UInt32 _LastActTurnCount_k__BackingField; // 0x118
		::System::UInt32 SpawnTurnCount; // 0x11C
		::RPG::GameCore::TeamTypeMask _TriggeredFormationAssetAutoCenterMask_k__BackingField; // 0x120
		::System::Boolean _ShowSummonedUI_k__BackingField; // 0x122
		::System::Boolean _ShowSummonerUI_k__BackingField; // 0x123
		::System::Int32 _GridFightTag_k__BackingField; // 0x124
		::System::Int32 LineupIndex; // 0x128
		::System::UInt32 _CharacterID_k__BackingField; // 0x12C
		::Enum_3_ED790DAC948A65A9_3 CreateReason; // 0x130
		::System::Boolean IsBodyPart; // 0x134
		::System::Nullable_1<::System::Boolean> DisableHeadLookAtActionEntityOverride; // 0x135
		::System::Boolean _IsVisibleInViewMode_k__BackingField; // 0x137
		::System::Boolean TriggerLimbo; // 0x138
		::System::Nullable_1<::System::Boolean> _SaveModelWhenDeadOverride; // 0x139
		::System::Boolean _DisableRootYawMapping_k__BackingField; // 0x13B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::CharacterSomatoWidthType GetSomatoWidthType()
		{
			return ((::RPG::GameCore::CharacterSomatoWidthType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETSOMATOWIDTHTYPE_OFFSET))(this);
		}

		::System::Void ResetOverrideClientOnlyCharacterConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_RESETOVERRIDECLIENTONLYCHARACTERCONFIG_OFFSET))(this);
		}

		::System::Void ResetOverrideCharacterConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_RESETOVERRIDECHARACTERCONFIG_OFFSET))(this);
		}

		::System::Void OverrideCharacterConfig(::Struct_2_E6EED6AD1AB6FE17 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_E6EED6AD1AB6FE17))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_OVERRIDECHARACTERCONFIG_OFFSET))(this, a1);
		}

		::System::Void ResetOverrideResilience()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_RESETOVERRIDERESILIENCE_OFFSET))(this);
		}

		::System::Void SetDynamicAttachPointEffectAdaptionConfig(::Il2CppArray<::RPG::GameCore::AttachPointEffectAdaptionConfig*>* a1, ::Il2CppArray<::RPG::GameCore::EffectScaleAdaptType>* a2, ::System::Text::RegularExpressions::Regex* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AttachPointEffectAdaptionConfig*>*, ::Il2CppArray<::RPG::GameCore::EffectScaleAdaptType>*, ::System::Text::RegularExpressions::Regex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SETDYNAMICATTACHPOINTEFFECTADAPTIONCONFIG_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::AttachPointEffectAdaptionConfig* GetAttachPointEffectAdaptionConfig(::System::String* a1, ::System::String* a2, ::RPG::GameCore::EffectScaleAdaptType a3)
		{
			return ((::RPG::GameCore::AttachPointEffectAdaptionConfig*(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::GameCore::EffectScaleAdaptType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETATTACHPOINTEFFECTADAPTIONCONFIG_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::EffectAdaptionConfig* GetEffectAdaptionConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::EffectAdaptionConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETEFFECTADAPTIONCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::AttachPointEffectAdaptionConfig* GetAttachPointEffectAdaptionConfig_1(::System::String* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::AttachPointEffectAdaptionConfig*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETATTACHPOINTEFFECTADAPTIONCONFIG_1_OFFSET))(this, a1, a2);
		}

		::System::String* GetEffectAttachPointRedirect(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETEFFECTATTACHPOINTREDIRECT_OFFSET))(this, a1);
		}

		::System::Void _OnResilienceChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT__ONRESILIENCECHANGED_OFFSET))(this);
		}

		::System::Void _OnHudOffsetChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT__ONHUDOFFSETCHANGED_OFFSET))(this);
		}

		::System::Void _OnCrosshairTypeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT__ONCROSSHAIRTYPECHANGED_OFFSET))(this);
		}

		::System::Void _OnCharacterHUDTypeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT__ONCHARACTERHUDTYPECHANGED_OFFSET))(this);
		}

		::System::Void _OnSpecialSkillButtonGroupTypeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT__ONSPECIALSKILLBUTTONGROUPTYPECHANGED_OFFSET))(this);
		}

		::System::Void _OnLocationConfigChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT__ONLOCATIONCONFIGCHANGED_OFFSET))(this);
		}

		::System::Void _OnAnimEventConfigListChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT__ONANIMEVENTCONFIGLISTCHANGED_OFFSET))(this);
		}

		::System::Void _OnHitBoxChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT__ONHITBOXCHANGED_OFFSET))(this);
		}

		::System::Void _OnEffectAdaptionListChanged(::Il2CppArray<::RPG::GameCore::EffectAdaptionConfig*>* a1, ::Il2CppArray<::RPG::GameCore::EffectAdaptionConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::EffectAdaptionConfig*>*, ::Il2CppArray<::RPG::GameCore::EffectAdaptionConfig*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT__ONEFFECTADAPTIONLISTCHANGED_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::CharacterConfig* get_JsonConfig()
		{
			return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_JSONCONFIG_OFFSET))(this);
		}

		::System::Void set_JsonConfig(::RPG::GameCore::CharacterConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_JSONCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_SaveModelWhenDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SAVEMODELWHENDEAD_OFFSET))(this);
		}

		::System::Void set_SaveModelWhenDead(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_SAVEMODELWHENDEAD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPuppetCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ISPUPPETCHARACTER_OFFSET))(this);
		}

		::RPG::GameCore::ResilienceEnum get_Resilience()
		{
			return ((::RPG::GameCore::ResilienceEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_RESILIENCE_OFFSET))(this);
		}

		::RPG::MVector3 get_BuffPanelOffset()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_BUFFPANELOFFSET_OFFSET))(this);
		}

		::RPG::GameCore::LocationConfig* get_Location()
		{
			return ((::RPG::GameCore::LocationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_LOCATION_OFFSET))(this);
		}

		::System::Single get_VisualRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_VISUALRADIUS_OFFSET))(this);
		}

		::System::Boolean get_IsHitBoxValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ISHITBOXVALID_OFFSET))(this);
		}

		::RPG::GameCore::CharacterCollisionType get_HitBoxType()
		{
			return ((::RPG::GameCore::CharacterCollisionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXTYPE_OFFSET))(this);
		}

		::System::Single get_HitBoxWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXWIDTH_OFFSET))(this);
		}

		::System::Single get_HitBoxLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXLENGTH_OFFSET))(this);
		}

		::System::Single get_HitBoxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXHEIGHT_OFFSET))(this);
		}

		::RPG::MVector3 get_HitBoxOffset()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXOFFSET_OFFSET))(this);
		}

		::System::String* get_HitBoxAttachPoint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HITBOXATTACHPOINT_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_AnimEventConfigList()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ANIMEVENTCONFIGLIST_OFFSET))(this);
		}

		::System::String* get_AnimEventPreloadTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ANIMEVENTPRELOADTAG_OFFSET))(this);
		}

		::RPG::GameCore::CharacterSomatoType get_SomatoType()
		{
			return ((::RPG::GameCore::CharacterSomatoType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SOMATOTYPE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::EffectAdaptionConfig*>* get_EffectAdaptionList()
		{
			return ((::Il2CppArray<::RPG::GameCore::EffectAdaptionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_EFFECTADAPTIONLIST_OFFSET))(this);
		}

		::System::String* get_GraphEmotionAsset()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_GRAPHEMOTIONASSET_OFFSET))(this);
		}

		::RPG::MVector3 get_CharacterHUDOffset()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CHARACTERHUDOFFSET_OFFSET))(this);
		}

		::System::String* get_CustomHUDAttachPointName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CUSTOMHUDATTACHPOINTNAME_OFFSET))(this);
		}

		::RPG::GameCore::CharacterHUDType get_HUDType()
		{
			return ((::RPG::GameCore::CharacterHUDType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HUDTYPE_OFFSET))(this);
		}

		::RPG::GameCore::ActionBarType get_ActionBarType()
		{
			return ((::RPG::GameCore::ActionBarType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ACTIONBARTYPE_OFFSET))(this);
		}

		::RPG::GameCore::CrosshairType get_CrosshairType()
		{
			return ((::RPG::GameCore::CrosshairType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CROSSHAIRTYPE_OFFSET))(this);
		}

		::RPG::GameCore::CrosshairLayoutType get_CrosshairLayout()
		{
			return ((::RPG::GameCore::CrosshairLayoutType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CROSSHAIRLAYOUT_OFFSET))(this);
		}

		::RPG::GameCore::CrosshairType get_MainCrosshairType()
		{
			return ((::RPG::GameCore::CrosshairType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_MAINCROSSHAIRTYPE_OFFSET))(this);
		}

		::RPG::GameCore::SpecialSkillButtonGroupType get_SpecialSkillButtonGroupType()
		{
			return ((::RPG::GameCore::SpecialSkillButtonGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SPECIALSKILLBUTTONGROUPTYPE_OFFSET))(this);
		}

		::RPG::GameCore::CharacterUIConfig* get__UIConfig()
		{
			return ((::RPG::GameCore::CharacterUIConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET__UICONFIG_OFFSET))(this);
		}

		::System::UInt32 get_ViewModeExtraEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_VIEWMODEEXTRAEFFECTID_OFFSET))(this);
		}

		::System::Single get_CharacterHUDOffsetBlendTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CHARACTERHUDOFFSETBLENDTIME_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetDummyEntity(::System::String* a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETDUMMYENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void DestroyDummyEntity(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_DESTROYDUMMYENTITY_OFFSET))(this, a1);
		}

		::System::Void OnBattleDataViewDummyEntity(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_ONBATTLEDATAVIEWDUMMYENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* _CreateDummyEntity(::System::String* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT__CREATEDUMMYENTITY_OFFSET))(this, a1);
		}

		::System::Void _DestroyAllDummyEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT__DESTROYALLDUMMYENTITIES_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_SkillTargetAgent()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SKILLTARGETAGENT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void InitComponent(::System::UInt32 a1, ::RPG::GameCore::CharacterConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::CharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_INITCOMPONENT_OFFSET))(this, a1, a2);
		}

		::System::Void InitComponentByCharacterRowData(::RPG::GameCore::ICharacterRowData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_INITCOMPONENTBYCHARACTERROWDATA_OFFSET))(this, a1);
		}

		::System::String* GetCharacterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETCHARACTERNAME_OFFSET))(this);
		}

		::RPG::Client::TextID GetCharacterNameID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETCHARACTERNAMEID_OFFSET))(this);
		}

		::System::String* GetCharacterHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETCHARACTERHEADICONPATH_OFFSET))(this);
		}

		::System::UInt32 GetNatureID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETNATUREID_OFFSET))(this);
		}

		::System::Void OnAbilityCharacterInitialized(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_ONABILITYCHARACTERINITIALIZED_OFFSET))(this, a1);
		}

		::System::Void InitBattleCharacterData(::Class_1_B8FB38F0526A59B0* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8FB38F0526A59B0*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_INITBATTLECHARACTERDATA_OFFSET))(this, a1);
		}

		::System::Void SetCharacterUICustomValue(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SETCHARACTERUICUSTOMVALUE_OFFSET))(this, a1, a2);
		}

		::System::String* GetCharacterUICustomValue(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GETCHARACTERUICUSTOMVALUE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_CharacterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CHARACTERID_OFFSET))(this);
		}

		::System::Void set_CharacterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_CHARACTERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_NatureID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_NATUREID_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_DAMAGETYPE_OFFSET))(this);
		}

		::System::Boolean get_HasLife()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HASLIFE_OFFSET))(this);
		}

		::System::String* get_AIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_AIPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_OverrideAIPaths()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_OVERRIDEAIPATHS_OFFSET))(this);
		}

		::System::UInt32 get_LastActTurnCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_LASTACTTURNCOUNT_OFFSET))(this);
		}

		::System::Void set_LastActTurnCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_LASTACTTURNCOUNT_OFFSET))(this, a1);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_MODELPATH_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::RPG::MVector3 get_LocalOffsetAsMoveTarget()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_LOCALOFFSETASMOVETARGET_OFFSET))(this);
		}

		::System::Void set_LocalOffsetAsMoveTarget(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_LOCALOFFSETASMOVETARGET_OFFSET))(this, a1);
		}

		::System::Boolean get_IsVisibleInViewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ISVISIBLEINVIEWMODE_OFFSET))(this);
		}

		::System::Void set_IsVisibleInViewMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_ISVISIBLEINVIEWMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowSummonerUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SHOWSUMMONERUI_OFFSET))(this);
		}

		::System::Void set_ShowSummonerUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_SHOWSUMMONERUI_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowSummonedUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SHOWSUMMONEDUI_OFFSET))(this);
		}

		::System::Void set_ShowSummonedUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_SHOWSUMMONEDUI_OFFSET))(this, a1);
		}

		::System::Boolean get_DisableHeadLookAtActionEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_DISABLEHEADLOOKATACTIONENTITY_OFFSET))(this);
		}

		::System::Boolean get_DisableRootYawMapping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_DISABLEROOTYAWMAPPING_OFFSET))(this);
		}

		::System::Void set_DisableRootYawMapping(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_DISABLEROOTYAWMAPPING_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterRowData* get_RowData()
		{
			return ((::RPG::GameCore::ICharacterRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_ROWDATA_OFFSET))(this);
		}

		::System::Void set_RowData(::RPG::GameCore::ICharacterRowData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_ROWDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_SKILLROWDATAS_OFFSET))(this);
		}

		::System::Int32 get_GridFightTag()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_GRIDFIGHTTAG_OFFSET))(this);
		}

		::System::Void set_GridFightTag(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_GRIDFIGHTTAG_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_CHARACTERNAME_OFFSET))(this);
		}

		::RPG::GameCore::TeamTypeMask get_TriggeredFormationAssetAutoCenterMask()
		{
			return ((::RPG::GameCore::TeamTypeMask(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_GET_TRIGGEREDFORMATIONASSETAUTOCENTERMASK_OFFSET))(this);
		}

		::System::Void set_TriggeredFormationAssetAutoCenterMask(::RPG::GameCore::TeamTypeMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamTypeMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_SET_TRIGGEREDFORMATIONASSETAUTOCENTERMASK_OFFSET))(this, a1);
		}

		::System::Void OnCustomDataInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERDATACOMPONENT_ONCUSTOMDATAINITIALIZE_OFFSET))(this);
		}
	};
}
