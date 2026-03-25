#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_357;
namespace RPG::Client { class GridFightShopGood; }
namespace RPG::Client { class GridFightShopRole; }
namespace RPG::Client { class GridFightShopSpecialGood; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9898AC0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9898B00)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET_UNSOLDSHOPROLES_B__30_0_OFFSET UNITYSDK_OFFSET(0x9898BD0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPROLES_B__78_0_OFFSET UNITYSDK_OFFSET(0x9898C30)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPROLES_B__78_1_OFFSET UNITYSDK_OFFSET(0x9898CA0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPSPECIAL_B__80_0_OFFSET UNITYSDK_OFFSET(0x9898D10)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPSPECIAL_B__80_1_OFFSET UNITYSDK_OFFSET(0x9898D80)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__SYNC_B__8_0_OFFSET UNITYSDK_OFFSET(0x9898B10)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__TRYBUYROLE_B__13_1_OFFSET UNITYSDK_OFFSET(0x9898B50)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__TRYBUYROLE_B__13_2_OFFSET UNITYSDK_OFFSET(0x9898BB0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__UPDATE_B__9_0_OFFSET UNITYSDK_OFFSET(0x9898B30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop___c_TypeDefinitionIndex = 52967;

	class GridFightRoleShop___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightShopRole*, ::System::Int64>** StaticGet___9__13_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopRole*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x19020);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x19028);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::RPG::Client::GridFightShopRole*>** StaticGet___9__78_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::RPG::Client::GridFightShopRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x19030);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::RPG::Client::GridFightShopSpecialGood*>** StaticGet___9__80_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::RPG::Client::GridFightShopSpecialGood*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x19038);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopRole*, ::System::UInt32>** StaticGet___9__13_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x19040);
		}
		static ::System::Func_2<::Class_1_FA4F4A67B1C04320_357*, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::Class_1_FA4F4A67B1C04320_357*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x19048);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>** StaticGet___9__80_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x19050);
		}
		static ::RPG::Client::GridFightRoleShop___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightRoleShop___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x19058);
		}
		static ::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>** StaticGet___9__78_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightShopGood*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x19060);
		}
		static ::System::Func_2<::Class_1_FA4F4A67B1C04320_357*, ::System::UInt32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Class_1_FA4F4A67B1C04320_357*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleShop___c_TypeDefinitionIndex)->GetStaticField(0x19068);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _Sync_b__8_0(::Class_1_FA4F4A67B1C04320_357* weight)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_357*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__SYNC_B__8_0_OFFSET))(this, weight);
		}

		::System::UInt32 _Update_b__9_0(::Class_1_FA4F4A67B1C04320_357* weight)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_357*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__UPDATE_B__9_0_OFFSET))(this, weight);
		}

		::System::Int64 _TryBuyRole_b__13_1(::RPG::Client::GridFightShopRole* role)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::GridFightShopRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__TRYBUYROLE_B__13_1_OFFSET))(this, role);
		}

		::System::UInt32 _TryBuyRole_b__13_2(::RPG::Client::GridFightShopRole* role)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightShopRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__TRYBUYROLE_B__13_2_OFFSET))(this, role);
		}

		::System::Boolean _get_UnsoldShopRoles_b__30_0(::RPG::Client::GridFightShopGood* role)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET_UNSOLDSHOPROLES_B__30_0_OFFSET))(this, role);
		}

		::System::Boolean _get__ShopRoles_b__78_0(::RPG::Client::GridFightShopGood* good)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPROLES_B__78_0_OFFSET))(this, good);
		}

		::RPG::Client::GridFightShopRole* _get__ShopRoles_b__78_1(::RPG::Client::GridFightShopGood* good)
		{
			return ((::RPG::Client::GridFightShopRole*(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPROLES_B__78_1_OFFSET))(this, good);
		}

		::System::Boolean _get__ShopSpecial_b__80_0(::RPG::Client::GridFightShopGood* good)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPSPECIAL_B__80_0_OFFSET))(this, good);
		}

		::RPG::Client::GridFightShopSpecialGood* _get__ShopSpecial_b__80_1(::RPG::Client::GridFightShopGood* good)
		{
			return ((::RPG::Client::GridFightShopSpecialGood*(*)(::PVOID, ::RPG::Client::GridFightShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__GET__SHOPSPECIAL_B__80_1_OFFSET))(this, good);
		}
	};
}
