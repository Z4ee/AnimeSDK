#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS54_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16A0A800)
#define RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS54_1__TRANSFEROPENMODESELECTPAGE_B__1_OFFSET UNITYSDK_OFFSET(0x16A0A810)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournUtils___c__DisplayClass54_1_TypeDefinitionIndex = 67818;

	class RogueTournUtils___c__DisplayClass54_1 : public ::System::Object
	{
	public:
		::System::Boolean isAutoShow; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS54_1__CTOR_OFFSET))(this);
		}

		::System::Void _TransferOpenModeSelectPage_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS54_1__TRANSFEROPENMODESELECTPAGE_B__1_OFFSET))(this);
		}
	};
}
