#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_79B49C00C46243B4;
namespace RPG::Client::Achievement { class AchievementTakeRewardResultViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABB6250)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABB6290)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE___C__SENDTAKEACHIEVEMENTREWARDCSREQANDBUILDRESULT_B__3_0_OFFSET UNITYSDK_OFFSET(0x1ABB62A0)

namespace RPG::Client::Achievement
{
	inline static constexpr unsigned int AchievementNetworkService___c_TypeDefinitionIndex = 80733;

	class AchievementNetworkService___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_79B49C00C46243B4*, ::RPG::Client::Achievement::AchievementTakeRewardResultViewModel*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::Class_1_79B49C00C46243B4*, ::RPG::Client::Achievement::AchievementTakeRewardResultViewModel*>**)Il2CppClass::FromTypeDefinitionIndex(AchievementNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x612B0);
		}
		static ::RPG::Client::Achievement::AchievementNetworkService___c** StaticGet___9()
		{
			return (::RPG::Client::Achievement::AchievementNetworkService___c**)Il2CppClass::FromTypeDefinitionIndex(AchievementNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x612B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::Achievement::AchievementTakeRewardResultViewModel* _SendTakeAchievementRewardCsReqAndBuildResult_b__3_0(::Class_1_79B49C00C46243B4* a1)
		{
			return ((::RPG::Client::Achievement::AchievementTakeRewardResultViewModel*(*)(::PVOID, ::Class_1_79B49C00C46243B4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE___C__SENDTAKEACHIEVEMENTREWARDCSREQANDBUILDRESULT_B__3_0_OFFSET))(this, a1);
		}
	};
}
