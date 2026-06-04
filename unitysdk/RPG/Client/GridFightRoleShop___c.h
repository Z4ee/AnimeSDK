#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_379;
namespace RPG::Client { class GridFightShopGood; }
namespace RPG::Client { class GridFightShopRole; }
namespace RPG::Client { class GridFightShopSpecialGood; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBBE8A00)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBBE8A40)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET_UNSOLDSHOPROLES_B__31_0_OFFSET UNITYSDK_OFFSET(0xBBE8B10)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPROLES_B__87_0_OFFSET UNITYSDK_OFFSET(0xBBE8BC0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPROLES_B__87_1_OFFSET UNITYSDK_OFFSET(0xBBE8C30)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPSPECIAL_B__89_0_OFFSET UNITYSDK_OFFSET(0xBBE8CA0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPSPECIAL_B__89_1_OFFSET UNITYSDK_OFFSET(0xBBE8D10)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__SYNC_B__9_0_OFFSET UNITYSDK_OFFSET(0xBBE8A50)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__TRYBUYROLE_B__14_1_OFFSET UNITYSDK_OFFSET(0xBBE8A90)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__TRYBUYROLE_B__14_2_OFFSET UNITYSDK_OFFSET(0xBBE8AF0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__UPDATE_B__10_0_OFFSET UNITYSDK_OFFSET(0xBBE8A70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop___c_TypeDefinitionIndex = 60990;

	class GridFightRoleShop___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_D17272E82AE804C2_379*, ::System::UInt32>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_379*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x367C0);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopRole*, ::System::UInt32>** StaticGet___9__14_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x367C8);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>** StaticGet___9__89_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x367D0);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>** StaticGet___9__87_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x367D8);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_379*, ::System::UInt32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_379*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x367E0);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x367E8);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopRole*, ::System::Int64>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopRole*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x367F0);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::RPG::Client::GridFightShopRole*>** StaticGet___9__87_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::RPG::Client::GridFightShopRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x367F8);
		}
		static ::RPG::Client::GridFightRoleShop___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightRoleShop___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x36800);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::RPG::Client::GridFightShopSpecialGood*>** StaticGet___9__89_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::RPG::Client::GridFightShopSpecialGood*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x36808);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _Sync_b__9_0(::Class_1_D17272E82AE804C2_379* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_D17272E82AE804C2_379*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__SYNC_B__9_0_OFFSET))(this, a1);
		}

		::System::UInt32 _Update_b__10_0(::Class_1_D17272E82AE804C2_379* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_D17272E82AE804C2_379*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__UPDATE_B__10_0_OFFSET))(this, a1);
		}

		::System::Int64 _TryBuyRole_b__14_1(::RPG::Client::GridFightShopRole* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::GridFightShopRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__TRYBUYROLE_B__14_1_OFFSET))(this, a1);
		}

		::System::UInt32 _TryBuyRole_b__14_2(::RPG::Client::GridFightShopRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightShopRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__TRYBUYROLE_B__14_2_OFFSET))(this, a1);
		}

		::System::Boolean _get_UnsoldShopRoles_b__31_0(::RPG::Client::GridFightShopGood* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET_UNSOLDSHOPROLES_B__31_0_OFFSET))(this, a1);
		}

		::System::Boolean _get__ShopRoles_b__87_0(::RPG::Client::GridFightShopGood* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPROLES_B__87_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightShopRole* _get__ShopRoles_b__87_1(::RPG::Client::GridFightShopGood* a1)
		{
			return ((::RPG::Client::GridFightShopRole*(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPROLES_B__87_1_OFFSET))(this, a1);
		}

		::System::Boolean _get__ShopSpecial_b__89_0(::RPG::Client::GridFightShopGood* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPSPECIAL_B__89_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightShopSpecialGood* _get__ShopSpecial_b__89_1(::RPG::Client::GridFightShopGood* a1)
		{
			return ((::RPG::Client::GridFightShopSpecialGood*(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPSPECIAL_B__89_1_OFFSET))(this, a1);
		}
	};
}
