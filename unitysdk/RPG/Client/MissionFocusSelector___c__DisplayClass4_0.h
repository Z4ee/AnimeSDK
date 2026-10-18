#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class MissionFocusSelector_MissionMatchPredicate; }

#define RPG_CLIENT_MISSIONFOCUSSELECTOR___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD6D9C80)
#define RPG_CLIENT_MISSIONFOCUSSELECTOR___C__DISPLAYCLASS4_0___TRYGETMOSTRELEVANTMAINMISSIONID_B__0_OFFSET UNITYSDK_OFFSET(0xD6D9EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionFocusSelector___c__DisplayClass4_0_TypeDefinitionIndex = 66165;

	class MissionFocusSelector___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::MissionFocusSelector_MissionMatchPredicate* predicate; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONFOCUSSELECTOR___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __TryGetMostRelevantMainMissionID_b__0(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONFOCUSSELECTOR___C__DISPLAYCLASS4_0___TRYGETMOSTRELEVANTMAINMISSIONID_B__0_OFFSET))(this, a1);
		}
	};
}
