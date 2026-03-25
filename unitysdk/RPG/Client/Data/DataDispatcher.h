#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Data/EventIndex.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_4.h"

class Class_1_F19AB08624168191;
class Class_2_FDDF7323404C5AC2;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DATA_DATADISPATCHER_REGISETERLISTENER_OFFSET UNITYSDK_OFFSET(0x9443DE0)
#define RPG_CLIENT_DATA_DATADISPATCHER_REGISTERSCHEMA_OFFSET UNITYSDK_OFFSET(0x94443A0)
#define RPG_CLIENT_DATA_DATADISPATCHER_TRIGGEREVENTBYINDEX_OFFSET UNITYSDK_OFFSET(0x9445150)
#define RPG_CLIENT_DATA_DATADISPATCHER_TRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x9444B90)
#define RPG_CLIENT_DATA_DATADISPATCHER_UNREGISTERLISTNER_OFFSET UNITYSDK_OFFSET(0x9444700)
#define RPG_CLIENT_DATA_DATADISPATCHER_UNREGISTERSCHEMA_OFFSET UNITYSDK_OFFSET(0x9444900)
#define RPG_CLIENT_DATA_DATADISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x9445610)

namespace RPG::Client::Data
{
	inline static constexpr unsigned int DataDispatcher_TypeDefinitionIndex = 60189;

	class DataDispatcher : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_FDDF7323404C5AC2*>* listener; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::RPG::Client::Data::EventIndex, ::System::Int32>>* reverseMap; // 0x18
		::System::Collections::Generic::List_1<::System::ValueTuple_4<::RPG::Client::Data::EventIndex, ::System::Int32, ::System::Action_2<::RPG::Client::Data::EventIndex, ::Class_1_F19AB08624168191*>*, ::System::Boolean>>* pendingRegster; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Collections::Generic::Dictionary_2<::RPG::Client::Data::EventIndex, ::System::Int32>*>* mSchemas; // 0x28
		::System::Boolean InTrigger; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_DATADISPATCHER__CTOR_OFFSET))(this);
		}

		::System::Int32 RegiseterListener(::RPG::Client::Data::EventIndex eventIndex, ::System::Action_2<::RPG::Client::Data::EventIndex, ::Class_1_F19AB08624168191*>* handler)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Data::EventIndex, ::System::Action_2<::RPG::Client::Data::EventIndex, ::Class_1_F19AB08624168191*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_DATADISPATCHER_REGISETERLISTENER_OFFSET))(this, eventIndex, handler);
		}

		::System::Boolean UnRegisterListner(::System::Int32 registerID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_DATADISPATCHER_UNREGISTERLISTNER_OFFSET))(this, registerID);
		}

		::System::Void TriggerEvent(::RPG::Client::Data::EventIndex eventIndex, ::RPG::Client::Data::EventIndex SrcEventIndex, ::Class_1_F19AB08624168191* model)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Data::EventIndex, ::RPG::Client::Data::EventIndex, ::Class_1_F19AB08624168191*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_DATADISPATCHER_TRIGGEREVENT_OFFSET))(this, eventIndex, SrcEventIndex, model);
		}

		::System::Void RegisterSchema(::RPG::Client::Data::EventIndex eventIndex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Data::EventIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_DATADISPATCHER_REGISTERSCHEMA_OFFSET))(this, eventIndex);
		}

		::System::Void UnregisterSchema(::RPG::Client::Data::EventIndex eventIndex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Data::EventIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_DATADISPATCHER_UNREGISTERSCHEMA_OFFSET))(this, eventIndex);
		}

		::System::Void TriggerEventByIndex(::RPG::Client::Data::EventIndex eventIndex, ::Class_1_F19AB08624168191* model)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Data::EventIndex, ::Class_1_F19AB08624168191*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_DATADISPATCHER_TRIGGEREVENTBYINDEX_OFFSET))(this, eventIndex, model);
		}
	};
}
