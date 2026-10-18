#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_EF89D87B2C044B50_1;
namespace RPG::Client { class RechargeGiftData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_RECHARGESHOPMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDE4F4D0)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDE4F500)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__GETSHOPGIFTSBYSHOPID_B__37_0_OFFSET UNITYSDK_OFFSET(0xDE4F570)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__GETSHOPGIFTSBYSHOPID_B__37_1_OFFSET UNITYSDK_OFFSET(0xDE4F580)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__REQUESTDATA_B__24_0_OFFSET UNITYSDK_OFFSET(0xDE4F510)
#define RPG_CLIENT_RECHARGESHOPMODULE___C___ONGETRECHARGEGIFTINFOSCRSP_B__32_0_OFFSET UNITYSDK_OFFSET(0xDE4F550)
#define RPG_CLIENT_RECHARGESHOPMODULE___C___REQUESTDATA_B__26_1_OFFSET UNITYSDK_OFFSET(0xDE4F540)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeShopModule___c_TypeDefinitionIndex = 66798;

	class RechargeShopModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*>, ::System::UInt32>** StaticGet___9__37_0()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x5B580);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x5B588);
		}
		static ::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*>, ::RPG::Client::RechargeGiftData*>** StaticGet___9__37_1()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*>, ::RPG::Client::RechargeGiftData*>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x5B590);
		}
		static ::System::Func_2<::Class_1_EF89D87B2C044B50_1*, ::System::UInt32>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::Class_1_EF89D87B2C044B50_1*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x5B598);
		}
		static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__26_1()
		{
			return (::System::Func_2<::System::Boolean, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x5B5A0);
		}
		static ::RPG::Client::RechargeShopModule___c** StaticGet___9()
		{
			return (::RPG::Client::RechargeShopModule___c**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x5B5A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Void _RequestData_b__24_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__REQUESTDATA_B__24_0_OFFSET))(this, a1);
		}

		::System::Boolean __RequestData_b__26_1(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C___REQUESTDATA_B__26_1_OFFSET))(this, a1);
		}

		::System::UInt32 __OnGetRechargeGiftInfoScRsp_b__32_0(::Class_1_EF89D87B2C044B50_1* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_EF89D87B2C044B50_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C___ONGETRECHARGEGIFTINFOSCRSP_B__32_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetShopGiftsByShopID_b__37_0(::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__GETSHOPGIFTSBYSHOPID_B__37_0_OFFSET))(this, a1);
		}

		::RPG::Client::RechargeGiftData* _GetShopGiftsByShopID_b__37_1(::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*> a1)
		{
			return ((::RPG::Client::RechargeGiftData*(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__GETSHOPGIFTSBYSHOPID_B__37_1_OFFSET))(this, a1);
		}
	};
}
