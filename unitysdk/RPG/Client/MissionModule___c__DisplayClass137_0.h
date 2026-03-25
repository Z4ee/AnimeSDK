#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SubMissionData; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS137_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9BD1320)
#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS137_0___REGISTERSINGLEFLOORSAVEDVALUECALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x9BEB770)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule___c__DisplayClass137_0_TypeDefinitionIndex = 53770;

	class MissionModule___c__DisplayClass137_0 : public ::System::Object
	{
	public:
		::RPG::Client::SubMissionData* subMissionData; // 0x10
		::System::Predicate_1<::RPG::Client::SubMissionData*>* __9__0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS137_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __RegisterSingleFloorSavedValueCallback_b__0(::RPG::Client::SubMissionData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS137_0___REGISTERSINGLEFLOORSAVEDVALUECALLBACK_B__0_OFFSET))(this, data);
		}
	};
}
