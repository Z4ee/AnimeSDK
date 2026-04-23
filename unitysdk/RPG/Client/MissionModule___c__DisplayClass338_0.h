#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionModule; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS338_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA8D8990)
#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS338_0__GETSUBMISSIONDATAWITHPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0xA8E5E00)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule___c__DisplayClass338_0_TypeDefinitionIndex = 60922;

	class MissionModule___c__DisplayClass338_0 : public ::System::Object
	{
	public:
		::RPG::Client::MissionModule* __4__this; // 0x10
		::RPG::Client::Promises::Promise_1<::RPG::Client::SubMissionData*>* promise; // 0x18
		::System::UInt32 subMissionID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS338_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetSubMissionDataWithPromise_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS338_0__GETSUBMISSIONDATAWITHPROMISE_B__0_OFFSET))(this);
		}
	};
}
