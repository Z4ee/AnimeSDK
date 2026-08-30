#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6045926B515B7744.h"
#include "unitysdk/RPG/GameCore/RedDotType.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_1327;
class Class_1_F512C5C8F4EF9039;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::Client::RedDot
{
	inline static constexpr unsigned int RedDotState_1_TypeDefinitionIndex = 78688;

	template <typename TInstanceKey>
	class RedDotState_1 : public ::Class_1_6045926B515B7744
	{
	public:
		::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::RedDotType> NoInstanceKey; // 0x0
		::System::Collections::Generic::Dictionary_2<TInstanceKey, ::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::RedDotType>>* InstanceKeys; // 0x0
	};
}
