#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionChronicleSubPathData; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9BB85F0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___C__DISPLAYCLASS26_0___SETCONNECTIONWAYDATA_B__0_OFFSET UNITYSDK_OFFSET(0x9BB9260)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChronicleMainPathData___c__DisplayClass26_0_TypeDefinitionIndex = 53707;

	class MissionChronicleMainPathData___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::RPG::Client::MissionChronicleSubPathData* subPathSingleNodeData; // 0x10
		::System::Predicate_1<::RPG::Client::MissionChronicleSubPathData*>* __9__0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __SetConnectionWayData_b__0(::RPG::Client::MissionChronicleSubPathData* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionChronicleSubPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___C__DISPLAYCLASS26_0___SETCONNECTIONWAYDATA_B__0_OFFSET))(this, p);
		}
	};
}
