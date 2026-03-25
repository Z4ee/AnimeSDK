#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS153_0__CTOR_OFFSET UNITYSDK_OFFSET(0x990E1A0)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS153_0__GOTOTOGUIDEROGUETOURNENTRANCE_B__0_OFFSET UNITYSDK_OFFSET(0x9910B90)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c__DisplayClass153_0_TypeDefinitionIndex = 53298;

	class HandbookModule___c__DisplayClass153_0 : public ::System::Object
	{
	public:
		::System::UInt32 blockID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS153_0__CTOR_OFFSET))(this);
		}

		::System::Void _GotoToGuideRogueTournEntrance_b__0(::System::Boolean isAutoShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS153_0__GOTOTOGUIDEROGUETOURNENTRANCE_B__0_OFFSET))(this, isAutoShow);
		}
	};
}
