#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AetherRarityType.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_419A79D235B9417C_1;
class Class_1_D17272E82AE804C2_81;
namespace RPG::Client { class AetherMonsterAvatarPropertyData; }
namespace RPG::Client { class AetherMonsterAvatarSkillData; }
namespace RPG::Client { class AetherMonsterAvatarSkillSlotData; }
namespace RPG::Client { class MonsterAvatarGrowUpBeforeData; }
namespace RPG::Client { class MonsterAvatarPropertyUIData; }
namespace RPG::GameCore { class AetherDivideSpiritRow; }
namespace System { class String; }

#define RPG_CLIENT_AETHERMONSTERAVATARDATA_CHECKISBADGEENOUGH_OFFSET UNITYSDK_OFFSET(0xC7132B0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_CHECKISCANPROMOTE_OFFSET UNITYSDK_OFFSET(0xC713100)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_CHECKISMATENOUGH_OFFSET UNITYSDK_OFFSET(0xC7131B0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_CLEARPROMOTIONUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0xC7110E0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_CREATEDISPLAYAVATAR_OFFSET UNITYSDK_OFFSET(0xC710A00)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_CREATETRIALDATA_OFFSET UNITYSDK_OFFSET(0xC70AB00)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC710540)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETCURRENTEXPPERCENT_OFFSET UNITYSDK_OFFSET(0xC7128E0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETDISPLAYFORMATADDVALUE_OFFSET UNITYSDK_OFFSET(0xC7113D0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETDISPLAYFORMATPROPERTYBASEVALUE_OFFSET UNITYSDK_OFFSET(0xC711350)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETDISPLAYFORMATPROPERTYBYTYPE_OFFSET UNITYSDK_OFFSET(0xC711500)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETHPMAX_OFFSET UNITYSDK_OFFSET(0xC711580)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETNEEDEXPTOPROMOTION_OFFSET UNITYSDK_OFFSET(0xC712A30)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETNEWPROMOTIONBYADDEXP_OFFSET UNITYSDK_OFFSET(0xC712C00)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETPROMOTIONMAXEXP_OFFSET UNITYSDK_OFFSET(0xC712B30)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETPROPERTYBYTYPE_OFFSET UNITYSDK_OFFSET(0xC711F00)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETPROPERTYUIDATA_OFFSET UNITYSDK_OFFSET(0xC711130)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETSLOTINDEXBYSKILLCOREDATAID_OFFSET UNITYSDK_OFFSET(0xC712EA0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GETSPMAX_OFFSET UNITYSDK_OFFSET(0xC711E80)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_AETHERMONSTERAVATARPROPERTYDATA_OFFSET UNITYSDK_OFFSET(0xC714590)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_AETHERMONSTERAVATARSKILLDATA_OFFSET UNITYSDK_OFFSET(0xC714310)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_AETHERMONSTERAVATARSKILLSLOTDATA_OFFSET UNITYSDK_OFFSET(0xC714330)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0xC714430)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_CURSP_OFFSET UNITYSDK_OFFSET(0xC7146D0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_EXPITEMID_OFFSET UNITYSDK_OFFSET(0xC714450)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_GROWUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0xC714550)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_GYMLOCATION_OFFSET UNITYSDK_OFFSET(0xC7144B0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_HASSKILLITEMCORE_OFFSET UNITYSDK_OFFSET(0xC7145B0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC714150)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ISDISPLAYONLY_OFFSET UNITYSDK_OFFSET(0xC714510)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ISELITE_OFFSET UNITYSDK_OFFSET(0xC714640)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ISFIRSTUNLOCK_OFFSET UNITYSDK_OFFSET(0xC714620)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xC714600)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ISTRAIL_OFFSET UNITYSDK_OFFSET(0xC714530)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_MANIKINMONSTERAVATARJSONPATH_OFFSET UNITYSDK_OFFSET(0xC714350)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_MANIKINMONSTERAVATARMODELPATH_OFFSET UNITYSDK_OFFSET(0xC7143B0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_MAXPROMOTION_OFFSET UNITYSDK_OFFSET(0xC7129D0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_MAXSP_OFFSET UNITYSDK_OFFSET(0xC7146F0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC714170)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_PROMOTIONBEFOREDATA_OFFSET UNITYSDK_OFFSET(0xC714570)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_PROMOTION_OFFSET UNITYSDK_OFFSET(0xC714410)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xC714240)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xC710670)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_SPIRITDESC_OFFSET UNITYSDK_OFFSET(0xC7142A0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_SPIRITTYPE_OFFSET UNITYSDK_OFFSET(0xC7141E0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SETINITIALDATA_OFFSET UNITYSDK_OFFSET(0xC712DD0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SETISNEW_OFFSET UNITYSDK_OFFSET(0xC711070)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SETNEW_OFFSET UNITYSDK_OFFSET(0xC710E70)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SETULTIMATEDATA_OFFSET UNITYSDK_OFFSET(0xC712E20)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_AETHERMONSTERAVATARPROPERTYDATA_OFFSET UNITYSDK_OFFSET(0xC7145A0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_AETHERMONSTERAVATARSKILLDATA_OFFSET UNITYSDK_OFFSET(0xC714320)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_AETHERMONSTERAVATARSKILLSLOTDATA_OFFSET UNITYSDK_OFFSET(0xC714340)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0xC714440)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_CURSP_OFFSET UNITYSDK_OFFSET(0xC7146E0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_GROWUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0xC714560)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xC714160)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_ISDISPLAYONLY_OFFSET UNITYSDK_OFFSET(0xC714520)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_ISFIRSTUNLOCK_OFFSET UNITYSDK_OFFSET(0xC714630)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0xC714610)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_ISTRAIL_OFFSET UNITYSDK_OFFSET(0xC714540)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_PROMOTIONBEFOREDATA_OFFSET UNITYSDK_OFFSET(0xC714580)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_PROMOTION_OFFSET UNITYSDK_OFFSET(0xC714420)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_SYNCAETHERMONSTERAVATARDATA_OFFSET UNITYSDK_OFFSET(0xC70F310)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA_UPDATESKILLCOREBELONGSTATUS_OFFSET UNITYSDK_OFFSET(0xC70F4E0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC710660)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA__EQUIPSKILLCORE_OFFSET UNITYSDK_OFFSET(0xC710B90)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA__RECORDDATA_OFFSET UNITYSDK_OFFSET(0xC7133D0)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA__REFRESHBEFOREDATA_OFFSET UNITYSDK_OFFSET(0xC710D50)
#define RPG_CLIENT_AETHERMONSTERAVATARDATA__SYNCSKILLDATA_OFFSET UNITYSDK_OFFSET(0xC710C80)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherMonsterAvatarData_TypeDefinitionIndex = 62306;

	class AetherMonsterAvatarData : public ::System::Object
	{
	public:
		// static const ::System::String* _PLUS; // 0x0
		::RPG::Client::AetherMonsterAvatarPropertyData* _AetherMonsterAvatarPropertyData_k__BackingField; // 0x10
		::RPG::GameCore::AetherDivideSpiritRow* _Row; // 0x18
		::RPG::Client::AetherMonsterAvatarSkillSlotData* _AetherMonsterAvatarSkillSlotData_k__BackingField; // 0x20
		::RPG::Client::AetherMonsterAvatarSkillData* _AetherMonsterAvatarSkillData_k__BackingField; // 0x28
		::RPG::Client::MonsterAvatarGrowUpBeforeData* _PromotionBeforeData_k__BackingField; // 0x30
		::RPG::Client::MonsterAvatarGrowUpBeforeData* _GrowUpBeforeData_k__BackingField; // 0x38
		::System::Boolean _IsDisplayOnly_k__BackingField; // 0x40
		::System::Boolean _IsFirstUnlock_k__BackingField; // 0x41
		::System::Boolean _IsTrail_k__BackingField; // 0x42
		::System::Boolean _IsNew_k__BackingField; // 0x43
		::System::UInt32 _CurSP_k__BackingField; // 0x44
		::System::UInt32 _CurrentExp_k__BackingField; // 0x48
		::System::UInt32 _ID_k__BackingField; // 0x4C
		::System::UInt32 _Promotion_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AetherMonsterAvatarData* CreateTrialData(::System::UInt32 a1)
		{
			return ((::RPG::Client::AetherMonsterAvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_CREATETRIALDATA_OFFSET))(a1);
		}

		static ::RPG::Client::AetherMonsterAvatarData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::AetherMonsterAvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::AetherMonsterAvatarData* CreateDisplayAvatar(::Class_1_419A79D235B9417C_1* a1, ::System::String* a2)
		{
			return ((::RPG::Client::AetherMonsterAvatarData*(*)(::Class_1_419A79D235B9417C_1*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_CREATEDISPLAYAVATAR_OFFSET))(a1, a2);
		}

		::System::Void SyncAetherMonsterAvatarData(::Class_1_419A79D235B9417C_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_419A79D235B9417C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SYNCAETHERMONSTERAVATARDATA_OFFSET))(this, a1);
		}

		::System::Void SetNew(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SETNEW_OFFSET))(this, a1, a2);
		}

		::System::Void SetIsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SETISNEW_OFFSET))(this, a1);
		}

		::System::Void ClearPromotionUpBeforeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_CLEARPROMOTIONUPBEFOREDATA_OFFSET))(this);
		}

		::RPG::Client::MonsterAvatarPropertyUIData* GetPropertyUIData(::RPG::GameCore::AvatarPropertyType a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::MonsterAvatarPropertyUIData*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETPROPERTYUIDATA_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint GetHPMax(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETHPMAX_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetSPMax(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETSPMAX_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetPropertyByType(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETPROPERTYBYTYPE_OFFSET))(this, a1, a2);
		}

		::System::String* GetDisplayFormatPropertyByType(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETDISPLAYFORMATPROPERTYBYTYPE_OFFSET))(this, a1, a2);
		}

		::System::String* GetDisplayFormatPropertyBaseValue(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETDISPLAYFORMATPROPERTYBASEVALUE_OFFSET))(this, a1, a2);
		}

		::System::String* GetDisplayFormatAddValue(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETDISPLAYFORMATADDVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetCurrentExpPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETCURRENTEXPPERCENT_OFFSET))(this);
		}

		::System::UInt32 GetNeedExpToPromotion(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETNEEDEXPTOPROMOTION_OFFSET))(this, a1);
		}

		::System::UInt32 GetPromotionMaxExp(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETPROMOTIONMAXEXP_OFFSET))(this, a1);
		}

		::System::UInt32 GetNewPromotionByAddExp(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETNEWPROMOTIONBYADDEXP_OFFSET))(this, a1);
		}

		::System::Void SetInitialData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SETINITIALDATA_OFFSET))(this);
		}

		::System::Void SetUltimateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SETULTIMATEDATA_OFFSET))(this);
		}

		::System::Void UpdateSkillCoreBelongStatus(::Class_1_D17272E82AE804C2_81* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_81*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_UPDATESKILLCOREBELONGSTATUS_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSlotIndexBySkillCoreDataID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GETSLOTINDEXBYSKILLCOREDATAID_OFFSET))(this, a1);
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

		::System::Void _RecordData(::RPG::Client::MonsterAvatarGrowUpBeforeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterAvatarGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA__RECORDDATA_OFFSET))(this, a1);
		}

		::System::Void _EquipSkillCore(::Class_1_419A79D235B9417C_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_419A79D235B9417C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA__EQUIPSKILLCORE_OFFSET))(this, a1);
		}

		::System::Void _SyncSkillData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA__SYNCSKILLDATA_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_ID_OFFSET))(this, a1);
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

		::System::Void set_AetherMonsterAvatarSkillData(::RPG::Client::AetherMonsterAvatarSkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherMonsterAvatarSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_AETHERMONSTERAVATARSKILLDATA_OFFSET))(this, a1);
		}

		::RPG::Client::AetherMonsterAvatarSkillSlotData* get_AetherMonsterAvatarSkillSlotData()
		{
			return ((::RPG::Client::AetherMonsterAvatarSkillSlotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_AETHERMONSTERAVATARSKILLSLOTDATA_OFFSET))(this);
		}

		::System::Void set_AetherMonsterAvatarSkillSlotData(::RPG::Client::AetherMonsterAvatarSkillSlotData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherMonsterAvatarSkillSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_AETHERMONSTERAVATARSKILLSLOTDATA_OFFSET))(this, a1);
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

		::System::Void set_Promotion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_PROMOTION_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_CURRENTEXP_OFFSET))(this);
		}

		::System::Void set_CurrentExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_CURRENTEXP_OFFSET))(this, a1);
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

		::System::Void set_IsDisplayOnly(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_ISDISPLAYONLY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTrail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ISTRAIL_OFFSET))(this);
		}

		::System::Void set_IsTrail(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_ISTRAIL_OFFSET))(this, a1);
		}

		::RPG::Client::MonsterAvatarGrowUpBeforeData* get_GrowUpBeforeData()
		{
			return ((::RPG::Client::MonsterAvatarGrowUpBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_GROWUPBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_GrowUpBeforeData(::RPG::Client::MonsterAvatarGrowUpBeforeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterAvatarGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_GROWUPBEFOREDATA_OFFSET))(this, a1);
		}

		::RPG::Client::MonsterAvatarGrowUpBeforeData* get_PromotionBeforeData()
		{
			return ((::RPG::Client::MonsterAvatarGrowUpBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_PROMOTIONBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_PromotionBeforeData(::RPG::Client::MonsterAvatarGrowUpBeforeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterAvatarGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_PROMOTIONBEFOREDATA_OFFSET))(this, a1);
		}

		::RPG::Client::AetherMonsterAvatarPropertyData* get_AetherMonsterAvatarPropertyData()
		{
			return ((::RPG::Client::AetherMonsterAvatarPropertyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_AETHERMONSTERAVATARPROPERTYDATA_OFFSET))(this);
		}

		::System::Void set_AetherMonsterAvatarPropertyData(::RPG::Client::AetherMonsterAvatarPropertyData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherMonsterAvatarPropertyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_AETHERMONSTERAVATARPROPERTYDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_HasSkillItemCore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_HASSKILLITEMCORE_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_ISNEW_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFirstUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ISFIRSTUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsFirstUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_ISFIRSTUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsElite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_ISELITE_OFFSET))(this);
		}

		::System::UInt32 get_CurSP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_CURSP_OFFSET))(this);
		}

		::System::Void set_CurSP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_SET_CURSP_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxSP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARDATA_GET_MAXSP_OFFSET))(this);
		}
	};
}
