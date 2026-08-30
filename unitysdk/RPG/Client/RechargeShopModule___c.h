#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_EF89D87B2C044B50_1;
namespace RPG::Client { class RechargeGiftData; }
namespace RPG::Client { class RechargeGiftRewardData; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T1, typename T2> class __f__AnonymousType2_2;

#define RPG_CLIENT_RECHARGESHOPMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B64C910)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B64C940)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__GETSHOPGIFTSBYSHOPID_B__36_0_OFFSET UNITYSDK_OFFSET(0x1B64CB60)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__GETSHOPGIFTSBYSHOPID_B__36_1_OFFSET UNITYSDK_OFFSET(0x1B64CB70)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTISGIFTREWARDING_B__4_0_OFFSET UNITYSDK_OFFSET(0x1B64CAE0)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTVISITREWARDINGGIFTPACKS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1B64C950)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTVISITREWARDINGGIFTPACKS_B__2_1_OFFSET UNITYSDK_OFFSET(0x1B64C980)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTVISITREWARDINGGIFTPACKS_B__2_2_OFFSET UNITYSDK_OFFSET(0x1B64CA30)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTVISITREWARDINGGIFTPACKS_B__2_3_OFFSET UNITYSDK_OFFSET(0x1B64CA90)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTVISITREWARDINGGIFTPACKS_B__2_4_OFFSET UNITYSDK_OFFSET(0x1B64CAC0)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__REQUESTDATA_B__24_0_OFFSET UNITYSDK_OFFSET(0x1B64CB00)
#define RPG_CLIENT_RECHARGESHOPMODULE___C___ONGETRECHARGEGIFTINFOSCRSP_B__31_0_OFFSET UNITYSDK_OFFSET(0x1B64CB40)
#define RPG_CLIENT_RECHARGESHOPMODULE___C___REQUESTDATA_B__26_1_OFFSET UNITYSDK_OFFSET(0x1B64CB30)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeShopModule___c_TypeDefinitionIndex = 66797;

	class RechargeShopModule___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x663E0);
		}
		static ::System::Func_2<::RPG::Client::RechargeGiftData*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::RechargeGiftData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x663E8);
		}
		static ::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*>, ::System::UInt32>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x663F0);
		}
		static ::System::Func_2<::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>*, ::RPG::Client::RechargeGiftRewardData*>** StaticGet___9__2_4()
		{
			return (::System::Func_2<::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>*, ::RPG::Client::RechargeGiftRewardData*>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x663F8);
		}
		static ::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*>, ::RPG::Client::RechargeGiftData*>** StaticGet___9__36_1()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*>, ::RPG::Client::RechargeGiftData*>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x66400);
		}
		static ::System::Func_2<::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>*, ::System::Boolean>** StaticGet___9__2_3()
		{
			return (::System::Func_2<::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x66408);
		}
		static ::System::Func_2<::RPG::Client::RechargeGiftData*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::RechargeGiftRewardData*>*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::Client::RechargeGiftData*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::RechargeGiftRewardData*>*>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x66410);
		}
		static ::System::Func_2<::RPG::Client::RechargeGiftRewardData*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::RechargeGiftRewardData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x66418);
		}
		static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__26_1()
		{
			return (::System::Func_2<::System::Boolean, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x66420);
		}
		static ::System::Func_3<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*, ::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>*>** StaticGet___9__2_2()
		{
			return (::System::Func_3<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*, ::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>*>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x66428);
		}
		static ::System::Func_2<::Class_1_EF89D87B2C044B50_1*, ::System::UInt32>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::Class_1_EF89D87B2C044B50_1*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x66430);
		}
		static ::RPG::Client::RechargeShopModule___c** StaticGet___9()
		{
			return (::RPG::Client::RechargeShopModule___c**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x66438);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _ReddotVisitRewardingGiftPacks_b__2_0(::RPG::Client::RechargeGiftData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RechargeGiftData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTVISITREWARDINGGIFTPACKS_B__2_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::RechargeGiftRewardData*>* _ReddotVisitRewardingGiftPacks_b__2_1(::RPG::Client::RechargeGiftData* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::RechargeGiftRewardData*>*(*)(::PVOID, ::RPG::Client::RechargeGiftData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTVISITREWARDINGGIFTPACKS_B__2_1_OFFSET))(this, a1);
		}

		::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>* _ReddotVisitRewardingGiftPacks_b__2_2(::RPG::Client::RechargeGiftData* a1, ::RPG::Client::RechargeGiftRewardData* a2)
		{
			return ((::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>*(*)(::PVOID, ::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTVISITREWARDINGGIFTPACKS_B__2_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean _ReddotVisitRewardingGiftPacks_b__2_3(::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTVISITREWARDINGGIFTPACKS_B__2_3_OFFSET))(this, a1);
		}

		::RPG::Client::RechargeGiftRewardData* _ReddotVisitRewardingGiftPacks_b__2_4(::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>* a1)
		{
			return ((::RPG::Client::RechargeGiftRewardData*(*)(::PVOID, ::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTVISITREWARDINGGIFTPACKS_B__2_4_OFFSET))(this, a1);
		}

		::System::Boolean _ReddotIsGiftRewarding_b__4_0(::RPG::Client::RechargeGiftRewardData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RechargeGiftRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTISGIFTREWARDING_B__4_0_OFFSET))(this, a1);
		}

		::System::Void _RequestData_b__24_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__REQUESTDATA_B__24_0_OFFSET))(this, a1);
		}

		::System::Boolean __RequestData_b__26_1(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C___REQUESTDATA_B__26_1_OFFSET))(this, a1);
		}

		::System::UInt32 __OnGetRechargeGiftInfoScRsp_b__31_0(::Class_1_EF89D87B2C044B50_1* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_EF89D87B2C044B50_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C___ONGETRECHARGEGIFTINFOSCRSP_B__31_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetShopGiftsByShopID_b__36_0(::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__GETSHOPGIFTSBYSHOPID_B__36_0_OFFSET))(this, a1);
		}

		::RPG::Client::RechargeGiftData* _GetShopGiftsByShopID_b__36_1(::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*> a1)
		{
			return ((::RPG::Client::RechargeGiftData*(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__GETSHOPGIFTSBYSHOPID_B__36_1_OFFSET))(this, a1);
		}
	};
}
