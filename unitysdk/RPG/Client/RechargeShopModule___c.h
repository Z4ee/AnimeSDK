#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_AED1B98FD9AB0418_1;
namespace RPG::Client { class RechargeGiftData; }
namespace RPG::Client { class RechargeGiftRewardData; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T1, typename T2> class __f__AnonymousType2_2;

#define RPG_CLIENT_RECHARGESHOPMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF7C010)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAF7C040)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__GETSHOPGIFTSBYSHOPID_B__36_0_OFFSET UNITYSDK_OFFSET(0xAF7C1E0)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__GETSHOPGIFTSBYSHOPID_B__36_1_OFFSET UNITYSDK_OFFSET(0xAF7C1F0)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTISGIFTREWARDING_B__4_0_OFFSET UNITYSDK_OFFSET(0xAF7C160)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTVISITREWARDINGGIFTPACKS_B__2_0_OFFSET UNITYSDK_OFFSET(0xAF7C050)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTVISITREWARDINGGIFTPACKS_B__2_1_OFFSET UNITYSDK_OFFSET(0xAF7C080)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTVISITREWARDINGGIFTPACKS_B__2_2_OFFSET UNITYSDK_OFFSET(0xAF7C0B0)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTVISITREWARDINGGIFTPACKS_B__2_3_OFFSET UNITYSDK_OFFSET(0xAF7C110)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTVISITREWARDINGGIFTPACKS_B__2_4_OFFSET UNITYSDK_OFFSET(0xAF7C140)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__REQUESTDATA_B__24_0_OFFSET UNITYSDK_OFFSET(0xAF7C180)
#define RPG_CLIENT_RECHARGESHOPMODULE___C___ONGETRECHARGEGIFTINFOSCRSP_B__31_0_OFFSET UNITYSDK_OFFSET(0xAF7C1C0)
#define RPG_CLIENT_RECHARGESHOPMODULE___C___REQUESTDATA_B__26_1_OFFSET UNITYSDK_OFFSET(0xAF7C1B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeShopModule___c_TypeDefinitionIndex = 61513;

	class RechargeShopModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*>, ::System::UInt32>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x132A0);
		}
		static ::System::Func_2<::RPG::Client::RechargeGiftData*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::RechargeGiftRewardData*>*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::Client::RechargeGiftData*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::RechargeGiftRewardData*>*>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x132A8);
		}
		static ::System::Func_2<::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>*, ::RPG::Client::RechargeGiftRewardData*>** StaticGet___9__2_4()
		{
			return (::System::Func_2<::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>*, ::RPG::Client::RechargeGiftRewardData*>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x132B0);
		}
		static ::System::Func_3<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*, ::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>*>** StaticGet___9__2_2()
		{
			return (::System::Func_3<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*, ::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>*>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x132B8);
		}
		static ::System::Func_2<::RPG::Client::RechargeGiftData*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::RechargeGiftData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x132C0);
		}
		static ::System::Func_2<::Class_1_AED1B98FD9AB0418_1*, ::System::UInt32>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::Class_1_AED1B98FD9AB0418_1*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x132C8);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x132D0);
		}
		static ::System::Func_2<::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>*, ::System::Boolean>** StaticGet___9__2_3()
		{
			return (::System::Func_2<::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x132D8);
		}
		static ::RPG::Client::RechargeShopModule___c** StaticGet___9()
		{
			return (::RPG::Client::RechargeShopModule___c**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x132E0);
		}
		static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__26_1()
		{
			return (::System::Func_2<::System::Boolean, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x132E8);
		}
		static ::System::Func_2<::RPG::Client::RechargeGiftRewardData*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::RechargeGiftRewardData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x132F0);
		}
		static ::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*>, ::RPG::Client::RechargeGiftData*>** StaticGet___9__36_1()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*>, ::RPG::Client::RechargeGiftData*>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopModule___c_TypeDefinitionIndex)->GetStaticField(0x132F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _ReddotVisitRewardingGiftPacks_b__2_0(::RPG::Client::RechargeGiftData* gift)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RechargeGiftData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTVISITREWARDINGGIFTPACKS_B__2_0_OFFSET))(this, gift);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::RechargeGiftRewardData*>* _ReddotVisitRewardingGiftPacks_b__2_1(::RPG::Client::RechargeGiftData* gift)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::RechargeGiftRewardData*>*(*)(::PVOID, ::RPG::Client::RechargeGiftData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTVISITREWARDINGGIFTPACKS_B__2_1_OFFSET))(this, gift);
		}

		::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>* _ReddotVisitRewardingGiftPacks_b__2_2(::RPG::Client::RechargeGiftData* gift, ::RPG::Client::RechargeGiftRewardData* rewardData)
		{
			return ((::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>*(*)(::PVOID, ::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTVISITREWARDINGGIFTPACKS_B__2_2_OFFSET))(this, gift, rewardData);
		}

		::System::Boolean _ReddotVisitRewardingGiftPacks_b__2_3(::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>* __h__TransparentIdentifier0)
		{
			return ((::System::Boolean(*)(::PVOID, ::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTVISITREWARDINGGIFTPACKS_B__2_3_OFFSET))(this, __h__TransparentIdentifier0);
		}

		::RPG::Client::RechargeGiftRewardData* _ReddotVisitRewardingGiftPacks_b__2_4(::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>* __h__TransparentIdentifier0)
		{
			return ((::RPG::Client::RechargeGiftRewardData*(*)(::PVOID, ::__f__AnonymousType2_2<::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftRewardData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTVISITREWARDINGGIFTPACKS_B__2_4_OFFSET))(this, __h__TransparentIdentifier0);
		}

		::System::Boolean _ReddotIsGiftRewarding_b__4_0(::RPG::Client::RechargeGiftRewardData* rewardData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RechargeGiftRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__REDDOTISGIFTREWARDING_B__4_0_OFFSET))(this, rewardData);
		}

		::System::Void _RequestData_b__24_0(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__REQUESTDATA_B__24_0_OFFSET))(this, success);
		}

		::System::Boolean __RequestData_b__26_1(::System::Boolean x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C___REQUESTDATA_B__26_1_OFFSET))(this, x);
		}

		::System::UInt32 __OnGetRechargeGiftInfoScRsp_b__31_0(::Class_1_AED1B98FD9AB0418_1* data)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_AED1B98FD9AB0418_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C___ONGETRECHARGEGIFTINFOSCRSP_B__31_0_OFFSET))(this, data);
		}

		::System::UInt32 _GetShopGiftsByShopID_b__36_0(::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*> x)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__GETSHOPGIFTSBYSHOPID_B__36_0_OFFSET))(this, x);
		}

		::RPG::Client::RechargeGiftData* _GetShopGiftsByShopID_b__36_1(::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*> x)
		{
			return ((::RPG::Client::RechargeGiftData*(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::RPG::Client::RechargeGiftData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__GETSHOPGIFTSBYSHOPID_B__36_1_OFFSET))(this, x);
		}
	};
}
