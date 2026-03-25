#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_352A8B3482C80E7D_42_Class_1_534EF681CC2FBEA4_2_Enum_3_07AC48868F739A46_1.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_42;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_RECHARGEGIFTREWARDDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA2897F0)
#define RPG_CLIENT_RECHARGEGIFTREWARDDATA___C__CREATEREWARDSDATA_B__9_0_OFFSET UNITYSDK_OFFSET(0xA289830)
#define RPG_CLIENT_RECHARGEGIFTREWARDDATA___C__CREATEREWARDSDATA_B__9_1_OFFSET UNITYSDK_OFFSET(0xA289850)
#define RPG_CLIENT_RECHARGEGIFTREWARDDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA289820)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeGiftRewardData___c_TypeDefinitionIndex = 54348;

	class RechargeGiftRewardData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RechargeGiftRewardData___c** StaticGet___9()
		{
			return (::RPG::Client::RechargeGiftRewardData___c**)Il2CppClass::FromTypeDefinitionIndex(RechargeGiftRewardData___c_TypeDefinitionIndex)->GetStaticField(0x12110);
		}
		static ::System::Func_2<::Class_1_352A8B3482C80E7D_42*, ::System::UInt32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Class_1_352A8B3482C80E7D_42*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RechargeGiftRewardData___c_TypeDefinitionIndex)->GetStaticField(0x12118);
		}
		static ::System::Func_2<::Class_1_352A8B3482C80E7D_42*, ::Class_1_352A8B3482C80E7D_42_Class_1_534EF681CC2FBEA4_2_Enum_3_07AC48868F739A46_1>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::Class_1_352A8B3482C80E7D_42*, ::Class_1_352A8B3482C80E7D_42_Class_1_534EF681CC2FBEA4_2_Enum_3_07AC48868F739A46_1>**)Il2CppClass::FromTypeDefinitionIndex(RechargeGiftRewardData___c_TypeDefinitionIndex)->GetStaticField(0x12120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTREWARDDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTREWARDDATA___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _CreateRewardsData_b__9_0(::Class_1_352A8B3482C80E7D_42* status)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_352A8B3482C80E7D_42*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTREWARDDATA___C__CREATEREWARDSDATA_B__9_0_OFFSET))(this, status);
		}

		::Class_1_352A8B3482C80E7D_42_Class_1_534EF681CC2FBEA4_2_Enum_3_07AC48868F739A46_1 _CreateRewardsData_b__9_1(::Class_1_352A8B3482C80E7D_42* status)
		{
			return ((::Class_1_352A8B3482C80E7D_42_Class_1_534EF681CC2FBEA4_2_Enum_3_07AC48868F739A46_1(*)(::PVOID, ::Class_1_352A8B3482C80E7D_42*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTREWARDDATA___C__CREATEREWARDSDATA_B__9_1_OFFSET))(this, status);
		}
	};
}
