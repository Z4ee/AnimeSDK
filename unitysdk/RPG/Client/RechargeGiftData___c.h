#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RechargeGiftRewardData; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_RECHARGEGIFTDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19858890)
#define RPG_CLIENT_RECHARGEGIFTDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x198588C0)
#define RPG_CLIENT_RECHARGEGIFTDATA___C__GET_STATUS_B__22_0_OFFSET UNITYSDK_OFFSET(0x198588D0)
#define RPG_CLIENT_RECHARGEGIFTDATA___C__GET_STATUS_B__22_1_OFFSET UNITYSDK_OFFSET(0x198588F0)
#define RPG_CLIENT_RECHARGEGIFTDATA___C___CTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x19858910)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeGiftData___c_TypeDefinitionIndex = 63807;

	class RechargeGiftData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*>, ::System::Boolean>** StaticGet___9__22_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RechargeGiftData___c_TypeDefinitionIndex)->GetStaticField(0x1BAB0);
		}
		static ::RPG::Client::RechargeGiftData___c** StaticGet___9()
		{
			return (::RPG::Client::RechargeGiftData___c**)Il2CppClass::FromTypeDefinitionIndex(RechargeGiftData___c_TypeDefinitionIndex)->GetStaticField(0x1BAB8);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*>, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RechargeGiftData___c_TypeDefinitionIndex)->GetStaticField(0x1BAC0);
		}
		static ::System::Func_2<::RPG::Client::RechargeGiftRewardData*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ItemConfig*>*>** StaticGet___9__48_0()
		{
			return (::System::Func_2<::RPG::Client::RechargeGiftRewardData*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ItemConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(RechargeGiftData___c_TypeDefinitionIndex)->GetStaticField(0x1BAC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_Status_b__22_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA___C__GET_STATUS_B__22_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_Status_b__22_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA___C__GET_STATUS_B__22_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ItemConfig*>* __ctor_b__48_0(::RPG::Client::RechargeGiftRewardData* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::RPG::Client::RechargeGiftRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA___C___CTOR_B__48_0_OFFSET))(this, a1);
		}
	};
}
