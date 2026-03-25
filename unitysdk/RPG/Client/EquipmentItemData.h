#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ItemData.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_EBB10EC01CCC4716_17;
class Class_1_FA4F4A67B1C04320_320;
namespace RPG::Client { class EquipmentGrowUpBeforeData; }
namespace RPG::Client { class EquipmentPropertyUIData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::GameCore { class EquipmentRow; }
namespace RPG::GameCore { class EquipmentSkillRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EQUIPMENTITEMDATA_CALCULATEPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x9620320)
#define RPG_CLIENT_EQUIPMENTITEMDATA_CLEARLEVELUPBEFORDATA_OFFSET UNITYSDK_OFFSET(0x9620CA0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_CLEARPROMOTIONBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x9620CF0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_CLEARRANKUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x9620D40)
#define RPG_CLIENT_EQUIPMENTITEMDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x961FD70)
#define RPG_CLIENT_EQUIPMENTITEMDATA_CREATEDISPLAYEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x961F770)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETALLPROPERTYUIDATA_OFFSET UNITYSDK_OFFSET(0x9620420)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETATTACK_OFFSET UNITYSDK_OFFSET(0x9620120)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETBATTLEATTACK_OFFSET UNITYSDK_OFFSET(0x9620260)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETBATTLEDEFENCE_OFFSET UNITYSDK_OFFSET(0x96202C0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETBATTLEHP_OFFSET UNITYSDK_OFFSET(0x9620200)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETCURRENTLVMAXEXP_OFFSET UNITYSDK_OFFSET(0x96207D0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETCURRENTMAXLV_OFFSET UNITYSDK_OFFSET(0x96208F0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETDEFENCE_OFFSET UNITYSDK_OFFSET(0x9620190)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETEQUIPMENTCOMBATPOWER_OFFSET UNITYSDK_OFFSET(0x9620D90)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETHP_OFFSET UNITYSDK_OFFSET(0x961FE80)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETLVMAXEXP_OFFSET UNITYSDK_OFFSET(0x9620860)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETNEEDEXPTOLV_OFFSET UNITYSDK_OFFSET(0x96206C0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETNEWLEVELBYADDEXP_OFFSET UNITYSDK_OFFSET(0x9620970)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x961FEF0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETPROVIDEEXP_OFFSET UNITYSDK_OFFSET(0x9620B00)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_AVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0x9620E40)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_BATTLERANKSKILLROW_OFFSET UNITYSDK_OFFSET(0x96211A0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_BATTLERANK_OFFSET UNITYSDK_OFFSET(0x9621220)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_BELONGAVATARID_OFFSET UNITYSDK_OFFSET(0x9621580)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_BELONGDISPLAYAVATAR_OFFSET UNITYSDK_OFFSET(0x96215C0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_CARDBACKIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9621440)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0x96214E0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_EQUIPMENTROW_OFFSET UNITYSDK_OFFSET(0x9621180)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_GROWUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x96215E0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_ISPROTECTED_OFFSET UNITYSDK_OFFSET(0x9621560)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_LEVELUPEDBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x9621600)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9621500)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_PROMOTEDBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x9621620)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x9621520)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_RANKUPEDBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x9621640)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x9621540)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_SKILLROW_OFFSET UNITYSDK_OFFSET(0x96213C0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x96215A0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_BELONGAVATARID_OFFSET UNITYSDK_OFFSET(0x9621590)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_BELONGDISPLAYAVATAR_OFFSET UNITYSDK_OFFSET(0x96215D0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0x96214F0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_EQUIPMENTROW_OFFSET UNITYSDK_OFFSET(0x9621190)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_GROWUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x96215F0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_ISPROTECTED_OFFSET UNITYSDK_OFFSET(0x9621570)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_LEVELUPEDBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x9621610)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9621510)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_PROMOTEDBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x9621630)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x9621530)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_RANKUPEDBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x9621650)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0x9621550)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x96215B0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x961F8C0)
#define RPG_CLIENT_EQUIPMENTITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x961F860)
#define RPG_CLIENT_EQUIPMENTITEMDATA__GETBELONGAVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0x9620E60)
#define RPG_CLIENT_EQUIPMENTITEMDATA__INCREMENTVERSION_OFFSET UNITYSDK_OFFSET(0x961FA70)
#define RPG_CLIENT_EQUIPMENTITEMDATA__RECORDDATA_OFFSET UNITYSDK_OFFSET(0x9620FE0)
#define RPG_CLIENT_EQUIPMENTITEMDATA__REFRESHBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x961FAC0)

namespace RPG::Client
{
	inline static constexpr unsigned int EquipmentItemData_TypeDefinitionIndex = 53347;

	class EquipmentItemData : public ::RPG::Client::ItemData
	{
	public:
		// static const ::System::UInt32 RankMax = 0x5; // 0x0
		::RPG::Client::EquipmentGrowUpBeforeData* _LevelUpedBeforeData_k__BackingField; // 0x40
		::RPG::Client::EquipmentGrowUpBeforeData* _PromotedBeforeData_k__BackingField; // 0x48
		::RPG::Client::EquipmentGrowUpBeforeData* _GrowUpBeforeData_k__BackingField; // 0x50
		::RPG::Client::EquipmentGrowUpBeforeData* _RankUpedBeforeData_k__BackingField; // 0x58
		::RPG::GameCore::EquipmentRow* _EquipmentRow_k__BackingField; // 0x60
		::RPG::Client::IAvatarInfoProvider* _BelongDisplayAvatar_k__BackingField; // 0x68
		::System::UInt32 _Rank; // 0x70
		::System::UInt32 _Version_k__BackingField; // 0x74
		::System::UInt32 _BelongAvatarID_k__BackingField; // 0x78
		::System::UInt32 _Promotion_k__BackingField; // 0x7C
		::System::UInt32 _CurrentExp_k__BackingField; // 0x80
		::System::Boolean _IsProtected_k__BackingField; // 0x84
		::System::UInt32 _Level_k__BackingField; // 0x88

		::System::Void _ctor(::System::UInt32 configID, ::System::UInt32 uID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA__CTOR_OFFSET))(this, configID, uID);
		}

		static ::RPG::Client::EquipmentItemData* CreateDisplayEquipment(::Class_1_FA4F4A67B1C04320_320* equipment, ::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::RPG::Client::EquipmentItemData*(*)(::Class_1_FA4F4A67B1C04320_320*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_CREATEDISPLAYEQUIPMENT_OFFSET))(equipment, avatar);
		}

		::System::Void Sync(::Class_1_EBB10EC01CCC4716_17* item)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SYNC_OFFSET))(this, item);
		}

		static ::RPG::Client::EquipmentItemData* Clone(::RPG::Client::EquipmentItemData* equipmentItemData)
		{
			return ((::RPG::Client::EquipmentItemData*(*)(::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_CLONE_OFFSET))(equipmentItemData);
		}

		::RPG::GameCore::FixPoint GetHP(::System::UInt32 promotion, ::System::UInt32 level)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETHP_OFFSET))(this, promotion, level);
		}

		::RPG::GameCore::FixPoint GetAttack(::System::UInt32 promotion, ::System::UInt32 level)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETATTACK_OFFSET))(this, promotion, level);
		}

		::RPG::GameCore::FixPoint GetDefence(::System::UInt32 promotion, ::System::UInt32 level)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETDEFENCE_OFFSET))(this, promotion, level);
		}

		::RPG::GameCore::FixPoint GetBattleHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETBATTLEHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetBattleAttack()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETBATTLEATTACK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetBattleDefence()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETBATTLEDEFENCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetPropertyValue(::RPG::GameCore::AvatarPropertyType type, ::System::UInt32 promotion, ::System::UInt32 level, ::System::Boolean calcAddition)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETPROPERTYVALUE_OFFSET))(this, type, promotion, level, calcAddition);
		}

		::RPG::GameCore::FixPoint CalculatePropertyValue(::RPG::GameCore::AvatarPropertyType type, ::System::UInt32 promotion, ::System::UInt32 level)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_CALCULATEPROPERTYVALUE_OFFSET))(this, type, promotion, level);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EquipmentPropertyUIData*>* GetAllPropertyUIData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EquipmentPropertyUIData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETALLPROPERTYUIDATA_OFFSET))(this);
		}

		::System::UInt32 GetNeedExpToLv(::System::UInt32 toLevel)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETNEEDEXPTOLV_OFFSET))(this, toLevel);
		}

		::System::UInt32 GetCurrentLvMaxExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETCURRENTLVMAXEXP_OFFSET))(this);
		}

		::System::UInt32 GetLvMaxExp(::System::UInt32 level)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETLVMAXEXP_OFFSET))(this, level);
		}

		::System::UInt32 GetCurrentMaxLv()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETCURRENTMAXLV_OFFSET))(this);
		}

		::System::UInt32 GetNewLevelByAddExp(::System::UInt32 addExp)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETNEWLEVELBYADDEXP_OFFSET))(this, addExp);
		}

		::System::UInt32 GetProvideExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETPROVIDEEXP_OFFSET))(this);
		}

		::System::Void ClearLevelUpBeforData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_CLEARLEVELUPBEFORDATA_OFFSET))(this);
		}

		::System::Void ClearPromotionBeforeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_CLEARPROMOTIONBEFOREDATA_OFFSET))(this);
		}

		::System::Void ClearRankUpBeforeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_CLEARRANKUPBEFOREDATA_OFFSET))(this);
		}

		::System::Single GetEquipmentCombatPower()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETEQUIPMENTCOMBATPOWER_OFFSET))(this);
		}

		::System::Void _RefreshBeforeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA__REFRESHBEFOREDATA_OFFSET))(this);
		}

		::System::Void _RecordData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA__RECORDDATA_OFFSET))(this);
		}

		::RPG::GameCore::AvatarBaseType _GetBelongAvatarBaseType()
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA__GETBELONGAVATARBASETYPE_OFFSET))(this);
		}

		::System::Void _IncrementVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA__INCREMENTVERSION_OFFSET))(this);
		}

		::RPG::GameCore::EquipmentRow* get_EquipmentRow()
		{
			return ((::RPG::GameCore::EquipmentRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_EQUIPMENTROW_OFFSET))(this);
		}

		::System::Void set_EquipmentRow(::RPG::GameCore::EquipmentRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EquipmentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_EQUIPMENTROW_OFFSET))(this, value);
		}

		::RPG::GameCore::EquipmentSkillRow* get_BattleRankSkillRow()
		{
			return ((::RPG::GameCore::EquipmentSkillRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_BATTLERANKSKILLROW_OFFSET))(this);
		}

		::RPG::GameCore::EquipmentSkillRow* get_SkillRow()
		{
			return ((::RPG::GameCore::EquipmentSkillRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_SKILLROW_OFFSET))(this);
		}

		::RPG::GameCore::AvatarBaseType get_AvatarBaseType()
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_AVATARBASETYPE_OFFSET))(this);
		}

		::System::String* get_CardBackImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_CARDBACKIMAGEPATH_OFFSET))(this);
		}

		::System::UInt32 get_CurrentExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_CURRENTEXP_OFFSET))(this);
		}

		::System::Void set_CurrentExp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_CURRENTEXP_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_Promotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_PROMOTION_OFFSET))(this);
		}

		::System::Void set_Promotion(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_PROMOTION_OFFSET))(this, value);
		}

		::System::UInt32 get_BattleRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_BATTLERANK_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_RANK_OFFSET))(this, value);
		}

		::System::Boolean get_IsProtected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_ISPROTECTED_OFFSET))(this);
		}

		::System::Void set_IsProtected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_ISPROTECTED_OFFSET))(this, value);
		}

		::System::UInt32 get_BelongAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_BELONGAVATARID_OFFSET))(this);
		}

		::System::Void set_BelongAvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_BELONGAVATARID_OFFSET))(this, value);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_VERSION_OFFSET))(this, value);
		}

		::RPG::Client::IAvatarInfoProvider* get_BelongDisplayAvatar()
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_BELONGDISPLAYAVATAR_OFFSET))(this);
		}

		::System::Void set_BelongDisplayAvatar(::RPG::Client::IAvatarInfoProvider* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_BELONGDISPLAYAVATAR_OFFSET))(this, value);
		}

		::RPG::Client::EquipmentGrowUpBeforeData* get_GrowUpBeforeData()
		{
			return ((::RPG::Client::EquipmentGrowUpBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_GROWUPBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_GrowUpBeforeData(::RPG::Client::EquipmentGrowUpBeforeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EquipmentGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_GROWUPBEFOREDATA_OFFSET))(this, value);
		}

		::RPG::Client::EquipmentGrowUpBeforeData* get_LevelUpedBeforeData()
		{
			return ((::RPG::Client::EquipmentGrowUpBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_LEVELUPEDBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_LevelUpedBeforeData(::RPG::Client::EquipmentGrowUpBeforeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EquipmentGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_LEVELUPEDBEFOREDATA_OFFSET))(this, value);
		}

		::RPG::Client::EquipmentGrowUpBeforeData* get_PromotedBeforeData()
		{
			return ((::RPG::Client::EquipmentGrowUpBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_PROMOTEDBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_PromotedBeforeData(::RPG::Client::EquipmentGrowUpBeforeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EquipmentGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_PROMOTEDBEFOREDATA_OFFSET))(this, value);
		}

		::RPG::Client::EquipmentGrowUpBeforeData* get_RankUpedBeforeData()
		{
			return ((::RPG::Client::EquipmentGrowUpBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_RANKUPEDBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_RankUpedBeforeData(::RPG::Client::EquipmentGrowUpBeforeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EquipmentGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_RANKUPEDBEFOREDATA_OFFSET))(this, value);
		}
	};
}
