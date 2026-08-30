#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionModule; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS343_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD6FA440)
#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS343_0__GETSUBMISSIONDATAWITHPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0xD709960)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule___c__DisplayClass343_0_TypeDefinitionIndex = 66203;

	class MissionModule___c__DisplayClass343_0 : public ::System::Object
	{
	public:
		::RPG::Client::MissionModule* __4__this; // 0x10
		::RPG::Client::Promises::Promise_1<::RPG::Client::SubMissionData*>* promise; // 0x18
		::System::UInt32 subMissionID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS343_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetSubMissionDataWithPromise_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS343_0__GETSUBMISSIONDATAWITHPROMISE_B__0_OFFSET))(this);
		}
	};
}
