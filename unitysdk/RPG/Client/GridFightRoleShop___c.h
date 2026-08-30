#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_436;
namespace RPG::Client { class GridFightShopGood; }
namespace RPG::Client { class GridFightShopRole; }
namespace RPG::Client { class GridFightShopSpecialGood; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD309600)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD309640)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET_UNSOLDSHOPGOODS_B__35_0_OFFSET UNITYSDK_OFFSET(0xD309710)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPROLES_B__93_0_OFFSET UNITYSDK_OFFSET(0xD309790)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPROLES_B__93_1_OFFSET UNITYSDK_OFFSET(0xD309800)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPSPECIAL_B__95_0_OFFSET UNITYSDK_OFFSET(0xD309870)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPSPECIAL_B__95_1_OFFSET UNITYSDK_OFFSET(0xD3098E0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__SYNC_B__9_0_OFFSET UNITYSDK_OFFSET(0xD309650)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__TRYBUYROLE_B__14_1_OFFSET UNITYSDK_OFFSET(0xD309690)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__TRYBUYROLE_B__14_2_OFFSET UNITYSDK_OFFSET(0xD3096F0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__UPDATE_B__10_0_OFFSET UNITYSDK_OFFSET(0xD309670)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop___c_TypeDefinitionIndex = 65289;

	class GridFightRoleShop___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightShopRole*, ::System::Int64>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopRole*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x45320);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>** StaticGet___9__95_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x45328);
		}
		static ::RPG::Client::GridFightRoleShop___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightRoleShop___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x45330);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_436*, ::System::UInt32>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_436*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x45338);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::RPG::Client::GridFightShopRole*>** StaticGet___9__93_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::RPG::Client::GridFightShopRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x45340);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x45348);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_436*, ::System::UInt32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_436*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x45350);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopRole*, ::System::UInt32>** StaticGet___9__14_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x45358);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::RPG::Client::GridFightShopSpecialGood*>** StaticGet___9__95_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::RPG::Client::GridFightShopSpecialGood*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x45360);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>** StaticGet___9__93_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x45368);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _Sync_b__9_0(::Class_1_D17272E82AE804C2_436* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_D17272E82AE804C2_436*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__SYNC_B__9_0_OFFSET))(this, a1);
		}

		::System::UInt32 _Update_b__10_0(::Class_1_D17272E82AE804C2_436* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_D17272E82AE804C2_436*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__UPDATE_B__10_0_OFFSET))(this, a1);
		}

		::System::Int64 _TryBuyRole_b__14_1(::RPG::Client::GridFightShopRole* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::GridFightShopRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__TRYBUYROLE_B__14_1_OFFSET))(this, a1);
		}

		::System::UInt32 _TryBuyRole_b__14_2(::RPG::Client::GridFightShopRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightShopRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__TRYBUYROLE_B__14_2_OFFSET))(this, a1);
		}

		::System::Boolean _get_UnsoldShopGoods_b__35_0(::RPG::Client::GridFightShopGood* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET_UNSOLDSHOPGOODS_B__35_0_OFFSET))(this, a1);
		}

		::System::Boolean _get__ShopRoles_b__93_0(::RPG::Client::GridFightShopGood* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPROLES_B__93_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightShopRole* _get__ShopRoles_b__93_1(::RPG::Client::GridFightShopGood* a1)
		{
			return ((::RPG::Client::GridFightShopRole*(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPROLES_B__93_1_OFFSET))(this, a1);
		}

		::System::Boolean _get__ShopSpecial_b__95_0(::RPG::Client::GridFightShopGood* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPSPECIAL_B__95_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightShopSpecialGood* _get__ShopSpecial_b__95_1(::RPG::Client::GridFightShopGood* a1)
		{
			return ((::RPG::Client::GridFightShopSpecialGood*(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPSPECIAL_B__95_1_OFFSET))(this, a1);
		}
	};
}
