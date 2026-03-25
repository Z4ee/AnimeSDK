#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightShopGood.h"
#include "unitysdk/RPG/Client/GridFightShopGoodType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"

class Class_1_D2924896099E0408;
class Class_1_FA4F4A67B1C04320_355;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x98ADDB0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_GOODTYPE_OFFSET UNITYSDK_OFFSET(0x98AEB20)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ID_OFFSET UNITYSDK_OFFSET(0x98ADDF0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISMULTIRECOMMEND_OFFSET UNITYSDK_OFFSET(0x98AE1D0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0x98ADF00)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISREFERENCED_OFFSET UNITYSDK_OFFSET(0x98ADF60)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISTRAITTRACKED_OFFSET UNITYSDK_OFFSET(0x98AE070)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISTRIAL_OFFSET UNITYSDK_OFFSET(0x98AE230)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_OWNED_OFFSET UNITYSDK_OFFSET(0x98AE5F0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_PRESETTYPE_OFFSET UNITYSDK_OFFSET(0x98AE890)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x98ADE90)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0x98AE990)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x98ADDD0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0x98AE830)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_SHOPROLENAME_OFFSET UNITYSDK_OFFSET(0x98AE900)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_STAR_OFFSET UNITYSDK_OFFSET(0x98ADE40)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0x98AE9B0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_UPGRADABLE_OFFSET UNITYSDK_OFFSET(0x98AE290)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_UPLEVEL_OFFSET UNITYSDK_OFFSET(0x98AE470)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_WILLLEVELUP_OFFSET UNITYSDK_OFFSET(0x98AE2F0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_SET_ROLE_OFFSET UNITYSDK_OFFSET(0x98ADDE0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE__CTOR_OFFSET UNITYSDK_OFFSET(0x98AD930)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE___IFIXBASEPROXY_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0x98AEB30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopRole_TypeDefinitionIndex = 52975;

	class GridFightShopRole : public ::RPG::Client::GridFightShopGood
	{
	public:
		::Class_1_FA4F4A67B1C04320_355* _GoodsRole; // 0x20
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x28

		::System::Void _ctor(::Class_1_D2924896099E0408* goods)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D2924896099E0408*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE__CTOR_OFFSET))(this, goods);
		}

		::RPG::Client::IAvatarInfoProvider* get_AvatarData()
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_AVATARDATA_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ROLE_OFFSET))(this);
		}

		::System::Void set_Role(::RPG::Client::GridFightRole* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_SET_ROLE_OFFSET))(this, value);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_STAR_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_RARITY_OFFSET))(this);
		}

		::System::Boolean get_IsRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISRECOMMEND_OFFSET))(this);
		}

		::System::Boolean get_IsReferenced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISREFERENCED_OFFSET))(this);
		}

		::System::Boolean get_IsTraitTracked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISTRAITTRACKED_OFFSET))(this);
		}

		::System::Boolean get_IsMultiRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISMULTIRECOMMEND_OFFSET))(this);
		}

		::System::Boolean get_IsTrial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISTRIAL_OFFSET))(this);
		}

		::System::Boolean get_Upgradable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_UPGRADABLE_OFFSET))(this);
		}

		::System::Boolean get_WillLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_WILLLEVELUP_OFFSET))(this);
		}

		::System::UInt32 get_UpLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_UPLEVEL_OFFSET))(this);
		}

		::System::Boolean get_Owned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_OWNED_OFFSET))(this);
		}

		::System::String* get_ShopIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_SHOPICON_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPreset get_PresetType()
		{
			return ((::RPG::GameCore::GridFightPreset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_PRESETTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_ShopRoleName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_SHOPROLENAME_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleConfig* get_RoleConfig()
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ROLECONFIG_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::GridFightTraitConfig*>* get_Traits()
		{
			return ((::Il2CppArray<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_TRAITS_OFFSET))(this);
		}

		::RPG::Client::GridFightShopGoodType get_GoodType()
		{
			return ((::RPG::Client::GridFightShopGoodType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_GOODTYPE_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_get_ShopIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE___IFIXBASEPROXY_GET_SHOPICON_OFFSET))(this);
		}
	};
}
