#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AetherRarityType.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_12;
class Class_1_B9C9FEF982623D49;
namespace RPG::Client { class AetherMonsterAvatarPropertyData; }
namespace RPG::Client { class AetherMonsterAvatarSkillData; }
namespace RPG::Client { class AetherMonsterAvatarSkillSlotData; }
namespace RPG::Client { class MonsterAvatarGrowUpBeforeData; }
namespace RPG::Client { class MonsterAvatarPropertyUIData; }
namespace RPG::GameCore { class AetherDivideSpiritRow; }
namespace System { class String; }

#define RPG_CLIENT_AETHERMONSTERAVATARDATA_CHECKISBADGEENOUGH_OFFSET UNITYSDK_OFFSET(0x907DDD0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_CHECKISCANPROMOTE_OFFSET UNITYSDK_OFFSET(0x907DC40)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_CHECKISMATENOUGH_OFFSET UNITYSDK_OFFSET(0x907DCC0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_CLEARPROMOTIONUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x907BE70)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_CREATEDISPLAYAVATAR_OFFSET UNITYSDK_OFFSET(0x907B7A0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_CREATETRIALDATA_OFFSET UNITYSDK_OFFSET(0x9075EC0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x907B2D0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETCURRENTEXPPERCENT_OFFSET UNITYSDK_OFFSET(0x907D560)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETDISPLAYFORMATADDVALUE_OFFSET UNITYSDK_OFFSET(0x907C280)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETDISPLAYFORMATPROPERTYBASEVALUE_OFFSET UNITYSDK_OFFSET(0x907C200)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETDISPLAYFORMATPROPERTYBYTYPE_OFFSET UNITYSDK_OFFSET(0x907C430)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETHPMAX_OFFSET UNITYSDK_OFFSET(0x907C4B0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETNEEDEXPTOPROMOTION_OFFSET UNITYSDK_OFFSET(0x907D630)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETNEWPROMOTIONBYADDEXP_OFFSET UNITYSDK_OFFSET(0x907D7D0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETPROMOTIONMAXEXP_OFFSET UNITYSDK_OFFSET(0x907D730)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETPROPERTYBYTYPE_OFFSET UNITYSDK_OFFSET(0x907CD40)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETPROPERTYUIDATA_OFFSET UNITYSDK_OFFSET(0x907BEC0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETSLOTINDEXBYSKILLCOREDATAID_OFFSET UNITYSDK_OFFSET(0x907D9D0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETSPMAX_OFFSET UNITYSDK_OFFSET(0x907CCC0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_AETHERMONSTERAVATARPROPERTYDATA_OFFSET UNITYSDK_OFFSET(0x907EDB0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_AETHERMONSTERAVATARSKILLDATA_OFFSET UNITYSDK_OFFSET(0x907EC30)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_AETHERMONSTERAVATARSKILLSLOTDATA_OFFSET UNITYSDK_OFFSET(0x907EC50)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0x907ECD0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_CURSP_OFFSET UNITYSDK_OFFSET(0x907EE90)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_EXPITEMID_OFFSET UNITYSDK_OFFSET(0x907ECF0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_GROWUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x907ED70)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_GYMLOCATION_OFFSET UNITYSDK_OFFSET(0x907ED10)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_HASSKILLITEMCORE_OFFSET UNITYSDK_OFFSET(0x907EDD0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x907EB70)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ISDISPLAYONLY_OFFSET UNITYSDK_OFFSET(0x907ED30)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ISELITE_OFFSET UNITYSDK_OFFSET(0x907EE60)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ISFIRSTUNLOCK_OFFSET UNITYSDK_OFFSET(0x907EE40)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x907EE20)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ISTRAIL_OFFSET UNITYSDK_OFFSET(0x907ED50)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_MANIKINMONSTERAVATARJSONPATH_OFFSET UNITYSDK_OFFSET(0x907EC70)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_MANIKINMONSTERAVATARMODELPATH_OFFSET UNITYSDK_OFFSET(0x907EC90)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_MAXPROMOTION_OFFSET UNITYSDK_OFFSET(0x907D610)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_MAXSP_OFFSET UNITYSDK_OFFSET(0x907EEB0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x907EB90)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_PROMOTIONBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x907ED90)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x907ECB0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x907EBE0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x907B400)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_SPIRITDESC_OFFSET UNITYSDK_OFFSET(0x907EC00)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_SPIRITTYPE_OFFSET UNITYSDK_OFFSET(0x907EBC0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SETINITIALDATA_OFFSET UNITYSDK_OFFSET(0x907D900)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SETISNEW_OFFSET UNITYSDK_OFFSET(0x907BE00)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SETNEW_OFFSET UNITYSDK_OFFSET(0x907BC00)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SETULTIMATEDATA_OFFSET UNITYSDK_OFFSET(0x907D950)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_AETHERMONSTERAVATARPROPERTYDATA_OFFSET UNITYSDK_OFFSET(0x907EDC0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_AETHERMONSTERAVATARSKILLDATA_OFFSET UNITYSDK_OFFSET(0x907EC40)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_AETHERMONSTERAVATARSKILLSLOTDATA_OFFSET UNITYSDK_OFFSET(0x907EC60)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0x907ECE0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_CURSP_OFFSET UNITYSDK_OFFSET(0x907EEA0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_GROWUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x907ED80)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x907EB80)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_ISDISPLAYONLY_OFFSET UNITYSDK_OFFSET(0x907ED40)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_ISFIRSTUNLOCK_OFFSET UNITYSDK_OFFSET(0x907EE50)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0x907EE30)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_ISTRAIL_OFFSET UNITYSDK_OFFSET(0x907ED60)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_PROMOTIONBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x907EDA0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x907ECC0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SYNCAETHERMONSTERAVATARDATA_OFFSET UNITYSDK_OFFSET(0x9079FD0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_UPDATESKILLCOREBELONGSTATUS_OFFSET UNITYSDK_OFFSET(0x907A1D0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x907B3F0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA__EQUIPSKILLCORE_OFFSET UNITYSDK_OFFSET(0x907B920)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA__RECORDDATA_OFFSET UNITYSDK_OFFSET(0x907DEB0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA__REFRESHBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x907BAE0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA__SYNCSKILLDATA_OFFSET UNITYSDK_OFFSET(0x907BA10)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherMonsterAvatarData_TypeDefinitionIndex = 50530;

	class AetherMonsterAvatarData : public ::System::Object
	{
	public:
		// static const ::System::String* _PLUS; // 0x0
		::RPG::Client::AetherMonsterAvatarPropertyData* _AetherMonsterAvatarPropertyData_k__BackingField; // 0x10
		::RPG::Client::AetherMonsterAvatarSkillSlotData* _AetherMonsterAvatarSkillSlotData_k__BackingField; // 0x18
		::RPG::Client::MonsterAvatarGrowUpBeforeData* _PromotionBeforeData_k__BackingField; // 0x20
		::RPG::GameCore::AetherDivideSpiritRow* _Row; // 0x28
		::RPG::Client::AetherMonsterAvatarSkillData* _AetherMonsterAvatarSkillData_k__BackingField; // 0x30
		::RPG::Client::MonsterAvatarGrowUpBeforeData* _GrowUpBeforeData_k__BackingField; // 0x38
		::System::UInt32 _CurSP_k__BackingField; // 0x40
		::System::Boolean _IsNew_k__BackingField; // 0x44
		::System::Boolean _IsTrail_k__BackingField; // 0x45
		::System::Boolean _IsDisplayOnly_k__BackingField; // 0x46
		::System::Boolean _IsFirstUnlock_k__BackingField; // 0x47
		::System::UInt32 _CurrentExp_k__BackingField; // 0x48
		::System::UInt32 _Promotion_k__BackingField; // 0x4C
		::System::UInt32 _ID_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AetherMonsterAvatarData* CreateTrialData(::System::UInt32 trialID)
		{
			return ((::RPG::Client::AetherMonsterAvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_CREATETRIALDATA_OFFSET))(trialID);
		}

		static ::RPG::Client::AetherMonsterAvatarData* Create(::System::UInt32 baseID)
		{
			return ((::RPG::Client::AetherMonsterAvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_CREATE_OFFSET))(baseID);
		}

		static ::RPG::Client::AetherMonsterAvatarData* CreateDisplayAvatar(::Class_1_B9C9FEF982623D49* spiritAvatar, ::System::String* PlayerName)
		{
			return ((::RPG::Client::AetherMonsterAvatarData*(*)(::Class_1_B9C9FEF982623D49*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_CREATEDISPLAYAVATAR_OFFSET))(spiritAvatar, PlayerName);
		}

		::System::Void SyncAetherMonsterAvatarData(::Class_1_B9C9FEF982623D49* spiritAvatar)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B9C9FEF982623D49*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SYNCAETHERMONSTERAVATARDATA_OFFSET))(this, spiritAvatar);
		}

		::System::Void SetNew(::System::UInt32 lastPromotion, ::System::Boolean isExisted)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SETNEW_OFFSET))(this, lastPromotion, isExisted);
		}

		::System::Void SetIsNew(::System::Boolean isNew)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SETISNEW_OFFSET))(this, isNew);
		}

		::System::Void ClearPromotionUpBeforeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_CLEARPROMOTIONUPBEFOREDATA_OFFSET))(this);
		}

		::RPG::Client::MonsterAvatarPropertyUIData* GetPropertyUIData(::RPG::GameCore::AvatarPropertyType propertyType, ::System::Boolean isWithAdd)
		{
			return ((::RPG::Client::MonsterAvatarPropertyUIData*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETPROPERTYUIDATA_OFFSET))(this, propertyType, isWithAdd);
		}

		::RPG::GameCore::FixPoint GetHPMax(::System::UInt32 promotion)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETHPMAX_OFFSET))(this, promotion);
		}

		::RPG::GameCore::FixPoint GetSPMax(::System::UInt32 promotion)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETSPMAX_OFFSET))(this, promotion);
		}

		::RPG::GameCore::FixPoint GetPropertyByType(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETPROPERTYBYTYPE_OFFSET))(this, propertyType, promotion);
		}

		::System::String* GetDisplayFormatPropertyByType(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETDISPLAYFORMATPROPERTYBYTYPE_OFFSET))(this, propertyType, promotion);
		}

		::System::String* GetDisplayFormatPropertyBaseValue(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETDISPLAYFORMATPROPERTYBASEVALUE_OFFSET))(this, propertyType, promotion);
		}

		::System::String* GetDisplayFormatAddValue(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion, ::System::Boolean isWithPlus)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETDISPLAYFORMATADDVALUE_OFFSET))(this, propertyType, promotion, isWithPlus);
		}

		::System::Single GetCurrentExpPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETCURRENTEXPPERCENT_OFFSET))(this);
		}

		::System::UInt32 GetNeedExpToPromotion(::System::UInt32 toPromotion)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETNEEDEXPTOPROMOTION_OFFSET))(this, toPromotion);
		}

		::System::UInt32 GetPromotionMaxExp(::System::UInt32 promotion)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETPROMOTIONMAXEXP_OFFSET))(this, promotion);
		}

		::System::UInt32 GetNewPromotionByAddExp(::System::UInt32 addExp)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETNEWPROMOTIONBYADDEXP_OFFSET))(this, addExp);
		}

		::System::Void SetInitialData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SETINITIALDATA_OFFSET))(this);
		}

		::System::Void SetUltimateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SETULTIMATEDATA_OFFSET))(this);
		}

		::System::Void UpdateSkillCoreBelongStatus(::Class_1_120319518E6F6581_12* skillItem, ::System::Boolean isEquip)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_12*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_UPDATESKILLCOREBELONGSTATUS_OFFSET))(this, skillItem, isEquip);
		}

		::System::UInt32 GetSlotIndexBySkillCoreDataID(::System::UInt32 skillCoreID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETSLOTINDEXBYSKILLCOREDATAID_OFFSET))(this, skillCoreID);
		}

		::System::Boolean CheckIsCanPromote()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_CHECKISCANPROMOTE_OFFSET))(this);
		}

		::System::Boolean CheckIsMatEnough()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_CHECKISMATENOUGH_OFFSET))(this);
		}

		::System::Boolean CheckIsBadgeEnough()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_CHECKISBADGEENOUGH_OFFSET))(this);
		}

		::System::Void _RefreshBeforeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA__REFRESHBEFOREDATA_OFFSET))(this);
		}

		::System::Void _RecordData(::RPG::Client::MonsterAvatarGrowUpBeforeData* growupData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterAvatarGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA__RECORDDATA_OFFSET))(this, growupData);
		}

		::System::Void _EquipSkillCore(::Class_1_B9C9FEF982623D49* spiritAvatar)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B9C9FEF982623D49*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA__EQUIPSKILLCORE_OFFSET))(this, spiritAvatar);
		}

		::System::Void _SyncSkillData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA__SYNCSKILLDATA_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::AetherDivideSpiritRow* get_Row()
		{
			return ((::RPG::GameCore::AetherDivideSpiritRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::AetherSpiritType get_SpiritType()
		{
			return ((::RPG::GameCore::AetherSpiritType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_SPIRITTYPE_OFFSET))(this);
		}

		::RPG::GameCore::AetherRarityType get_Rarity()
		{
			return ((::RPG::GameCore::AetherRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_RARITY_OFFSET))(this);
		}

		::RPG::Client::TextID get_SpiritDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_SPIRITDESC_OFFSET))(this);
		}

		::RPG::Client::AetherMonsterAvatarSkillData* get_AetherMonsterAvatarSkillData()
		{
			return ((::RPG::Client::AetherMonsterAvatarSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_AETHERMONSTERAVATARSKILLDATA_OFFSET))(this);
		}

		::System::Void set_AetherMonsterAvatarSkillData(::RPG::Client::AetherMonsterAvatarSkillData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherMonsterAvatarSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_AETHERMONSTERAVATARSKILLDATA_OFFSET))(this, value);
		}

		::RPG::Client::AetherMonsterAvatarSkillSlotData* get_AetherMonsterAvatarSkillSlotData()
		{
			return ((::RPG::Client::AetherMonsterAvatarSkillSlotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_AETHERMONSTERAVATARSKILLSLOTDATA_OFFSET))(this);
		}

		::System::Void set_AetherMonsterAvatarSkillSlotData(::RPG::Client::AetherMonsterAvatarSkillSlotData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherMonsterAvatarSkillSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_AETHERMONSTERAVATARSKILLSLOTDATA_OFFSET))(this, value);
		}

		::System::String* get_ManikinMonsterAvatarJsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_MANIKINMONSTERAVATARJSONPATH_OFFSET))(this);
		}

		::System::String* get_ManikinMonsterAvatarModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_MANIKINMONSTERAVATARMODELPATH_OFFSET))(this);
		}

		::System::UInt32 get_Promotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_PROMOTION_OFFSET))(this);
		}

		::System::Void set_Promotion(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_PROMOTION_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_CURRENTEXP_OFFSET))(this);
		}

		::System::Void set_CurrentExp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_CURRENTEXP_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxPromotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_MAXPROMOTION_OFFSET))(this);
		}

		::System::UInt32 get_ExpItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_EXPITEMID_OFFSET))(this);
		}

		::System::UInt32 get_GymLocation()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_GYMLOCATION_OFFSET))(this);
		}

		::System::Boolean get_IsDisplayOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ISDISPLAYONLY_OFFSET))(this);
		}

		::System::Void set_IsDisplayOnly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_ISDISPLAYONLY_OFFSET))(this, value);
		}

		::System::Boolean get_IsTrail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ISTRAIL_OFFSET))(this);
		}

		::System::Void set_IsTrail(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_ISTRAIL_OFFSET))(this, value);
		}

		::RPG::Client::MonsterAvatarGrowUpBeforeData* get_GrowUpBeforeData()
		{
			return ((::RPG::Client::MonsterAvatarGrowUpBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_GROWUPBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_GrowUpBeforeData(::RPG::Client::MonsterAvatarGrowUpBeforeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterAvatarGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_GROWUPBEFOREDATA_OFFSET))(this, value);
		}

		::RPG::Client::MonsterAvatarGrowUpBeforeData* get_PromotionBeforeData()
		{
			return ((::RPG::Client::MonsterAvatarGrowUpBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_PROMOTIONBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_PromotionBeforeData(::RPG::Client::MonsterAvatarGrowUpBeforeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterAvatarGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_PROMOTIONBEFOREDATA_OFFSET))(this, value);
		}

		::RPG::Client::AetherMonsterAvatarPropertyData* get_AetherMonsterAvatarPropertyData()
		{
			return ((::RPG::Client::AetherMonsterAvatarPropertyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_AETHERMONSTERAVATARPROPERTYDATA_OFFSET))(this);
		}

		::System::Void set_AetherMonsterAvatarPropertyData(::RPG::Client::AetherMonsterAvatarPropertyData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherMonsterAvatarPropertyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_AETHERMONSTERAVATARPROPERTYDATA_OFFSET))(this, value);
		}

		::System::Boolean get_HasSkillItemCore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_HASSKILLITEMCORE_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_ISNEW_OFFSET))(this, value);
		}

		::System::Boolean get_IsFirstUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ISFIRSTUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsFirstUnlock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_ISFIRSTUNLOCK_OFFSET))(this, value);
		}

		::System::Boolean get_IsElite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ISELITE_OFFSET))(this);
		}

		::System::UInt32 get_CurSP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_CURSP_OFFSET))(this);
		}

		::System::Void set_CurSP(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_CURSP_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxSP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_MAXSP_OFFSET))(this);
		}
	};
}
