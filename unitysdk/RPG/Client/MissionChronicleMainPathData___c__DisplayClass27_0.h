#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionChronicleSubPathData; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD6CF880)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___C__DISPLAYCLASS27_0___SETCONNECTIONWAYDATA_B__0_OFFSET UNITYSDK_OFFSET(0xD6D03A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChronicleMainPathData___c__DisplayClass27_0_TypeDefinitionIndex = 66132;

	class MissionChronicleMainPathData___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::RPG::Client::MissionChronicleSubPathData* subPathSingleNodeData; // 0x10
		::System::Predicate_1<::RPG::Client::MissionChronicleSubPathData*>* __9__0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __SetConnectionWayData_b__0(::RPG::Client::MissionChronicleSubPathData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionChronicleSubPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___C__DISPLAYCLASS27_0___SETCONNECTIONWAYDATA_B__0_OFFSET))(this, a1);
		}
	};
}
