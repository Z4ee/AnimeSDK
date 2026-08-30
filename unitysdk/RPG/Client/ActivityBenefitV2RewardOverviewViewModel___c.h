#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD2EF60)
#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD2EFA0)
#define RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL___C___CTOR_B__26_0_OFFSET UNITYSDK_OFFSET(0x1AD2EFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitV2RewardOverviewViewModel___c_TypeDefinitionIndex = 61509;

	class ActivityBenefitV2RewardOverviewViewModel___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityBenefitV2RewardOverviewViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityBenefitV2RewardOverviewViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityBenefitV2RewardOverviewViewModel___c_TypeDefinitionIndex)->GetStaticField(0x62B60);
		}
		static ::System::Func_2<::RPG::Client::ItemDisplayData*, ::System::UInt32>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::RPG::Client::ItemDisplayData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityBenefitV2RewardOverviewViewModel___c_TypeDefinitionIndex)->GetStaticField(0x62B68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __ctor_b__26_0(::RPG::Client::ItemDisplayData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2REWARDOVERVIEWVIEWMODEL___C___CTOR_B__26_0_OFFSET))(this, a1);
		}
	};
}
