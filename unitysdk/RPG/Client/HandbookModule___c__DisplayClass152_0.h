#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS152_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5F8E70)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS152_0__GOTOTOGUIDEROGUETOURNENTRANCE_B__0_OFFSET UNITYSDK_OFFSET(0xA5FB820)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c__DisplayClass152_0_TypeDefinitionIndex = 60431;

	class HandbookModule___c__DisplayClass152_0 : public ::System::Object
	{
	public:
		::System::UInt32 blockID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS152_0__CTOR_OFFSET))(this);
		}

		::System::Void _GotoToGuideRogueTournEntrance_b__0(::System::Boolean isAutoShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS152_0__GOTOTOGUIDEROGUETOURNENTRANCE_B__0_OFFSET))(this, isAutoShow);
		}
	};
}
