#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_366;
namespace RPG::Client { class GridFightShopGood; }
namespace RPG::Client { class GridFightShopRole; }
namespace RPG::Client { class GridFightShopSpecialGood; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA579FB0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA579FF0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET_UNSOLDSHOPROLES_B__31_0_OFFSET UNITYSDK_OFFSET(0xA57A0C0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPROLES_B__83_0_OFFSET UNITYSDK_OFFSET(0xA57A120)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPROLES_B__83_1_OFFSET UNITYSDK_OFFSET(0xA57A190)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPSPECIAL_B__85_0_OFFSET UNITYSDK_OFFSET(0xA57A200)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPSPECIAL_B__85_1_OFFSET UNITYSDK_OFFSET(0xA57A270)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__SYNC_B__9_0_OFFSET UNITYSDK_OFFSET(0xA57A000)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__TRYBUYROLE_B__14_1_OFFSET UNITYSDK_OFFSET(0xA57A040)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__TRYBUYROLE_B__14_2_OFFSET UNITYSDK_OFFSET(0xA57A0A0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__UPDATE_B__10_0_OFFSET UNITYSDK_OFFSET(0xA57A020)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop___c_TypeDefinitionIndex = 60055;

	class GridFightRoleShop___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightRoleShop___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightRoleShop___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x18230);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::RPG::Client::GridFightShopSpecialGood*>** StaticGet___9__85_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::RPG::Client::GridFightShopSpecialGood*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x18238);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopRole*, ::System::Int64>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopRole*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x18240);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>** StaticGet___9__83_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x18248);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_366*, ::System::UInt32>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_366*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x18250);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopRole*, ::System::UInt32>** StaticGet___9__14_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x18258);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x18260);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_366*, ::System::UInt32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_366*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x18268);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>** StaticGet___9__85_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x18270);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::RPG::Client::GridFightShopRole*>** StaticGet___9__83_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::RPG::Client::GridFightShopRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x18278);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _Sync_b__9_0(::Class_1_D17272E82AE804C2_366* weight)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_D17272E82AE804C2_366*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__SYNC_B__9_0_OFFSET))(this, weight);
		}

		::System::UInt32 _Update_b__10_0(::Class_1_D17272E82AE804C2_366* weight)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_D17272E82AE804C2_366*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__UPDATE_B__10_0_OFFSET))(this, weight);
		}

		::System::Int64 _TryBuyRole_b__14_1(::RPG::Client::GridFightShopRole* role)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::GridFightShopRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__TRYBUYROLE_B__14_1_OFFSET))(this, role);
		}

		::System::UInt32 _TryBuyRole_b__14_2(::RPG::Client::GridFightShopRole* role)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightShopRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__TRYBUYROLE_B__14_2_OFFSET))(this, role);
		}

		::System::Boolean _get_UnsoldShopRoles_b__31_0(::RPG::Client::GridFightShopGood* role)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET_UNSOLDSHOPROLES_B__31_0_OFFSET))(this, role);
		}

		::System::Boolean _get__ShopRoles_b__83_0(::RPG::Client::GridFightShopGood* good)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPROLES_B__83_0_OFFSET))(this, good);
		}

		::RPG::Client::GridFightShopRole* _get__ShopRoles_b__83_1(::RPG::Client::GridFightShopGood* good)
		{
			return ((::RPG::Client::GridFightShopRole*(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPROLES_B__83_1_OFFSET))(this, good);
		}

		::System::Boolean _get__ShopSpecial_b__85_0(::RPG::Client::GridFightShopGood* good)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPSPECIAL_B__85_0_OFFSET))(this, good);
		}

		::RPG::Client::GridFightShopSpecialGood* _get__ShopSpecial_b__85_1(::RPG::Client::GridFightShopGood* good)
		{
			return ((::RPG::Client::GridFightShopSpecialGood*(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPSPECIAL_B__85_1_OFFSET))(this, good);
		}
	};
}
