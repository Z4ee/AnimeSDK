#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5A6CA0)
#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS30_0__PLAYEASTEREGGPERFORMANCE_B__0_OFFSET UNITYSDK_OFFSET(0x1B5A8420)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int FateRinHost___c__DisplayClass30_0_TypeDefinitionIndex = 79205;

	class FateRinHost___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::String* customString; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayEasterEggPerformance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS30_0__PLAYEASTEREGGPERFORMANCE_B__0_OFFSET))(this);
		}
	};
}
