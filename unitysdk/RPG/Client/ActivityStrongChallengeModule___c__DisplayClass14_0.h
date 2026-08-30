#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityStrongChallengeStageData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B87F880)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C__DISPLAYCLASS14_0___HANDLEBATTLEENDSCNOTIFY_B__0_OFFSET UNITYSDK_OFFSET(0x1B880970)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStrongChallengeModule___c__DisplayClass14_0_TypeDefinitionIndex = 61996;

	class ActivityStrongChallengeModule___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Func_2<::RPG::Client::ActivityStrongChallengeStageData*, ::System::Boolean>* __9__0; // 0x10
		::RPG::Client::ActivityStrongChallengeStageData* stageData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __HandleBattleEndScNotify_b__0(::RPG::Client::ActivityStrongChallengeStageData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityStrongChallengeStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C__DISPLAYCLASS14_0___HANDLEBATTLEENDSCNOTIFY_B__0_OFFSET))(this, a1);
		}
	};
}
