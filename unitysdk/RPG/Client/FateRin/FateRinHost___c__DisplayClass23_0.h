#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5A6200)
#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_0__TRYBACKTOMAINPAGEANDPLAYEASTEREGGPERFORMANCE_B__0_OFFSET UNITYSDK_OFFSET(0x1B5A8170)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int FateRinHost___c__DisplayClass23_0_TypeDefinitionIndex = 79203;

	class FateRinHost___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::UInt32 contentID; // 0x10
		::System::UInt32 performanceID; // 0x14
		::System::UInt32 entranceID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryBackToMainPageAndPlayEasterEggPerformance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_0__TRYBACKTOMAINPAGEANDPLAYEASTEREGGPERFORMANCE_B__0_OFFSET))(this);
		}
	};
}
