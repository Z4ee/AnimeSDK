#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightStageRouteConfigRow; }

#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BCD40)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__DISPLAYCLASS4_0__SYNCROUTEID_B__0_OFFSET UNITYSDK_OFFSET(0x1C5BD2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStageRoute___c__DisplayClass4_0_TypeDefinitionIndex = 65311;

	class GridFightStageRoute___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 routeID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SyncRouteID_b__0(::RPG::GameCore::GridFightStageRouteConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightStageRouteConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__DISPLAYCLASS4_0__SYNCROUTEID_B__0_OFFSET))(this, a1);
		}
	};
}
