#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightShopGood.h"
#include "unitysdk/RPG/Client/GridFightShopGoodType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"

class Class_1_AFF793D84545D8B5;
class Class_1_D17272E82AE804C2_435;
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD324E10)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_GOODTYPE_OFFSET UNITYSDK_OFFSET(0xD325730)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_ID_OFFSET UNITYSDK_OFFSET(0xD324BE0)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0xD324D50)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_OWNED_OFFSET UNITYSDK_OFFSET(0xD325060)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_PRESETTYPE_OFFSET UNITYSDK_OFFSET(0xD325600)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_PROJECTION_OFFSET UNITYSDK_OFFSET(0xD324C30)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xD324CC0)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0xD324C40)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0xD325520)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0xD324E70)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xD324910)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopProjection_TypeDefinitionIndex = 65301;

	class GridFightShopProjection : public ::RPG::Client::GridFightShopGood
	{
	public:
		::Class_1_D17272E82AE804C2_435* _ProtoGoodsProjection; // 0x20
		::RPG::Client::GridFightProjection* _Projection_k__BackingField; // 0x28

		::System::Void _ctor(::Class_1_AFF793D84545D8B5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AFF793D84545D8B5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_ID_OFFSET))(this);
		}

		::RPG::Client::GridFightProjection* get_Projection()
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_PROJECTION_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleConfig* get_RoleConfig()
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_ROLECONFIG_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_RARITY_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::GridFightTraitConfig*>* get_Traits()
		{
			return ((::Il2CppArray<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_TRAITS_OFFSET))(this);
		}

		::System::Boolean get_Owned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_OWNED_OFFSET))(this);
		}

		::System::String* get_ShopIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_SHOPICON_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPreset get_PresetType()
		{
			return ((::RPG::GameCore::GridFightPreset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_PRESETTYPE_OFFSET))(this);
		}

		::RPG::Client::GridFightShopGoodType get_GoodType()
		{
			return ((::RPG::Client::GridFightShopGoodType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_GOODTYPE_OFFSET))(this);
		}
	};
}
