#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0DC36C832589E4AF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_REDDOT_FINALITYBATTLEENTRANCEREDDOTFILTER_GETSUBKEYS_OFFSET UNITYSDK_OFFSET(0xC3F7E50)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_REDDOT_FINALITYBATTLEENTRANCEREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xC3F7E40)

namespace RPG::Client::ActivityFinalityBattle::RedDot
{
	inline static constexpr unsigned int FinalityBattleEntranceRedDotFilter_TypeDefinitionIndex = 82084;

	class FinalityBattleEntranceRedDotFilter : public ::System::Object
	{
	public:
		::Class_1_0DC36C832589E4AF* _RedDotService; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_REDDOT_FINALITYBATTLEENTRANCEREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSubKeys()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_REDDOT_FINALITYBATTLEENTRANCEREDDOTFILTER_GETSUBKEYS_OFFSET))(this);
		}
	};
}
