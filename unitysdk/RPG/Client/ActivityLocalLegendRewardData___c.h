#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityLocalLegendRewardGroup; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB19C280)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB19C2C0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA___C__HASUNTAKENREWARD_B__1_0_OFFSET UNITYSDK_OFFSET(0xB19C2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendRewardData___c_TypeDefinitionIndex = 57564;

	class ActivityLocalLegendRewardData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityLocalLegendRewardData___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityLocalLegendRewardData___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendRewardData___c_TypeDefinitionIndex)->GetStaticField(0x56A90);
		}
		static ::System::Func_2<::RPG::Client::ActivityLocalLegendRewardGroup*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityLocalLegendRewardGroup*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendRewardData___c_TypeDefinitionIndex)->GetStaticField(0x56A98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasUntakenReward_b__1_0(::RPG::Client::ActivityLocalLegendRewardGroup* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityLocalLegendRewardGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA___C__HASUNTAKENREWARD_B__1_0_OFFSET))(this, a1);
		}
	};
}
