#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_25;
namespace RPG::Client { class FateReijuSelectSlotData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEREIJUSELECTACTION_CREATETEMPACTIONFORTEST_OFFSET UNITYSDK_OFFSET(0xA35A2E0)
#define RPG_CLIENT_FATEREIJUSELECTACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA359BE0)
#define RPG_CLIENT_FATEREIJUSELECTACTION_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xA35A6E0)
#define RPG_CLIENT_FATEREIJUSELECTACTION_GET_CURRENTSELECTTIME_OFFSET UNITYSDK_OFFSET(0xA35A700)
#define RPG_CLIENT_FATEREIJUSELECTACTION_GET_SELECTREIJUDATA_OFFSET UNITYSDK_OFFSET(0xA35A720)
#define RPG_CLIENT_FATEREIJUSELECTACTION_REIJUSELECTCONFIRM_OFFSET UNITYSDK_OFFSET(0xA35A160)
#define RPG_CLIENT_FATEREIJUSELECTACTION_REIJUSELECTREROLL_OFFSET UNITYSDK_OFFSET(0xA35A220)
#define RPG_CLIENT_FATEREIJUSELECTACTION_SET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xA35A6F0)
#define RPG_CLIENT_FATEREIJUSELECTACTION_SET_CURRENTSELECTTIME_OFFSET UNITYSDK_OFFSET(0xA35A710)
#define RPG_CLIENT_FATEREIJUSELECTACTION_SET_SELECTREIJUDATA_OFFSET UNITYSDK_OFFSET(0xA35A730)
#define RPG_CLIENT_FATEREIJUSELECTACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xA359DD0)
#define RPG_CLIENT_FATEREIJUSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA359C50)

namespace RPG::Client
{
	inline static constexpr unsigned int FateReijuSelectAction_TypeDefinitionIndex = 58986;

	class FateReijuSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateReijuSelectSlotData*>* _SelectReijuData_k__BackingField; // 0x10
		::System::UInt32 _CurrentSelectTime_k__BackingField; // 0x18
		::System::UInt32 _ActionID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 actionID, ::Class_1_D40936EF3BF54118_25* proto, ::System::UInt32 currentSelectTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_D40936EF3BF54118_25*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION__CTOR_OFFSET))(this, actionID, proto, currentSelectTime);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION_DISPOSE_OFFSET))(this);
		}

		::System::Void ReijuSelectConfirm(::System::UInt32 reijuId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION_REIJUSELECTCONFIRM_OFFSET))(this, reijuId);
		}

		::System::Void ReijuSelectReroll(::System::UInt32 reijuId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION_REIJUSELECTREROLL_OFFSET))(this, reijuId);
		}

		static ::RPG::Client::FateReijuSelectAction* CreateTempActionForTest()
		{
			return ((::RPG::Client::FateReijuSelectAction*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION_CREATETEMPACTIONFORTEST_OFFSET))();
		}

		::System::Void _Construct(::Class_1_D40936EF3BF54118_25* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_25*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION__CONSTRUCT_OFFSET))(this, proto);
		}

		::System::UInt32 get_ActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION_GET_ACTIONID_OFFSET))(this);
		}

		::System::Void set_ActionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION_SET_ACTIONID_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentSelectTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION_GET_CURRENTSELECTTIME_OFFSET))(this);
		}

		::System::Void set_CurrentSelectTime(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION_SET_CURRENTSELECTTIME_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateReijuSelectSlotData*>* get_SelectReijuData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateReijuSelectSlotData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION_GET_SELECTREIJUDATA_OFFSET))(this);
		}

		::System::Void set_SelectReijuData(::System::Collections::Generic::List_1<::RPG::Client::FateReijuSelectSlotData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateReijuSelectSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION_SET_SELECTREIJUDATA_OFFSET))(this, value);
		}
	};
}
