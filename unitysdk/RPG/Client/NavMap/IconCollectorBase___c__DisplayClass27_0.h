#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapMappingInfoData; }
namespace RPG::Client::NavMap { class ISubNavMap; }
namespace RPG::GameCore { class SubMissionInfoConfig; }

#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x166B6280)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE___C__DISPLAYCLASS27_0___TRYGETMAINNAVMAPCROSSFLOORGUIDEICON_B__0_OFFSET UNITYSDK_OFFSET(0x166B88D0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE___C__DISPLAYCLASS27_0___TRYGETMAINNAVMAPCROSSFLOORGUIDEICON_B__1_OFFSET UNITYSDK_OFFSET(0x166B89E0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int IconCollectorBase___c__DisplayClass27_0_TypeDefinitionIndex = 71101;

	class IconCollectorBase___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::SubMissionInfoConfig* subMissionInfoConfig; // 0x10
		::RPG::Client::NavMap::ISubNavMap* subNavMapData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __TryGetMainNavMapCrossFloorGuideIcon_b__0(::RPG::Client::NavMap::ISubNavMap* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ISubNavMap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE___C__DISPLAYCLASS27_0___TRYGETMAINNAVMAPCROSSFLOORGUIDEICON_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __TryGetMainNavMapCrossFloorGuideIcon_b__1(::RPG::Client::MapMappingInfoData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE___C__DISPLAYCLASS27_0___TRYGETMAINNAVMAPCROSSFLOORGUIDEICON_B__1_OFFSET))(this, a1);
		}
	};
}
