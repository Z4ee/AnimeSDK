#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_640;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightExpiredRoleConfig; }
namespace RPG::Client { class GridFightRole; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSEASONROLE_CREATEBYROLE_OFFSET UNITYSDK_OFFSET(0x98A20C0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_CREATE_OFFSET UNITYSDK_OFFSET(0x98A1DF0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_EQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0x98A1C30)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0x98A1D00)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_EXPIREDFRONTBACKTYPE_OFFSET UNITYSDK_OFFSET(0x98A14A0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_EXPIREDRARITY_OFFSET UNITYSDK_OFFSET(0x98A1510)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_FRONTBACKTYPE_OFFSET UNITYSDK_OFFSET(0x98A1410)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x98A15F0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ID_OFFSET UNITYSDK_OFFSET(0x98A1860)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISBOTHEXISTED_OFFSET UNITYSDK_OFFSET(0x98A0FA0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISDELETED_OFFSET UNITYSDK_OFFSET(0x98A0F20)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISEXPERT_OFFSET UNITYSDK_OFFSET(0x98A1BB0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISEXPIREDWITHOUTEXPERT_OFFSET UNITYSDK_OFFSET(0x98A0D10)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x98A0E60)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x98A1000)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISPOSEXPIRED_OFFSET UNITYSDK_OFFSET(0x98A0D70)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISPRESENTCHANGED_OFFSET UNITYSDK_OFFSET(0x98A1060)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISRARITYCHANGED_OFFSET UNITYSDK_OFFSET(0x98A0D80)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISTRAILAVATAR_OFFSET UNITYSDK_OFFSET(0x98A1A30)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISUPGRADEAVATAR_OFFSET UNITYSDK_OFFSET(0x98A1AC0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_MINIROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x98A1670)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0x98A18D0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0x98A19C0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x98A1770)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0x98A1B50)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x98A16F0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_SHOPICONPATH_OFFSET UNITYSDK_OFFSET(0x98A1570)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_STAR_OFFSET UNITYSDK_OFFSET(0x98A17F0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_UID_OFFSET UNITYSDK_OFFSET(0x98A1810)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_MARKUSEEXPIRED_OFFSET UNITYSDK_OFFSET(0x98A2350)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_SETPOSINDEX_OFFSET UNITYSDK_OFFSET(0x98A2250)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_SETTRAIL_OFFSET UNITYSDK_OFFSET(0x98A22B0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_SETUPGRADE_OFFSET UNITYSDK_OFFSET(0x98A2300)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_SET_EQUIPS_OFFSET UNITYSDK_OFFSET(0x98A1DA0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_SET_STAR_OFFSET UNITYSDK_OFFSET(0x98A1800)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE__CTOR_OFFSET UNITYSDK_OFFSET(0x98A2070)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE__ISPOSEXPIRED_OFFSET UNITYSDK_OFFSET(0x98A1140)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonRole_TypeDefinitionIndex = 52898;

	class GridFightSeasonRole : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* Role; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _Equips; // 0x18
		::RPG::Client::GridFightExpiredRoleConfig* ExpiredConfig; // 0x20
		::System::Nullable_1<::System::UInt32> _PosIndex; // 0x28
		::System::Boolean _markUseExpired; // 0x30
		::System::Boolean _IsTrailAvatar; // 0x31
		::System::Boolean _IsUpgradeAvatar; // 0x32
		::System::UInt32 _Star_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsExpiredWithoutExpert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISEXPIREDWITHOUTEXPERT_OFFSET))(this);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISEXPIRED_OFFSET))(this);
		}

		::System::Boolean get_IsDeleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISDELETED_OFFSET))(this);
		}

		::System::Boolean get_IsBothExisted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISBOTHEXISTED_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISNEW_OFFSET))(this);
		}

		::System::Boolean get_IsRarityChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISRARITYCHANGED_OFFSET))(this);
		}

		::System::Boolean get_IsPresentChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISPRESENTCHANGED_OFFSET))(this);
		}

		::System::Boolean get_IsPosExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISPOSEXPIRED_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPreset get_FrontBackType()
		{
			return ((::RPG::GameCore::GridFightPreset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_FRONTBACKTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPreset get_ExpiredFrontBackType()
		{
			return ((::RPG::GameCore::GridFightPreset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_EXPIREDFRONTBACKTYPE_OFFSET))(this);
		}

		::System::UInt32 get_ExpiredRarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_EXPIREDRARITY_OFFSET))(this);
		}

		::System::String* get_ShopIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_SHOPICONPATH_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_MiniRoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_MINIROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_RARITY_OFFSET))(this);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_STAR_OFFSET))(this);
		}

		::System::Void set_Star(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_SET_STAR_OFFSET))(this, value);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_UID_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::UInt32 get_PosIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_POSINDEX_OFFSET))(this);
		}

		::System::Boolean get_IsTrailAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISTRAILAVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsUpgradeAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISUPGRADEAVATAR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_640* get_RoleConfig()
		{
			return ((::Class_0_16E4307DCC419505_640*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ROLECONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsExpert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISEXPERT_OFFSET))(this);
		}

		::System::Int32 get_EquipCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_EQUIPCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_Equips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_EQUIPS_OFFSET))(this);
		}

		::System::Void set_Equips(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_SET_EQUIPS_OFFSET))(this, value);
		}

		static ::RPG::Client::GridFightSeasonRole* Create(::System::UInt32 id, ::System::UInt32 seasonUID, ::System::UInt32 star, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* equipIDs)
		{
			return ((::RPG::Client::GridFightSeasonRole*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_CREATE_OFFSET))(id, seasonUID, star, equipIDs);
		}

		static ::RPG::Client::GridFightSeasonRole* CreateByRole(::RPG::Client::GridFightRole* role, ::System::Nullable_1<::System::UInt32> seasonUID)
		{
			return ((::RPG::Client::GridFightSeasonRole*(*)(::RPG::Client::GridFightRole*, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_CREATEBYROLE_OFFSET))(role, seasonUID);
		}

		::System::Void SetPosIndex(::System::UInt32 PosIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_SETPOSINDEX_OFFSET))(this, PosIndex);
		}

		::System::Void SetTrail(::System::Boolean isTrail)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_SETTRAIL_OFFSET))(this, isTrail);
		}

		::System::Void SetUpgrade(::System::Boolean isUpgrade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_SETUPGRADE_OFFSET))(this, isUpgrade);
		}

		::System::Void MarkUseExpired(::System::Boolean expired)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_MARKUSEEXPIRED_OFFSET))(this, expired);
		}

		::System::Boolean _IsPosExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE__ISPOSEXPIRED_OFFSET))(this);
		}
	};
}
