#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesLandType.h"
#include "unitysdk/RPG/GameCore/PlanetFesStandType.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_704;
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::Client { class PlanetFesLandData; }
namespace RPG::Client { class PlanetFesUnlockData; }
namespace RPG::GameCore { class PlanetFesAvatarRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESAVATARDATA_CANUPGRADELEVEL_OFFSET UNITYSDK_OFFSET(0xC3F93D0)
#define RPG_CLIENT_PLANETFESAVATARDATA_GETBELINKAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC3F8D90)
#define RPG_CLIENT_PLANETFESAVATARDATA_GETBUFFS_OFFSET UNITYSDK_OFFSET(0xC3F8A00)
#define RPG_CLIENT_PLANETFESAVATARDATA_GETLINKAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC3F8B50)
#define RPG_CLIENT_PLANETFESAVATARDATA_GETLOCKDATA_OFFSET UNITYSDK_OFFSET(0xC3F8A40)
#define RPG_CLIENT_PLANETFESAVATARDATA_GETNEXTAVATARLEVELREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0xC3F9DE0)
#define RPG_CLIENT_PLANETFESAVATARDATA_GETUPGRADELEVELCOST_OFFSET UNITYSDK_OFFSET(0xC3F9520)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_ANIMCONFIG_OFFSET UNITYSDK_OFFSET(0xC3FB550)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xC3FA4B0)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_BASEINCOMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xC3FA8F0)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_BASEINCOME_OFFSET UNITYSDK_OFFSET(0xC3FAA50)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_BODY_OFFSET UNITYSDK_OFFSET(0xC3FB530)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_CARGOICON_OFFSET UNITYSDK_OFFSET(0xC3FB570)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_CD_OFFSET UNITYSDK_OFFSET(0xC3FB5D0)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xC3FB4B0)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_EXTRAINCOME_OFFSET UNITYSDK_OFFSET(0xC3FAD00)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0xC3FB4D0)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_INCOMEPARAM_OFFSET UNITYSDK_OFFSET(0xC3FB5F0)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_ISEQUIPPED_OFFSET UNITYSDK_OFFSET(0xC3F93C0)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_ISLEVELMAX_OFFSET UNITYSDK_OFFSET(0xC3F9FD0)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_ISSTARMAX_OFFSET UNITYSDK_OFFSET(0xC3FA4F0)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xC3FB5B0)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_LANDNAME_OFFSET UNITYSDK_OFFSET(0xC3FA6C0)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_LANDTYPEICONPATH_OFFSET UNITYSDK_OFFSET(0xC3FA610)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_LANDTYPE_OFFSET UNITYSDK_OFFSET(0xC3FA6A0)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC3FA4D0)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_MIDICON_OFFSET UNITYSDK_OFFSET(0xC3FB4F0)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_MINIICON_OFFSET UNITYSDK_OFFSET(0xC3FB510)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC3FB480)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_NEXTLEVELBASEINCOME_OFFSET UNITYSDK_OFFSET(0xC3FAE30)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_NEXTLEVELEXTRAINCOME_OFFSET UNITYSDK_OFFSET(0xC3FB0E0)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_NEXTLEVELTOTALINCOME_OFFSET UNITYSDK_OFFSET(0xC3FAF40)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_NEXTLEVELTOTALINCREASEINCOME_OFFSET UNITYSDK_OFFSET(0xC3FB210)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_OWNERLAND_OFFSET UNITYSDK_OFFSET(0xC3FA770)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_PLANETTYPE_OFFSET UNITYSDK_OFFSET(0xC3FB590)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_RARITYICONPATH_OFFSET UNITYSDK_OFFSET(0xC3FA580)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_RARITYINCOMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xC3FA910)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xC3F9A20)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_ROWBASEINCOME_OFFSET UNITYSDK_OFFSET(0xC3FAA30)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_SKILL1LIST_OFFSET UNITYSDK_OFFSET(0xC3FA490)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_SKILL2LIST_OFFSET UNITYSDK_OFFSET(0xC3FA470)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_STARINCOMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xC3FA9A0)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_STAR_OFFSET UNITYSDK_OFFSET(0xC3FA570)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_TALKCOUNT_OFFSET UNITYSDK_OFFSET(0xC3FB340)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_TOTALINCOME_OFFSET UNITYSDK_OFFSET(0xC3FAB60)
#define RPG_CLIENT_PLANETFESAVATARDATA_GET_WORKLANDID_OFFSET UNITYSDK_OFFSET(0xC3FA760)
#define RPG_CLIENT_PLANETFESAVATARDATA_ISAVATARLINKACTIVE_OFFSET UNITYSDK_OFFSET(0xC3F9220)
#define RPG_CLIENT_PLANETFESAVATARDATA_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xC3FA4C0)
#define RPG_CLIENT_PLANETFESAVATARDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC3FA4E0)
#define RPG_CLIENT_PLANETFESAVATARDATA_SET_ROWBASEINCOME_OFFSET UNITYSDK_OFFSET(0xC3FAA40)
#define RPG_CLIENT_PLANETFESAVATARDATA_SET_STAR_OFFSET UNITYSDK_OFFSET(0xC3F86A0)
#define RPG_CLIENT_PLANETFESAVATARDATA_SET_WORKLANDID_OFFSET UNITYSDK_OFFSET(0xC3F8890)
#define RPG_CLIENT_PLANETFESAVATARDATA_SYNCLEVELUPGRADE_OFFSET UNITYSDK_OFFSET(0xC3F9D50)
#define RPG_CLIENT_PLANETFESAVATARDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC3F8760)
#define RPG_CLIENT_PLANETFESAVATARDATA_TRYUPGRADELEVEL_OFFSET UNITYSDK_OFFSET(0xC3F9B90)
#define RPG_CLIENT_PLANETFESAVATARDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC3F8700)
#define RPG_CLIENT_PLANETFESAVATARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC3F8600)
#define RPG_CLIENT_PLANETFESAVATARDATA__GETBUFFID_OFFSET UNITYSDK_OFFSET(0xC3FA390)
#define RPG_CLIENT_PLANETFESAVATARDATA__GETROWBASEINCOME_OFFSET UNITYSDK_OFFSET(0xC3F9EA0)
#define RPG_CLIENT_PLANETFESAVATARDATA__REFRESHBUFF_OFFSET UNITYSDK_OFFSET(0xC3FA0C0)
#define RPG_CLIENT_PLANETFESAVATARDATA__REFRESHINCOME_OFFSET UNITYSDK_OFFSET(0xC3F8910)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarData_TypeDefinitionIndex = 62206;

	class PlanetFesAvatarData : public ::System::Object
	{
	public:
		::System::Numerics::BigInteger _RowBaseIncome_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::IPlanetFesBuff*>* _AvatarBuffs; // 0x20
		::RPG::GameCore::PlanetFesAvatarRow* _Row; // 0x28
		::System::Numerics::BigInteger _NextLevelRowBaseIncome; // 0x30
		::System::UInt32 _AvatarID_k__BackingField; // 0x40
		::System::UInt32 _WorkLandID; // 0x44
		::System::UInt32 _Star; // 0x48
		::System::UInt32 _Level; // 0x4C
		::System::UInt32 _WaitUpgradeLevel; // 0x50

		::System::Void _ctor(::RPG::GameCore::PlanetFesAvatarRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesAvatarRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_704* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_704*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IPlanetFesBuff*>* GetBuffs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IPlanetFesBuff*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GETBUFFS_OFFSET))(this);
		}

		::RPG::Client::PlanetFesUnlockData* GetLockData()
		{
			return ((::RPG::Client::PlanetFesUnlockData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GETLOCKDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLinkAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GETLINKAVATARIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetBeLinkAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GETBELINKAVATARIDS_OFFSET))(this);
		}

		::System::Boolean IsAvatarLinkActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_ISAVATARLINKACTIVE_OFFSET))(this);
		}

		::System::Boolean CanUpgradeLevel(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_CANUPGRADELEVEL_OFFSET))(this, a1);
		}

		::System::Numerics::BigInteger GetUpgradeLevelCost(::System::UInt32 a1)
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GETUPGRADELEVELCOST_OFFSET))(this, a1);
		}

		::System::Void TryUpgradeLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_TRYUPGRADELEVEL_OFFSET))(this, a1);
		}

		::System::Void SyncLevelUpgrade(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_SYNCLEVELUPGRADE_OFFSET))(this, a1);
		}

		::System::UInt32 GetNextAvatarLevelRewardLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GETNEXTAVATARLEVELREWARDLEVEL_OFFSET))(this);
		}

		::System::Void _RefreshIncome()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA__REFRESHINCOME_OFFSET))(this);
		}

		::System::Numerics::BigInteger _GetRowBaseIncome(::System::UInt32 a1)
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA__GETROWBASEINCOME_OFFSET))(this, a1);
		}

		::System::Void _RefreshBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA__REFRESHBUFF_OFFSET))(this);
		}

		::System::UInt32 _GetBuffID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA__GETBUFFID_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLevelMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_ISLEVELMAX_OFFSET))(this);
		}

		::System::Boolean get_IsStarMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_ISSTARMAX_OFFSET))(this);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_STAR_OFFSET))(this);
		}

		::System::Void set_Star(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_SET_STAR_OFFSET))(this, a1);
		}

		::System::String* get_RarityIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_RARITYICONPATH_OFFSET))(this);
		}

		::System::String* get_LandTypeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_LANDTYPEICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_LandName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_LANDNAME_OFFSET))(this);
		}

		::System::UInt32 get_WorkLandID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_WORKLANDID_OFFSET))(this);
		}

		::System::Void set_WorkLandID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_SET_WORKLANDID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEquipped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_ISEQUIPPED_OFFSET))(this);
		}

		::RPG::Client::PlanetFesLandData* get_OwnerLand()
		{
			return ((::RPG::Client::PlanetFesLandData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_OWNERLAND_OFFSET))(this);
		}

		::System::UInt32 get_BaseIncomeMultiplier()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_BASEINCOMEMULTIPLIER_OFFSET))(this);
		}

		::System::UInt32 get_RarityIncomeMultiplier()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_RARITYINCOMEMULTIPLIER_OFFSET))(this);
		}

		::System::UInt32 get_StarIncomeMultiplier()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_STARINCOMEMULTIPLIER_OFFSET))(this);
		}

		::System::Numerics::BigInteger get_RowBaseIncome()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_ROWBASEINCOME_OFFSET))(this);
		}

		::System::Void set_RowBaseIncome(::System::Numerics::BigInteger a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_SET_ROWBASEINCOME_OFFSET))(this, a1);
		}

		::System::Numerics::BigInteger get_BaseIncome()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_BASEINCOME_OFFSET))(this);
		}

		::System::Numerics::BigInteger get_TotalIncome()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_TOTALINCOME_OFFSET))(this);
		}

		::System::Numerics::BigInteger get_ExtraIncome()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_EXTRAINCOME_OFFSET))(this);
		}

		::System::Numerics::BigInteger get_NextLevelBaseIncome()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_NEXTLEVELBASEINCOME_OFFSET))(this);
		}

		::System::Numerics::BigInteger get_NextLevelTotalIncome()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_NEXTLEVELTOTALINCOME_OFFSET))(this);
		}

		::System::Numerics::BigInteger get_NextLevelExtraIncome()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_NEXTLEVELEXTRAINCOME_OFFSET))(this);
		}

		::System::Numerics::BigInteger get_NextLevelTotalIncreaseIncome()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_NEXTLEVELTOTALINCREASEINCOME_OFFSET))(this);
		}

		::System::UInt32 get_TalkCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_TALKCOUNT_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesLandType get_LandType()
		{
			return ((::RPG::GameCore::PlanetFesLandType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_LANDTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::String* get_HeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_HEADICON_OFFSET))(this);
		}

		::System::String* get_MidIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_MIDICON_OFFSET))(this);
		}

		::System::String* get_MiniIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_MINIICON_OFFSET))(this);
		}

		::System::String* get_Body()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_BODY_OFFSET))(this);
		}

		::System::String* get_AnimConfig()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_ANIMCONFIG_OFFSET))(this);
		}

		::System::String* get_CargoIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_CARGOICON_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesStandType get_PlanetType()
		{
			return ((::RPG::GameCore::PlanetFesStandType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_PLANETTYPE_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_RARITY_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::UInt32 get_CD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_CD_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_Skill1List()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_SKILL1LIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_Skill2List()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_SKILL2LIST_OFFSET))(this);
		}

		::System::UInt32 get_IncomeParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARDATA_GET_INCOMEPARAM_OFFSET))(this);
		}
	};
}
