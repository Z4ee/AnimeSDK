#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A38A480)
#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_0__TRYBACKTOMAINPAGEANDPLAYEASTEREGGPERFORMANCE_B__0_OFFSET UNITYSDK_OFFSET(0x1A38BFA0)
#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_0__TRYBACKTOMAINPAGEANDPLAYEASTEREGGPERFORMANCE_B__1_OFFSET UNITYSDK_OFFSET(0x1A38C120)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int FateRinHost___c__DisplayClass23_0_TypeDefinitionIndex = 75571;

	class FateRinHost___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::System::UInt32 performanceID; // 0x18
		::System::UInt32 contentID; // 0x1C
		::System::UInt32 entranceID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryBackToMainPageAndPlayEasterEggPerformance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_0__TRYBACKTOMAINPAGEANDPLAYEASTEREGGPERFORMANCE_B__0_OFFSET))(this);
		}

		::System::Void _TryBackToMainPageAndPlayEasterEggPerformance_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_0__TRYBACKTOMAINPAGEANDPLAYEASTEREGGPERFORMANCE_B__1_OFFSET))(this);
		}
	};
}
