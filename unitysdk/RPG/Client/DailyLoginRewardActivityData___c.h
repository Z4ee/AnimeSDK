#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityLoginData_RewardStatus.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_DAILYLOGINREWARDACTIVITYDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCC94400)
#define RPG_CLIENT_DAILYLOGINREWARDACTIVITYDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCC94440)
#define RPG_CLIENT_DAILYLOGINREWARDACTIVITYDATA___C__ISSHOWNORMALREDDOT_B__2_0_OFFSET UNITYSDK_OFFSET(0xCC94450)

namespace RPG::Client
{
	inline static constexpr unsigned int DailyLoginRewardActivityData___c_TypeDefinitionIndex = 61702;

	class DailyLoginRewardActivityData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::DailyLoginRewardActivityData___c** StaticGet___9()
		{
			return (::RPG::Client::DailyLoginRewardActivityData___c**)Il2CppClass::FromTypeDefinitionIndex(DailyLoginRewardActivityData___c_TypeDefinitionIndex)->GetStaticField(0x5BE30);
		}
		static ::System::Func_2<::RPG::Client::ActivityLoginData_RewardStatus, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityLoginData_RewardStatus, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DailyLoginRewardActivityData___c_TypeDefinitionIndex)->GetStaticField(0x5BE38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DAILYLOGINREWARDACTIVITYDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DAILYLOGINREWARDACTIVITYDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsShowNormalRedDot_b__2_0(::RPG::Client::ActivityLoginData_RewardStatus a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityLoginData_RewardStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_DAILYLOGINREWARDACTIVITYDATA___C__ISSHOWNORMALREDDOT_B__2_0_OFFSET))(this, a1);
		}
	};
}
