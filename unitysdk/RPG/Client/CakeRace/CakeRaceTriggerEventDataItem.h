#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTriggerEventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CakeRaceTriggerEventRow; }

#define RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xC9B7AA0)
#define RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTDATAITEM_GET_CONDITIONIDLIST_OFFSET UNITYSDK_OFFSET(0xC9B7960)
#define RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTDATAITEM_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0xC9B78B0)
#define RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTDATAITEM_GET_TRIGGEREVENTTYPE_OFFSET UNITYSDK_OFFSET(0xC9B78C0)
#define RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTDATAITEM_GET_TRIGGERPERFORMANCEIDLIST_OFFSET UNITYSDK_OFFSET(0xC9B7A00)
#define RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xC9B7850)
#define RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC9B7AF0)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceTriggerEventDataItem_TypeDefinitionIndex = 75998;

	class CakeRaceTriggerEventDataItem : public ::System::Object
	{
	public:
		::System::UInt32 _EventID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTDATAITEM__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceTriggerEventRow* get__Row()
		{
			return ((::RPG::GameCore::CakeRaceTriggerEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTDATAITEM_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_EventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTDATAITEM_GET_EVENTID_OFFSET))(this);
		}

		::RPG::GameCore::CakeRaceTriggerEventType get_TriggerEventType()
		{
			return ((::RPG::GameCore::CakeRaceTriggerEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTDATAITEM_GET_TRIGGEREVENTTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ConditionIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTDATAITEM_GET_CONDITIONIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TriggerPerformanceIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTDATAITEM_GET_TRIGGERPERFORMANCEIDLIST_OFFSET))(this);
		}

		static ::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACETRIGGEREVENTDATAITEM_CREATE_OFFSET))(a1);
		}
	};
}
