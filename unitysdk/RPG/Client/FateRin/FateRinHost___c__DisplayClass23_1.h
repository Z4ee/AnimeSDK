#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin { class FateRinHost___c__DisplayClass23_0; }

#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD0070F0)
#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_1__TRYBACKTOMAINPAGEANDPLAYEASTEREGGPERFORMANCE_B__1_OFFSET UNITYSDK_OFFSET(0xD007100)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int FateRinHost___c__DisplayClass23_1_TypeDefinitionIndex = 79205;

	class FateRinHost___c__DisplayClass23_1 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::FateRinHost___c__DisplayClass23_0* CS___8__locals1; // 0x10
		::System::UInt32 expectedContentID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_1__CTOR_OFFSET))(this);
		}

		::System::Void _TryBackToMainPageAndPlayEasterEggPerformance_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS23_1__TRYBACKTOMAINPAGEANDPLAYEASTEREGGPERFORMANCE_B__1_OFFSET))(this);
		}
	};
}
