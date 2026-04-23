#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_1__APPLYROGUETOURNBUILDREF_B__4_OFFSET UNITYSDK_OFFSET(0xB0E84C0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB0DCB50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c__DisplayClass61_1_TypeDefinitionIndex = 62497;

	class RogueTournModule___c__DisplayClass61_1 : public ::System::Object
	{
	public:
		::System::UInt32 httpBlockID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_1__CTOR_OFFSET))(this);
		}

		::System::Void _ApplyRogueTournBuildRef_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_1__APPLYROGUETOURNBUILDREF_B__4_OFFSET))(this);
		}
	};
}
