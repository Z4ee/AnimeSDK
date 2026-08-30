#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS152_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD3AEF40)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS152_1__GOTOTOGUIDEROGUETOURNENTRANCE_B__1_OFFSET UNITYSDK_OFFSET(0xD3AEF50)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c__DisplayClass152_1_TypeDefinitionIndex = 65696;

	class HandbookModule___c__DisplayClass152_1 : public ::System::Object
	{
	public:
		::System::Boolean isAutoShow; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS152_1__CTOR_OFFSET))(this);
		}

		::System::Void _GotoToGuideRogueTournEntrance_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS152_1__GOTOTOGUIDEROGUETOURNENTRANCE_B__1_OFFSET))(this);
		}
	};
}
