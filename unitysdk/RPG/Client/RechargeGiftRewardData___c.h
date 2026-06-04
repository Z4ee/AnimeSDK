#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1CBA230307F9C289_47_Class_1_534EF681CC2FBEA4_3_Enum_3_07AC48868F739A46_1.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_47;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_RECHARGEGIFTREWARDDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC6BE120)
#define RPG_CLIENT_RECHARGEGIFTREWARDDATA___C__CREATEREWARDSDATA_B__9_0_OFFSET UNITYSDK_OFFSET(0xC6BE160)
#define RPG_CLIENT_RECHARGEGIFTREWARDDATA___C__CREATEREWARDSDATA_B__9_1_OFFSET UNITYSDK_OFFSET(0xC6BE180)
#define RPG_CLIENT_RECHARGEGIFTREWARDDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC6BE150)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeGiftRewardData___c_TypeDefinitionIndex = 62444;

	class RechargeGiftRewardData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_1CBA230307F9C289_47*, ::System::UInt32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Class_1_1CBA230307F9C289_47*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RechargeGiftRewardData___c_TypeDefinitionIndex)->GetStaticField(0x293A0);
		}
		static ::RPG::Client::RechargeGiftRewardData___c** StaticGet___9()
		{
			return (::RPG::Client::RechargeGiftRewardData___c**)Il2CppClass::FromTypeDefinitionIndex(RechargeGiftRewardData___c_TypeDefinitionIndex)->GetStaticField(0x293A8);
		}
		static ::System::Func_2<::Class_1_1CBA230307F9C289_47*, ::Class_1_1CBA230307F9C289_47_Class_1_534EF681CC2FBEA4_3_Enum_3_07AC48868F739A46_1>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::Class_1_1CBA230307F9C289_47*, ::Class_1_1CBA230307F9C289_47_Class_1_534EF681CC2FBEA4_3_Enum_3_07AC48868F739A46_1>**)Il2CppClass::FromTypeDefinitionIndex(RechargeGiftRewardData___c_TypeDefinitionIndex)->GetStaticField(0x293B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTREWARDDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTREWARDDATA___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _CreateRewardsData_b__9_0(::Class_1_1CBA230307F9C289_47* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_1CBA230307F9C289_47*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTREWARDDATA___C__CREATEREWARDSDATA_B__9_0_OFFSET))(this, a1);
		}

		::Class_1_1CBA230307F9C289_47_Class_1_534EF681CC2FBEA4_3_Enum_3_07AC48868F739A46_1 _CreateRewardsData_b__9_1(::Class_1_1CBA230307F9C289_47* a1)
		{
			return ((::Class_1_1CBA230307F9C289_47_Class_1_534EF681CC2FBEA4_3_Enum_3_07AC48868F739A46_1(*)(::PVOID, ::Class_1_1CBA230307F9C289_47*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTREWARDDATA___C__CREATEREWARDSDATA_B__9_1_OFFSET))(this, a1);
		}
	};
}
