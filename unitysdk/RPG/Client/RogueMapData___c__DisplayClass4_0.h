#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueSiteData; }

#define RPG_CLIENT_ROGUEMAPDATA___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDEF23E0)
#define RPG_CLIENT_ROGUEMAPDATA___C__DISPLAYCLASS4_0__GETROGUESITEDATA_B__0_OFFSET UNITYSDK_OFFSET(0xDEF2CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMapData___c__DisplayClass4_0_TypeDefinitionIndex = 67459;

	class RogueMapData___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 siteID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRogueSiteData_b__0(::RPG::Client::RogueSiteData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueSiteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA___C__DISPLAYCLASS4_0__GETROGUESITEDATA_B__0_OFFSET))(this, a1);
		}
	};
}
