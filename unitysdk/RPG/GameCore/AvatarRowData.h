#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeMask.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/AvatarRowWrapperDeriveType.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointTriggerKey.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialUltraType.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/CombatPowerAvatarRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_745D1E9BCE174BE1.h"
#include "unitysdk/Struct_2_88A74A9E9AE5BA51.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
class Class_1_4AAB34DEAFC894B3;
class Class_1_7AB88D713F5121B3_49;
class Class_1_EA6B9573C4BF1DD5;
class Class_1_F4B1B74A0320FC41;
class Class_2_9D2DEA765AF5C2B0;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class AvatarBaseTypeCollection; }
namespace RPG::GameCore { class AvatarRankConfigRow; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace RPG::GameCore { class AvatarUltraSkillConfigRow; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace RPG::GameCore { class IAvatarPromotionCommonRowWrap; }
namespace RPG::GameCore { class IAvatarSkillCommonRowWrap; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class ServantRowData; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_AVATARROWDATA_GETAVATARBASETYPEMASK_OFFSET UNITYSDK_OFFSET(0xE5B0140)
#define RPG_GAMECORE_AVATARROWDATA_GETRANKCONFIGROWBYTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0xE5A9630)
#define RPG_GAMECORE_AVATARROWDATA_GETRANKROWMAP_OFFSET UNITYSDK_OFFSET(0xE5A9130)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0xE5B0490)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0xE5B0440)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0xE5B03F0)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLTREELEVELMAP_OFFSET UNITYSDK_OFFSET(0xE5B04E0)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEPOINTLEVEL_OFFSET UNITYSDK_OFFSET(0xE5AE9E0)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEPROPERTYMAP_OFFSET UNITYSDK_OFFSET(0xE5A9A30)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEROWBYTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0xE5A94E0)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEROWMAP_OFFSET UNITYSDK_OFFSET(0xE5A90F0)
#define RPG_GAMECORE_AVATARROWDATA_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0xE5AF790)
#define RPG_GAMECORE_AVATARROWDATA_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0xE5AEDF0)
#define RPG_GAMECORE_AVATARROWDATA_GET_ATTACK_OFFSET UNITYSDK_OFFSET(0xE5A5F30)
#define RPG_GAMECORE_AVATARROWDATA_GET_AVATARMINIICONPATH_OFFSET UNITYSDK_OFFSET(0xE5AF970)
#define RPG_GAMECORE_AVATARROWDATA_GET_AVATARROW_OFFSET UNITYSDK_OFFSET(0xE5AEB00)
#define RPG_GAMECORE_AVATARROWDATA_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0xE5AF8B0)
#define RPG_GAMECORE_AVATARROWDATA_GET_AVATARVOTAG_OFFSET UNITYSDK_OFFSET(0xE5AFFE0)
#define RPG_GAMECORE_AVATARROWDATA_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0xE5A7AF0)
#define RPG_GAMECORE_AVATARROWDATA_GET_BASEAGGRO_OFFSET UNITYSDK_OFFSET(0xE5AF1E0)
#define RPG_GAMECORE_AVATARROWDATA_GET_BASETYPECOLLECTION_OFFSET UNITYSDK_OFFSET(0xE5B0120)
#define RPG_GAMECORE_AVATARROWDATA_GET_BATTLEEQUIPMENTLIST_OFFSET UNITYSDK_OFFSET(0xE5AF080)
#define RPG_GAMECORE_AVATARROWDATA_GET_BATTLERELICITEMMODULE_OFFSET UNITYSDK_OFFSET(0xE5AF090)
#define RPG_GAMECORE_AVATARROWDATA_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xE5AF470)
#define RPG_GAMECORE_AVATARROWDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xE5AEB80)
#define RPG_GAMECORE_AVATARROWDATA_GET_CRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0xE5A6DD0)
#define RPG_GAMECORE_AVATARROWDATA_GET_CRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0xE5A7040)
#define RPG_GAMECORE_AVATARROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0xE5AFD10)
#define RPG_GAMECORE_AVATARROWDATA_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xE5AFBD0)
#define RPG_GAMECORE_AVATARROWDATA_GET_DEFENCE_OFFSET UNITYSDK_OFFSET(0xE5A6410)
#define RPG_GAMECORE_AVATARROWDATA_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0xE5AEB40)
#define RPG_GAMECORE_AVATARROWDATA_GET_EQUIPEXTRARANK_OFFSET UNITYSDK_OFFSET(0xE5AEB70)
#define RPG_GAMECORE_AVATARROWDATA_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0xE5AFF80)
#define RPG_GAMECORE_AVATARROWDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xE5AF6D0)
#define RPG_GAMECORE_AVATARROWDATA_GET_INITACTIONDELAYRATIO_OFFSET UNITYSDK_OFFSET(0xE5AF3D0)
#define RPG_GAMECORE_AVATARROWDATA_GET_INITHP_OFFSET UNITYSDK_OFFSET(0xE5AF0A0)
#define RPG_GAMECORE_AVATARROWDATA_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0xE5AF610)
#define RPG_GAMECORE_AVATARROWDATA_GET_ISASSISTANTAVATAR_OFFSET UNITYSDK_OFFSET(0xE5B0110)
#define RPG_GAMECORE_AVATARROWDATA_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0xE5AECB0)
#define RPG_GAMECORE_AVATARROWDATA_GET_JSON_OFFSET UNITYSDK_OFFSET(0xE5AEB10)
#define RPG_GAMECORE_AVATARROWDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE5AEF30)
#define RPG_GAMECORE_AVATARROWDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xE5A5A50)
#define RPG_GAMECORE_AVATARROWDATA_GET_MAXSTANCE_OFFSET UNITYSDK_OFFSET(0xE5AF310)
#define RPG_GAMECORE_AVATARROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET UNITYSDK_OFFSET(0xE5AF0B0)
#define RPG_GAMECORE_AVATARROWDATA_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xE5AF420)
#define RPG_GAMECORE_AVATARROWDATA_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0xE5AFAA0)
#define RPG_GAMECORE_AVATARROWDATA_GET_OVERRIDEAIPATHS_OFFSET UNITYSDK_OFFSET(0xE5AEF20)
#define RPG_GAMECORE_AVATARROWDATA_GET_PREVIEWSERVANTROWDATA_OFFSET UNITYSDK_OFFSET(0xE5B01A0)
#define RPG_GAMECORE_AVATARROWDATA_GET_PROMOTIONROW_OFFSET UNITYSDK_OFFSET(0xE5AEB30)
#define RPG_GAMECORE_AVATARROWDATA_GET_PROMOTION_OFFSET UNITYSDK_OFFSET(0xE5AEB60)
#define RPG_GAMECORE_AVATARROWDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0xE5AEB50)
#define RPG_GAMECORE_AVATARROWDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xE5AEF40)
#define RPG_GAMECORE_AVATARROWDATA_GET_RESISTANCE_OFFSET UNITYSDK_OFFSET(0xE5AF350)
#define RPG_GAMECORE_AVATARROWDATA_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xE5AF730)
#define RPG_GAMECORE_AVATARROWDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xE5AEAB0)
#define RPG_GAMECORE_AVATARROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xE5AF7F0)
#define RPG_GAMECORE_AVATARROWDATA_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0xE5AF060)
#define RPG_GAMECORE_AVATARROWDATA_GET_SPECIALROW_OFFSET UNITYSDK_OFFSET(0xE5AEB20)
#define RPG_GAMECORE_AVATARROWDATA_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xE5A68F0)
#define RPG_GAMECORE_AVATARROWDATA_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0xE5AFE40)
#define RPG_GAMECORE_AVATARROWDATA_GET_STATUSPROBABILITY_OFFSET UNITYSDK_OFFSET(0xE5AF390)
#define RPG_GAMECORE_AVATARROWDATA_GET_ULTRASKILLCONFIG_OFFSET UNITYSDK_OFFSET(0xE5AF070)
#define RPG_GAMECORE_AVATARROWDATA_GET_ULTRASKILLCUTINPREFABPATH_OFFSET UNITYSDK_OFFSET(0xE5AF910)
#define RPG_GAMECORE_AVATARROWDATA_GET_ULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0xE5A39F0)
#define RPG_GAMECORE_AVATARROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xE5AF850)
#define RPG_GAMECORE_AVATARROWDATA_HASAVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0xE5A9170)
#define RPG_GAMECORE_AVATARROWDATA_INITFROMAVATARDATA_OFFSET UNITYSDK_OFFSET(0xE5ABD60)
#define RPG_GAMECORE_AVATARROWDATA_INITFROMCREATEPARAMS_OFFSET UNITYSDK_OFFSET(0xE5A3340)
#define RPG_GAMECORE_AVATARROWDATA_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0xE5AD740)
#define RPG_GAMECORE_AVATARROWDATA_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0xE5AF9C0)
#define RPG_GAMECORE_AVATARROWDATA_SET_BASETYPECOLLECTION_OFFSET UNITYSDK_OFFSET(0xE5B0130)
#define RPG_GAMECORE_AVATARROWDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xE5AEAC0)
#define RPG_GAMECORE_AVATARROWDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xE5B12B0)
#define RPG_GAMECORE_AVATARROWDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xE5ABD50)
#define RPG_GAMECORE_AVATARROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE5A3330)
#define RPG_GAMECORE_AVATARROWDATA__INITDATA_OFFSET UNITYSDK_OFFSET(0xE5AC770)
#define RPG_GAMECORE_AVATARROWDATA__INITOVERRIDEAIPATHS_OFFSET UNITYSDK_OFFSET(0xE5AE2A0)
#define RPG_GAMECORE_AVATARROWDATA__OVERRIDESKILLHIDEINUI_OFFSET UNITYSDK_OFFSET(0xE5B0960)
#define RPG_GAMECORE_AVATARROWDATA__SETUPSKILLLIST_OFFSET UNITYSDK_OFFSET(0xE5AD850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarRowData_TypeDefinitionIndex = 56930;

	class AvatarRowData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::GameCore::IAvatarSkillCommonRowWrap*>** StaticGet__TmpSkillRowList()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::IAvatarSkillCommonRowWrap*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarRowData_TypeDefinitionIndex)->GetStaticField(0x5BFC0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::IAvatarSkillCommonRowWrap*>** StaticGet__TmpSkillRowMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::IAvatarSkillCommonRowWrap*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarRowData_TypeDefinitionIndex)->GetStaticField(0x5BFC8);
		}
		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* _SkillRowDatas; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _SkillTreeSkillLevelMap; // 0x18
		::Il2CppArray<::Class_1_4AAB34DEAFC894B3*>* _BattleEquipmentList; // 0x20
		::RPG::GameCore::IAvatarCommonRowWrap* _Row; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::AvatarRankConfigRow*>* _RankConfigTriggerKeMap; // 0x30
		::RPG::GameCore::AvatarUltraSkillConfigRow* _UltraSkillConfig; // 0x38
		::RPG::AvatarSystem::IAvatar* _Avatar; // 0x40
		::RPG::GameCore::CharacterConfig* _Json; // 0x48
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* _SkillTreePropertyMap; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::AvatarSkillTreeRow*>* _SkillTreeTriggerKeyMap; // 0x58
		::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_49*>* _SkillTreeDataList; // 0x60
		::Class_1_F4B1B74A0320FC41* _plugin; // 0x68
		::RPG::GameCore::AvatarBaseTypeCollection* _BaseTypeCollection_k__BackingField; // 0x70
		::RPG::GameCore::SpecialAvatarRow* _SpecialRow; // 0x78
		::RPG::GameCore::ServantRowData* _PreviewServantRowData; // 0x80
		::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_49*>* _ChangedSkillTreeDataList; // 0x88
		::RPG::GameCore::IAvatarPromotionCommonRowWrap* _PromotionRow; // 0x90
		::Class_1_EA6B9573C4BF1DD5* _BattleRelicItemModule; // 0x98
		::Il2CppArray<::System::String*>* _OverrideAIPaths; // 0xA0
		::Struct_2_88A74A9E9AE5BA51 _OverrideDisplay; // 0xA8
		::System::Boolean _IsAssistantAvatar; // 0x108
		::System::UInt32 _EnhancedID; // 0x10C
		::RPG::GameCore::AvatarBaseType _ExtraAvatarBaseType; // 0x110
		::System::UInt32 _Promotion; // 0x114
		::System::UInt32 _EquipExtraRank; // 0x118
		::System::UInt32 _Rank; // 0x11C
		::System::UInt32 _Level; // 0x120
		::Struct_2_745D1E9BCE174BE1 _OverrideData; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA__CCTOR_OFFSET))();
		}

		::System::Void InitFromAvatarData(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_INITFROMAVATARDATA_OFFSET))(this, a1);
		}

		::System::Void InitFromCreateParams(::Class_2_9D2DEA765AF5C2B0* a1, ::Class_1_F4B1B74A0320FC41* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9D2DEA765AF5C2B0*, ::Class_1_F4B1B74A0320FC41*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_INITFROMCREATEPARAMS_OFFSET))(this, a1, a2);
		}

		::System::Void _InitData(::System::UInt32 a1, ::RPG::GameCore::CharacterConfig* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7, ::System::UInt32 a8, ::System::Boolean a9, ::RPG::GameCore::AvatarRowWrapperDeriveType a10, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_49*>* a11, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_49*>* a12, ::Il2CppArray<::Class_1_4AAB34DEAFC894B3*>* a13, ::Class_1_EA6B9573C4BF1DD5* a14, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>* a15, ::RPG::GameCore::BattleGridFightAvatarData* a16)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::CharacterConfig*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::AvatarRowWrapperDeriveType, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_49*>*, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_49*>*, ::Il2CppArray<::Class_1_4AAB34DEAFC894B3*>*, ::Class_1_EA6B9573C4BF1DD5*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>*, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA__INITDATA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
		}

		::System::Void _InitOverrideAIPaths()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA__INITOVERRIDEAIPATHS_OFFSET))(this);
		}

		::System::UInt32 GetSkillTreePointLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEPOINTLEVEL_OFFSET))(this, a1);
		}

		::System::Object* get_Row()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_SET_ROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::IAvatarCommonRowWrap* get_AvatarRow()
		{
			return ((::RPG::GameCore::IAvatarCommonRowWrap*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_AVATARROW_OFFSET))(this);
		}

		::RPG::GameCore::CharacterConfig* get_Json()
		{
			return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_JSON_OFFSET))(this);
		}

		::RPG::GameCore::SpecialAvatarRow* get_SpecialRow()
		{
			return ((::RPG::GameCore::SpecialAvatarRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_SPECIALROW_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_13* get_PromotionRow()
		{
			return ((::Class_0_16E4307DCC419505_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_PROMOTIONROW_OFFSET))(this);
		}

		::System::UInt32 get_EnhancedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ENHANCEDID_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_RANK_OFFSET))(this);
		}

		::System::UInt32 get_Promotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_PROMOTION_OFFSET))(this);
		}

		::System::UInt32 get_EquipExtraRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_EQUIPEXTRARANK_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::String* get_JsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_JSONPATH_OFFSET))(this);
		}

		::System::String* get_AIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_AIPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_OverrideAIPaths()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_OVERRIDEAIPATHS_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_LEVEL_OFFSET))(this);
		}

		::RPG::GameCore::CombatPowerAvatarRarityType get_Rarity()
		{
			return ((::RPG::GameCore::CombatPowerAvatarRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_RARITY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_SKILLROWDATAS_OFFSET))(this);
		}

		::RPG::GameCore::AvatarUltraSkillConfigRow* get_UltraSkillConfig()
		{
			return ((::RPG::GameCore::AvatarUltraSkillConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ULTRASKILLCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::AvatarSpecialUltraType get_UltraSkillType()
		{
			return ((::RPG::GameCore::AvatarSpecialUltraType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ULTRASKILLTYPE_OFFSET))(this);
		}

		::Il2CppArray<::Class_1_4AAB34DEAFC894B3*>* get_BattleEquipmentList()
		{
			return ((::Il2CppArray<::Class_1_4AAB34DEAFC894B3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_BATTLEEQUIPMENTLIST_OFFSET))(this);
		}

		::Class_1_EA6B9573C4BF1DD5* get_BattleRelicItemModule()
		{
			return ((::Class_1_EA6B9573C4BF1DD5*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_BATTLERELICITEMMODULE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_MAXHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_INITHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Attack()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ATTACK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Defence()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_DEFENCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Speed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_SPEED_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CriticalChance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_CRITICALCHANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CriticalDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_CRITICALDAMAGE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MinimumFatigueRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BaseAggro()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_BASEAGGRO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxStance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_MAXSTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Resistance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_RESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_StatusProbability()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_STATUSPROBABILITY_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitActionDelayRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_INITACTIONDELAYRATIO_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_MODELPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_CHARACTERNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Introduction()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_INTRODUCTION_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_ActionIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ACTIONICONPATH_OFFSET))(this);
		}

		::System::String* get_SideAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_WaitingAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_AvatarSideIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_AVATARSIDEICONPATH_OFFSET))(this);
		}

		::System::String* get_UltraSkillCutInPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ULTRASKILLCUTINPREFABPATH_OFFSET))(this);
		}

		::System::String* get_AvatarMiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_AVATARMINIICONPATH_OFFSET))(this);
		}

		::System::Void OverrideDisplay(::Struct_2_88A74A9E9AE5BA51 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_88A74A9E9AE5BA51))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_OVERRIDEDISPLAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_NatureID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_NATUREID_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_DAMAGETYPE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* get_DamageTypeResistance()
		{
			return ((::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_SPNEED_OFFSET))(this);
		}

		::System::Boolean get_HaveActionDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_HAVEACTIONDELAY_OFFSET))(this);
		}

		::System::String* get_AvatarVOTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_AVATARVOTAG_OFFSET))(this);
		}

		::System::Boolean get_IsAssistantAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ISASSISTANTAVATAR_OFFSET))(this);
		}

		::System::Void OverrideData(::Struct_2_745D1E9BCE174BE1 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_745D1E9BCE174BE1))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_OVERRIDEDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarBaseTypeCollection* get_BaseTypeCollection()
		{
			return ((::RPG::GameCore::AvatarBaseTypeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_BASETYPECOLLECTION_OFFSET))(this);
		}

		::System::Void set_BaseTypeCollection(::RPG::GameCore::AvatarBaseTypeCollection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarBaseTypeCollection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_SET_BASETYPECOLLECTION_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarBaseTypeMask GetAvatarBaseTypeMask(::RPG::GameCore::AvatarBaseTypeKind a1)
		{
			return ((::RPG::GameCore::AvatarBaseTypeMask(*)(::PVOID, ::RPG::GameCore::AvatarBaseTypeKind))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETAVATARBASETYPEMASK_OFFSET))(this, a1);
		}

		::System::Boolean HasAvatarBaseType(::RPG::GameCore::AvatarBaseType a1, ::RPG::GameCore::AvatarBaseTypeKind a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarBaseType, ::RPG::GameCore::AvatarBaseTypeKind))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_HASAVATARBASETYPE_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::IAvatar* get_Avatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_AVATAR_OFFSET))(this);
		}

		::RPG::GameCore::ServantRowData* get_PreviewServantRowData()
		{
			return ((::RPG::GameCore::ServantRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_PREVIEWSERVANTROWDATA_OFFSET))(this);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Int32 a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLROWDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::String* a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLROWDATABYNAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLROWDATABYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::AvatarSkillTreeRow*>* GetSkillTreeRowMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::AvatarSkillTreeRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEROWMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::AvatarRankConfigRow*>* GetRankRowMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::AvatarRankConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETRANKROWMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* GetSkillTreePropertyMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEPROPERTYMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* GetSkillTreeLevelMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLTREELEVELMAP_OFFSET))(this);
		}

		::RPG::GameCore::AvatarSkillTreeRow* GetSkillTreeRowByTriggerKey(::RPG::GameCore::AvatarSkillTreePointTriggerKey a1)
		{
			return ((::RPG::GameCore::AvatarSkillTreeRow*(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreePointTriggerKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEROWBYTRIGGERKEY_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarRankConfigRow* GetRankConfigRowByTriggerKey(::RPG::GameCore::StringHash a1)
		{
			return ((::RPG::GameCore::AvatarRankConfigRow*(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETRANKCONFIGROWBYTRIGGERKEY_OFFSET))(this, a1);
		}

		::System::Void _SetupSkillList(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA__SETUPSKILLLIST_OFFSET))(this, a1, a2);
		}

		::System::Void _OverrideSkillHideInUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA__OVERRIDESKILLHIDEINUI_OFFSET))(this);
		}
	};
}
