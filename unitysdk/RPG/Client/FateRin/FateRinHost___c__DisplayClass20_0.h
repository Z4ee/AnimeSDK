#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5A5FA0)
#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS20_0__TRANSFERANDAUTOSHOWMAINPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x1B5A7F80)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int FateRinHost___c__DisplayClass20_0_TypeDefinitionIndex = 79202;

	class FateRinHost___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::UInt32 contentID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _TransferAndAutoShowMainPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS20_0__TRANSFERANDAUTOSHOWMAINPAGE_B__0_OFFSET))(this);
		}
	};
}
