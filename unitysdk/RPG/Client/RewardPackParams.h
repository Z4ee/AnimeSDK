#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_REWARDPACKPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xB01B5B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RewardPackParams_TypeDefinitionIndex = 55463;

	class RewardPackParams : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* itemCounts; // 0x10
		::System::UInt32 retcode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDPACKPARAMS__CTOR_OFFSET))(this);
		}
	};
}
