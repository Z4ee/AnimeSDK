#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_760;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER___C__DISPLAYCLASS0_0__COLLECTUNLOCKCONDITIONS_B__0_OFFSET UNITYSDK_OFFSET(0xA8BB5D0)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER___C__DISPLAYCLASS0_0__COLLECTUNLOCKCONDITIONS_B__1_OFFSET UNITYSDK_OFFSET(0xA8BB900)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA8BB140)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChroniclePathUnlockConditionHelper___c__DisplayClass0_0_TypeDefinitionIndex = 60892;

	class MissionChroniclePathUnlockConditionHelper___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::Class_0_16E4307DCC419505_760*>* collectors; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*>* _CollectUnlockConditions_b__0()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER___C__DISPLAYCLASS0_0__COLLECTUNLOCKCONDITIONS_B__0_OFFSET))(this);
		}

		::System::Void _CollectUnlockConditions_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER___C__DISPLAYCLASS0_0__COLLECTUNLOCKCONDITIONS_B__1_OFFSET))(this);
		}
	};
}
