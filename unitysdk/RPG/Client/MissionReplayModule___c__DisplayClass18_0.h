#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventureModule_PerformanceReplayInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONREPLAYMODULE___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x180571C0)
#define RPG_CLIENT_MISSIONREPLAYMODULE___C__DISPLAYCLASS18_0___TRYSTARTREPLAYMISSION_B__0_OFFSET UNITYSDK_OFFSET(0x180585F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionReplayModule___c__DisplayClass18_0_TypeDefinitionIndex = 63261;

	class MissionReplayModule___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AdventureModule_PerformanceReplayInfo*>* replayInfos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void __TryStartReplayMission_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYMODULE___C__DISPLAYCLASS18_0___TRYSTARTREPLAYMISSION_B__0_OFFSET))(this);
		}
	};
}
