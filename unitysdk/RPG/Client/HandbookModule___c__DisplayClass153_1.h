#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS153_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9910CC0)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS153_1__GOTOTOGUIDEROGUETOURNENTRANCE_B__1_OFFSET UNITYSDK_OFFSET(0x9910CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c__DisplayClass153_1_TypeDefinitionIndex = 53299;

	class HandbookModule___c__DisplayClass153_1 : public ::System::Object
	{
	public:
		::System::Boolean isAutoShow; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS153_1__CTOR_OFFSET))(this);
		}

		::System::Void _GotoToGuideRogueTournEntrance_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS153_1__GOTOTOGUIDEROGUETOURNENTRANCE_B__1_OFFSET))(this);
		}
	};
}
