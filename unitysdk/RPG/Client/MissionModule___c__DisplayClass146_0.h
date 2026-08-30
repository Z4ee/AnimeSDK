#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SubMissionData; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS146_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16986DD0)
#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS146_0___REGISTERSINGLEFLOORCUSTOMVALUECALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x169A44D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule___c__DisplayClass146_0_TypeDefinitionIndex = 66197;

	class MissionModule___c__DisplayClass146_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::RPG::Client::SubMissionData*>* __9__0; // 0x10
		::RPG::Client::SubMissionData* subMissionData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS146_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __RegisterSingleFloorCustomValueCallback_b__0(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS146_0___REGISTERSINGLEFLOORCUSTOMVALUECALLBACK_B__0_OFFSET))(this, a1);
		}
	};
}
