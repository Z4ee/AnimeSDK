#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class RogueTournWeekChallengeData_ObjectLevelSegmentedList_1___c; }
namespace System { template <typename T> class Comparison_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournWeekChallengeData_ObjectLevelSegmentedList_1___c_TypeDefinitionIndex = 64873;

	template <typename T>
	class RogueTournWeekChallengeData_ObjectLevelSegmentedList_1___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournWeekChallengeData_ObjectLevelSegmentedList_1___c<T>** StaticGet___9()
		{
			return (::RPG::Client::RogueTournWeekChallengeData_ObjectLevelSegmentedList_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournWeekChallengeData_ObjectLevelSegmentedList_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, T>>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, T>>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournWeekChallengeData_ObjectLevelSegmentedList_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
