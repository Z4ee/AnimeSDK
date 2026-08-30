#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightSeasonPortalConfigRow; }

#define RPG_CLIENT_GRIDFIGHTSEASON___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD311840)
#define RPG_CLIENT_GRIDFIGHTSEASON___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0xD313010)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeason___c__DisplayClass0_0_TypeDefinitionIndex = 65265;

	class GridFightSeason___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__0(::RPG::GameCore::GridFightSeasonPortalConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightSeasonPortalConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASON___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET))(this, a1);
		}
	};
}
