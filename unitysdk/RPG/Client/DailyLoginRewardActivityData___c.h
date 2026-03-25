#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DailyLoginRewardActivityData_RewardStatus.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_DAILYLOGINREWARDACTIVITYDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9442C20)
#define RPG_CLIENT_DAILYLOGINREWARDACTIVITYDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9442C50)
#define RPG_CLIENT_DAILYLOGINREWARDACTIVITYDATA___C__ISSHOWNORMALREDDOT_B__3_0_OFFSET UNITYSDK_OFFSET(0x9442C60)

namespace RPG::Client
{
	inline static constexpr unsigned int DailyLoginRewardActivityData___c_TypeDefinitionIndex = 49983;

	class DailyLoginRewardActivityData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::DailyLoginRewardActivityData_RewardStatus, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::DailyLoginRewardActivityData_RewardStatus, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DailyLoginRewardActivityData___c_TypeDefinitionIndex)->GetStaticField(0x44380);
		}
		static ::RPG::Client::DailyLoginRewardActivityData___c** StaticGet___9()
		{
			return (::RPG::Client::DailyLoginRewardActivityData___c**)Il2CppClass::FromTypeDefinitionIndex(DailyLoginRewardActivityData___c_TypeDefinitionIndex)->GetStaticField(0x44388);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DAILYLOGINREWARDACTIVITYDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DAILYLOGINREWARDACTIVITYDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsShowNormalRedDot_b__3_0(::RPG::Client::DailyLoginRewardActivityData_RewardStatus x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DailyLoginRewardActivityData_RewardStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_DAILYLOGINREWARDACTIVITYDATA___C__ISSHOWNORMALREDDOT_B__3_0_OFFSET))(this, x);
		}
	};
}
