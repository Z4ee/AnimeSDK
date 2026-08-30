#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionModule; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS344_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD6FA580)
#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS344_0__GETSUBMISSIONDATAWITHPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0xD709A20)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule___c__DisplayClass344_0_TypeDefinitionIndex = 66204;

	class MissionModule___c__DisplayClass344_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*>* promise; // 0x10
		::RPG::Client::MissionModule* __4__this; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* subMissionIDs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS344_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetSubMissionDataWithPromise_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS344_0__GETSUBMISSIONDATAWITHPROMISE_B__0_OFFSET))(this);
		}
	};
}
