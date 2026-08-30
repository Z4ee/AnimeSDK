#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGPERFORMANCEDIALOGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC895E00)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingPerformanceDialogViewModel_TypeDefinitionIndex = 80716;

	class B51RacingPerformanceDialogViewModel : public ::System::Object
	{
	public:
		::System::UInt32 TeamID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGPERFORMANCEDIALOGVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
