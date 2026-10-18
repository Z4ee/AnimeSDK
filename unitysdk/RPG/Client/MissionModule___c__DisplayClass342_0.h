#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class MissionModule; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS342_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD6EF2B0)
#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS342_0__GETMAINMISSIONDATAWITHPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0xD6FEE90)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule___c__DisplayClass342_0_TypeDefinitionIndex = 66156;

	class MissionModule___c__DisplayClass342_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*>* promise; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* mainMissionIDs; // 0x18
		::RPG::Client::MissionModule* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS342_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetMainMissionDataWithPromise_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS342_0__GETMAINMISSIONDATAWITHPROMISE_B__0_OFFSET))(this);
		}
	};
}
