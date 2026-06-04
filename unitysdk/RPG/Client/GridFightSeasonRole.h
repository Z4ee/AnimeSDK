#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_786;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightExpiredRoleConfig; }
namespace RPG::Client { class GridFightRole; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSEASONROLE_CREATEBYROLE_OFFSET UNITYSDK_OFFSET(0xBBE1660)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_CREATE_OFFSET UNITYSDK_OFFSET(0xBBF33E0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_EQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xBBF3230)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0xBBF3300)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_EXPIREDFRONTBACKTYPE_OFFSET UNITYSDK_OFFSET(0xBBF2AA0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_EXPIREDRARITY_OFFSET UNITYSDK_OFFSET(0xBBF2B10)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_FRONTBACKTYPE_OFFSET UNITYSDK_OFFSET(0xBBF29D0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xBBF2BF0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ID_OFFSET UNITYSDK_OFFSET(0xBBF2E70)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISBOTHEXISTED_OFFSET UNITYSDK_OFFSET(0xBBF2550)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISDELETED_OFFSET UNITYSDK_OFFSET(0xBBF24D0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISEXPERT_OFFSET UNITYSDK_OFFSET(0xBBF31B0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISEXPIREDWITHOUTEXPERT_OFFSET UNITYSDK_OFFSET(0xBBF2310)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xBBF2460)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xBBF25B0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISPOSEXPIRED_OFFSET UNITYSDK_OFFSET(0xBBF2370)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISPRESENTCHANGED_OFFSET UNITYSDK_OFFSET(0xBBF2610)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISRARITYCHANGED_OFFSET UNITYSDK_OFFSET(0xBBF2380)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISTRAILAVATAR_OFFSET UNITYSDK_OFFSET(0xBBF3030)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISUPGRADEAVATAR_OFFSET UNITYSDK_OFFSET(0xBBF30C0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_MINIROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xBBF2C70)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0xBBF2EE0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xBBF2FC0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xBBF2D70)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0xBBF3150)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xBBF2CF0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_SHOPICONPATH_OFFSET UNITYSDK_OFFSET(0xBBF2B70)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_STAR_OFFSET UNITYSDK_OFFSET(0xBBF2E00)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_UID_OFFSET UNITYSDK_OFFSET(0xBBF2E20)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_MARKUSEEXPIRED_OFFSET UNITYSDK_OFFSET(0xBBE1870)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_SETPOSINDEX_OFFSET UNITYSDK_OFFSET(0xBBF3710)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_SETTRAIL_OFFSET UNITYSDK_OFFSET(0xBBF3770)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_SETUPGRADE_OFFSET UNITYSDK_OFFSET(0xBBF37C0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_SET_EQUIPS_OFFSET UNITYSDK_OFFSET(0xBBF3390)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_SET_STAR_OFFSET UNITYSDK_OFFSET(0xBBF2E10)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE__CTOR_OFFSET UNITYSDK_OFFSET(0xBBF36C0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE__ISPOSEXPIRED_OFFSET UNITYSDK_OFFSET(0xBBF2770)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonRole_TypeDefinitionIndex = 60910;

	class GridFightSeasonRole : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _Equips; // 0x10
		::RPG::Client::GridFightExpiredRoleConfig* ExpiredConfig; // 0x18
		::RPG::Client::GridFightRole* Role; // 0x20
		::System::Nullable_1<::System::UInt32> _PosIndex; // 0x28
		::System::Boolean _markUseExpired; // 0x30
		::System::Boolean _IsUpgradeAvatar; // 0x31
		::System::Boolean _IsTrailAvatar; // 0x32
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

		::System::Void set_Star(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_SET_STAR_OFFSET))(this, a1);
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

		::Class_0_16E4307DCC419505_786* get_RoleConfig()
		{
			return ((::Class_0_16E4307DCC419505_786*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ROLECONFIG_OFFSET))(this);
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

		::System::Void set_Equips(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_SET_EQUIPS_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightSeasonRole* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a4)
		{
			return ((::RPG::Client::GridFightSeasonRole*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::GridFightSeasonRole* CreateByRole(::RPG::Client::GridFightRole* a1, ::System::Nullable_1<::System::UInt32> a2)
		{
			return ((::RPG::Client::GridFightSeasonRole*(*)(::RPG::Client::GridFightRole*, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_CREATEBYROLE_OFFSET))(a1, a2);
		}

		::System::Void SetPosIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_SETPOSINDEX_OFFSET))(this, a1);
		}

		::System::Void SetTrail(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_SETTRAIL_OFFSET))(this, a1);
		}

		::System::Void SetUpgrade(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_SETUPGRADE_OFFSET))(this, a1);
		}

		::System::Void MarkUseExpired(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_MARKUSEEXPIRED_OFFSET))(this, a1);
		}

		::System::Boolean _IsPosExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE__ISPOSEXPIRED_OFFSET))(this);
		}
	};
}
