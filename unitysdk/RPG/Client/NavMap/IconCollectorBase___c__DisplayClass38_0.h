#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap { class AreaData; }

#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1824B3E0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE___C__DISPLAYCLASS38_0___INSHOWAREA_B__0_OFFSET UNITYSDK_OFFSET(0x1824C190)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int IconCollectorBase___c__DisplayClass38_0_TypeDefinitionIndex = 74401;

	class IconCollectorBase___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::Int32 areaID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __InShowArea_b__0(::RPG::Client::NavMap::AreaData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::AreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE___C__DISPLAYCLASS38_0___INSHOWAREA_B__0_OFFSET))(this, a1);
		}
	};
}
