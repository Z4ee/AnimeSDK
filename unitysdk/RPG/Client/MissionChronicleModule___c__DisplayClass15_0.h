#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionChronicleMainPathData; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_MISSIONCHRONICLEMODULE___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC001950)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE___C__DISPLAYCLASS15_0___SETCONNECTIONWAYDATA_B__0_OFFSET UNITYSDK_OFFSET(0xC002400)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChronicleModule___c__DisplayClass15_0_TypeDefinitionIndex = 61790;

	class MissionChronicleModule___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::RPG::Client::MissionChronicleMainPathData* mainPathSingleNodeData; // 0x10
		::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>* __9__0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __SetConnectionWayData_b__0(::RPG::Client::MissionChronicleMainPathData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE___C__DISPLAYCLASS15_0___SETCONNECTIONWAYDATA_B__0_OFFSET))(this, a1);
		}
	};
}
