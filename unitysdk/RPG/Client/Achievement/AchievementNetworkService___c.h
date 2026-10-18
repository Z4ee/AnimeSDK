#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8A9AD8EF89A86498_2;
namespace RPG::Client::Achievement { class AchievementTakeRewardResultViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3A8B30)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC3A8B70)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE___C__SENDTAKEACHIEVEMENTREWARDCSREQANDBUILDRESULT_B__3_0_OFFSET UNITYSDK_OFFSET(0xC3A8B80)

namespace RPG::Client::Achievement
{
	inline static constexpr unsigned int AchievementNetworkService___c_TypeDefinitionIndex = 82114;

	class AchievementNetworkService___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Achievement::AchievementNetworkService___c** StaticGet___9()
		{
			return (::RPG::Client::Achievement::AchievementNetworkService___c**)Il2CppClass::FromTypeDefinitionIndex(AchievementNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x10710);
		}
		static ::System::Func_2<::Class_1_8A9AD8EF89A86498_2*, ::RPG::Client::Achievement::AchievementTakeRewardResultViewModel*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::Class_1_8A9AD8EF89A86498_2*, ::RPG::Client::Achievement::AchievementTakeRewardResultViewModel*>**)Il2CppClass::FromTypeDefinitionIndex(AchievementNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x10718);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::Achievement::AchievementTakeRewardResultViewModel* _SendTakeAchievementRewardCsReqAndBuildResult_b__3_0(::Class_1_8A9AD8EF89A86498_2* a1)
		{
			return ((::RPG::Client::Achievement::AchievementTakeRewardResultViewModel*(*)(::PVOID, ::Class_1_8A9AD8EF89A86498_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE___C__SENDTAKEACHIEVEMENTREWARDCSREQANDBUILDRESULT_B__3_0_OFFSET))(this, a1);
		}
	};
}
