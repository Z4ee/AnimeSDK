#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_RAIDBATTLESCORINGRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xC6A7F40)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidBattleScoringResult_TypeDefinitionIndex = 62423;

	class RaidBattleScoringResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* AllScoringItem; // 0x10
		::System::UInt32 TotalScore; // 0x18
		::System::Boolean IsNewRecord; // 0x1C
		::System::UInt32 RaidID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDBATTLESCORINGRESULT__CTOR_OFFSET))(this);
		}
	};
}
