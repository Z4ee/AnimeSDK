#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2C2DA62D5BBB20B1_PreloadType.h"
#include "unitysdk/RPG/Client/BattleAssetPreload_AssetPreloadGroup.h"
#include "unitysdk/RPG/Client/PreloadItemFlag.h"
#include "unitysdk/RPG/Client/TargetTypeInferResult.h"
#include "unitysdk/RPG/GameCore/SkillResPreloadRule.h"
#include "unitysdk/Struct_2_1DF9223AD64279D4.h"

class Class_1_2C2DA62D5BBB20B1;
namespace RPG::GameCore { class CharacterCustomPreloadConfigBase; }
namespace RPG::GameCore { class CharacterPreloadConfigBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }

#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_BINDPARENT_OFFSET UNITYSDK_OFFSET(0xC800990)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_CHECKSTATECHANGEONSKILLFINISH_OFFSET UNITYSDK_OFFSET(0xC800580)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GETDEFAULTSKILLPRELOADTYPE_OFFSET UNITYSDK_OFFSET(0xC8019C0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GETSKILLCONFIG_OFFSET UNITYSDK_OFFSET(0xC8013F0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_ADVMODELITEMNAME_OFFSET UNITYSDK_OFFSET(0xC7FFF70)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_ADVMODELPATH_OFFSET UNITYSDK_OFFSET(0xC7FFF50)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_BATTLEINSLOTSKILLS_OFFSET UNITYSDK_OFFSET(0xC7FFF90)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_BATTLEMODELITEMNAME_OFFSET UNITYSDK_OFFSET(0xC7FFF60)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_BATTLEMODELPATH_OFFSET UNITYSDK_OFFSET(0xC7FFF40)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_CURRENTULTRPRELOADTYPE_OFFSET UNITYSDK_OFFSET(0xC802A20)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_DISABLEALLPRELOAD_OFFSET UNITYSDK_OFFSET(0xC803270)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_DISABLEULTRAPRELOAD_OFFSET UNITYSDK_OFFSET(0xC803550)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xC7FFF30)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_PARENTGROUP_OFFSET UNITYSDK_OFFSET(0xC7FFFA0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_PRELOADCONFIG_OFFSET UNITYSDK_OFFSET(0xC7FFFD0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_PRELOADITEMLINKLIST_OFFSET UNITYSDK_OFFSET(0xC7FFFC0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_SUBGROUPS_OFFSET UNITYSDK_OFFSET(0xC7FFFB0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_ULTRAPRELOADTYPE_OFFSET UNITYSDK_OFFSET(0xC7FFF80)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_INITBATTLENORMALSKILLPRELOADTYPE_OFFSET UNITYSDK_OFFSET(0xC7FE360)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_INITBATTLESKILLCONFIG_OFFSET UNITYSDK_OFFSET(0xC7FF470)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_MODIFYPRELOADTYPE_OFFSET UNITYSDK_OFFSET(0xC800860)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_ONAPPLYREALPRELOADTYPECHANGE_OFFSET UNITYSDK_OFFSET(0xC802FF0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_REFRESHBATTLEINSLOTSKILLS_OFFSET UNITYSDK_OFFSET(0xC7FDD90)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_RELEASEEFFECTINSTANCEOFTYPE_OFFSET UNITYSDK_OFFSET(0xC802390)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_RELEASEULTRAEFFECTINSTANCE_OFFSET UNITYSDK_OFFSET(0xC8024F0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_RESETNOTINSLOTBATTLENORMALSKILLPRELOADTYPE_OFFSET UNITYSDK_OFFSET(0xC8015D0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_SETACTIVESTATEINDEX_OFFSET UNITYSDK_OFFSET(0xC800680)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_SET_DISABLEALLPRELOAD_OFFSET UNITYSDK_OFFSET(0xC8032B0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_SET_DISABLEULTRAPRELOAD_OFFSET UNITYSDK_OFFSET(0xC803590)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_UNBINDPARENT_OFFSET UNITYSDK_OFFSET(0xC800250)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_UPDATEADVMODEL_OFFSET UNITYSDK_OFFSET(0xC801B50)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_UPDATEBATTLEMODEL_OFFSET UNITYSDK_OFFSET(0xC7FD180)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_UPDATEEFFECTOFTYPES_OFFSET UNITYSDK_OFFSET(0xC801E20)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_UPDATEULTRAEFFECTPRELOAD_OFFSET UNITYSDK_OFFSET(0xC8025B0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0xC803840)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__COMPUTEPRELOADITEMFLAG_OFFSET UNITYSDK_OFFSET(0xC802B10)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xC7FF050)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__GETDEFAULTADVMODELPATH_OFFSET UNITYSDK_OFFSET(0xC801DE0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__GETDEFAULTBATTLEMODELPATH_OFFSET UNITYSDK_OFFSET(0xC801DA0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__ISHITEFFECT_OFFSET UNITYSDK_OFFSET(0xC803180)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__ISIGNOREITEMNAME_OFFSET UNITYSDK_OFFSET(0xC802A30)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__ISVALIDINSSLOTSKILL_OFFSET UNITYSDK_OFFSET(0xC8014B0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__ONBINDPARENT_OFFSET UNITYSDK_OFFSET(0xC800CC0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__ONBINDSUB_OFFSET UNITYSDK_OFFSET(0xC801340)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC7FFFE0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__ONUNBINDPARENT_OFFSET UNITYSDK_OFFSET(0xC8010B0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__ONUNBINDSUB_OFFSET UNITYSDK_OFFSET(0xC8013A0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__PRECHECKHASITEM_OFFSET UNITYSDK_OFFSET(0xC802F50)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__PRELOADTIMELINE_OFFSET UNITYSDK_OFFSET(0xC7FE660)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__REGISTERALLPRELOADEFFECTS_OFFSET UNITYSDK_OFFSET(0xC7FCC90)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__REGISTERGROUPLINK_OFFSET UNITYSDK_OFFSET(0xC800D20)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__RELEASERESOURCEIMPL_OFFSET UNITYSDK_OFFSET(0xC7FD100)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__RELEASETIMELINE_OFFSET UNITYSDK_OFFSET(0xC8003C0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__SETULTRAPRELOADTYPE_OFFSET UNITYSDK_OFFSET(0xC802860)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__UNREGISTERGROUPLINK_OFFSET UNITYSDK_OFFSET(0xC801100)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload_CharacterPreloadGroupBase_TypeDefinitionIndex = 59649;

	class BattleAssetPreload_CharacterPreloadGroupBase : public ::RPG::Client::BattleAssetPreload_AssetPreloadGroup
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet__HitEffectCheckRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(BattleAssetPreload_CharacterPreloadGroupBase_TypeDefinitionIndex)->GetStaticField(0x5D530);
		}
		static ::System::Boolean* StaticGet__DisableAllPreload()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattleAssetPreload_CharacterPreloadGroupBase_TypeDefinitionIndex)->GetStaticField(0x140C0);
		}
		static ::System::Boolean* StaticGet__DisableUltraPreload()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattleAssetPreload_CharacterPreloadGroupBase_TypeDefinitionIndex)->GetStaticField(0x140C1);
		}
		::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase* _ParentGroup; // 0x68
		::System::Collections::Generic::List_1<::System::String*>* _TimelinePaths; // 0x70
		::RPG::GameCore::CharacterPreloadConfigBase* _PreloadConfig; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SkillConfig*>* _BattleSkillConfigDict; // 0x80
		::System::String* _BattleModelPath; // 0x88
		::System::Collections::Generic::List_1<::System::String*>* _BattleInSlotSkills; // 0x90
		::System::Collections::Generic::List_1<::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase*>* _SubGroups; // 0x98
		::System::Collections::Generic::List_1<::Struct_2_1DF9223AD64279D4>* _PreloadItemLinkList; // 0xA0
		::System::String* _AdvModelItemName; // 0xA8
		::System::String* _BattleModelItemName; // 0xB0
		::System::String* _UltraPreloadType; // 0xB8
		::System::String* _AdvModelPath; // 0xC0
		::System::Int32 _ActiveStateIndex; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_ISENABLE_OFFSET))(this);
		}

		::System::String* get_BattleModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_BATTLEMODELPATH_OFFSET))(this);
		}

		::System::String* get_AdvModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_ADVMODELPATH_OFFSET))(this);
		}

		::System::String* get_BattleModelItemName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_BATTLEMODELITEMNAME_OFFSET))(this);
		}

		::System::String* get_AdvModelItemName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_ADVMODELITEMNAME_OFFSET))(this);
		}

		::System::String* get_UltraPreloadType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_ULTRAPRELOADTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_BattleInSlotSkills()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_BATTLEINSLOTSKILLS_OFFSET))(this);
		}

		::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase* get_ParentGroup()
		{
			return ((::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_PARENTGROUP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase*>* get_SubGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_SUBGROUPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Struct_2_1DF9223AD64279D4>* get_PreloadItemLinkList()
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_1DF9223AD64279D4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_PRELOADITEMLINKLIST_OFFSET))(this);
		}

		::RPG::GameCore::CharacterPreloadConfigBase* get_PreloadConfig()
		{
			return ((::RPG::GameCore::CharacterPreloadConfigBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_PRELOADCONFIG_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__ONDISPOSE_OFFSET))(this);
		}

		::System::Void CheckStateChangeOnSkillFinish(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_CHECKSTATECHANGEONSKILLFINISH_OFFSET))(this, a1);
		}

		::System::Void SetActiveStateIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_SETACTIVESTATEINDEX_OFFSET))(this, a1);
		}

		::System::Void ModifyPreloadType(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1, ::Class_1_2C2DA62D5BBB20B1* a2, ::Class_1_2C2DA62D5BBB20B1_PreloadType& a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*, ::Class_1_2C2DA62D5BBB20B1*, ::Class_1_2C2DA62D5BBB20B1_PreloadType&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_MODIFYPRELOADTYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BindParent(::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_BINDPARENT_OFFSET))(this, a1);
		}

		::System::Void UnbindParent(::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_UNBINDPARENT_OFFSET))(this, a1);
		}

		::System::Void _OnBindParent(::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__ONBINDPARENT_OFFSET))(this, a1);
		}

		::System::Void _OnUnbindParent(::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__ONUNBINDPARENT_OFFSET))(this, a1);
		}

		::System::Void _OnBindSub(::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__ONBINDSUB_OFFSET))(this, a1);
		}

		::System::Void _OnUnbindSub(::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__ONUNBINDSUB_OFFSET))(this, a1);
		}

		::System::Void InitBattleSkillConfig(::Il2CppArray<::RPG::GameCore::SkillConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::SkillConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_INITBATTLESKILLCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::SkillConfig* GetSkillConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::SkillConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GETSKILLCONFIG_OFFSET))(this, a1);
		}

		::System::Void RefreshBattleInSlotSkills(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_REFRESHBATTLEINSLOTSKILLS_OFFSET))(this, a1);
		}

		::System::Boolean _IsValidInsSlotSkill(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__ISVALIDINSSLOTSKILL_OFFSET))(this, a1);
		}

		::System::Void ResetNotInSlotBattleNormalSkillPreloadType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_RESETNOTINSLOTBATTLENORMALSKILLPRELOADTYPE_OFFSET))(this);
		}

		::System::Void InitBattleNormalSkillPreloadType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_INITBATTLENORMALSKILLPRELOADTYPE_OFFSET))(this);
		}

		::Class_1_2C2DA62D5BBB20B1_PreloadType GetDefaultSkillPreloadType(::Class_1_2C2DA62D5BBB20B1* a1, ::RPG::GameCore::SkillResPreloadRule a2)
		{
			return ((::Class_1_2C2DA62D5BBB20B1_PreloadType(*)(::PVOID, ::Class_1_2C2DA62D5BBB20B1*, ::RPG::GameCore::SkillResPreloadRule))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GETDEFAULTSKILLPRELOADTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateBattleModel(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_UPDATEBATTLEMODEL_OFFSET))(this, a1);
		}

		::System::Void UpdateAdvModel(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_UPDATEADVMODEL_OFFSET))(this, a1);
		}

		::System::String* _GetDefaultBattleModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__GETDEFAULTBATTLEMODELPATH_OFFSET))(this);
		}

		::System::String* _GetDefaultAdvModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__GETDEFAULTADVMODELPATH_OFFSET))(this);
		}

		::System::Void UpdateEffectOfTypes(::System::Collections::Generic::IList_1<::System::String*>* a1, ::System::Collections::Generic::IList_1<::System::String*>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_UPDATEEFFECTOFTYPES_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReleaseEffectInstanceOfType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_RELEASEEFFECTINSTANCEOFTYPE_OFFSET))(this, a1);
		}

		::System::Void ReleaseUltraEffectInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_RELEASEULTRAEFFECTINSTANCE_OFFSET))(this);
		}

		::System::Void UpdateUltraEffectPreload(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_UPDATEULTRAEFFECTPRELOAD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SetUltraPreloadType(::System::String* a1, ::Class_1_2C2DA62D5BBB20B1_PreloadType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_2C2DA62D5BBB20B1_PreloadType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__SETULTRAPRELOADTYPE_OFFSET))(this, a1, a2);
		}

		::System::String* get_CurrentUltrPreloadType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_CURRENTULTRPRELOADTYPE_OFFSET))(this);
		}

		::System::Void _RegisterAllPreloadEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__REGISTERALLPRELOADEFFECTS_OFFSET))(this);
		}

		::System::Void _PreloadTimeLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__PRELOADTIMELINE_OFFSET))(this);
		}

		::System::Void _ReleaseTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__RELEASETIMELINE_OFFSET))(this);
		}

		::System::Void _RegisterGroupLink(::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase* a1, ::RPG::Client::TargetTypeInferResult a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase*, ::RPG::Client::TargetTypeInferResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__REGISTERGROUPLINK_OFFSET))(this, a1, a2);
		}

		::System::Void _UnregisterGroupLink(::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__UNREGISTERGROUPLINK_OFFSET))(this, a1);
		}

		::System::Boolean _PreCheckHasItem(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__PRECHECKHASITEM_OFFSET))(this, a1);
		}

		::System::Void OnApplyRealPreloadTypeChange(::Class_1_2C2DA62D5BBB20B1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2C2DA62D5BBB20B1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_ONAPPLYREALPRELOADTYPECHANGE_OFFSET))(this, a1);
		}

		::System::Void _ReleaseResourceImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__RELEASERESOURCEIMPL_OFFSET))(this);
		}

		::System::Boolean _IsHitEffect(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__ISHITEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean _IsIgnoreItemName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__ISIGNOREITEMNAME_OFFSET))(this, a1);
		}

		::RPG::Client::PreloadItemFlag _ComputePreloadItemFlag(::System::String* a1, ::System::String* a2)
		{
			return ((::RPG::Client::PreloadItemFlag(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE__COMPUTEPRELOADITEMFLAG_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean get_DisableAllPreload()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_DISABLEALLPRELOAD_OFFSET))();
		}

		static ::System::Void set_DisableAllPreload(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_SET_DISABLEALLPRELOAD_OFFSET))(a1);
		}

		static ::System::Boolean get_DisableUltraPreload()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_GET_DISABLEULTRAPRELOAD_OFFSET))();
		}

		static ::System::Void set_DisableUltraPreload(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHARACTERPRELOADGROUPBASE_SET_DISABLEULTRAPRELOAD_OFFSET))(a1);
		}
	};
}
