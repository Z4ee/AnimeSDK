#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_25;
namespace RPG::Client { class FateReijuSelectSlotData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEREIJUSELECTACTION_CREATETEMPACTIONFORTEST_OFFSET UNITYSDK_OFFSET(0x1A5BA5A0)
#define RPG_CLIENT_FATEREIJUSELECTACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5B9AD0)
#define RPG_CLIENT_FATEREIJUSELECTACTION_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0x1A5BAAB0)
#define RPG_CLIENT_FATEREIJUSELECTACTION_GET_CURRENTSELECTTIME_OFFSET UNITYSDK_OFFSET(0x1A5BAAD0)
#define RPG_CLIENT_FATEREIJUSELECTACTION_GET_SELECTREIJUDATA_OFFSET UNITYSDK_OFFSET(0x1A5BAAF0)
#define RPG_CLIENT_FATEREIJUSELECTACTION_REIJUSELECTCONFIRM_OFFSET UNITYSDK_OFFSET(0x1A5BA420)
#define RPG_CLIENT_FATEREIJUSELECTACTION_REIJUSELECTREROLL_OFFSET UNITYSDK_OFFSET(0x1A5BA4E0)
#define RPG_CLIENT_FATEREIJUSELECTACTION_SET_ACTIONID_OFFSET UNITYSDK_OFFSET(0x1A5BAAC0)
#define RPG_CLIENT_FATEREIJUSELECTACTION_SET_CURRENTSELECTTIME_OFFSET UNITYSDK_OFFSET(0x1A5BAAE0)
#define RPG_CLIENT_FATEREIJUSELECTACTION_SET_SELECTREIJUDATA_OFFSET UNITYSDK_OFFSET(0x1A5BAB00)
#define RPG_CLIENT_FATEREIJUSELECTACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1A5B9F20)
#define RPG_CLIENT_FATEREIJUSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5B9D40)

namespace RPG::Client
{
	inline static constexpr unsigned int FateReijuSelectAction_TypeDefinitionIndex = 61201;

	class FateReijuSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateReijuSelectSlotData*>* _SelectReijuData_k__BackingField; // 0x10
		::System::UInt32 _CurrentSelectTime_k__BackingField; // 0x18
		::System::UInt32 _ActionID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_D40936EF3BF54118_25* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_D40936EF3BF54118_25*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION_DISPOSE_OFFSET))(this);
		}

		::System::Void ReijuSelectConfirm(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION_REIJUSELECTCONFIRM_OFFSET))(this, a1);
		}

		::System::Void ReijuSelectReroll(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION_REIJUSELECTREROLL_OFFSET))(this, a1);
		}

		static ::RPG::Client::FateReijuSelectAction* CreateTempActionForTest()
		{
			return ((::RPG::Client::FateReijuSelectAction*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION_CREATETEMPACTIONFORTEST_OFFSET))();
		}

		::System::Void _Construct(::Class_1_D40936EF3BF54118_25* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_25*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION__CONSTRUCT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION_GET_ACTIONID_OFFSET))(this);
		}

		::System::Void set_ActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION_SET_ACTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentSelectTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION_GET_CURRENTSELECTTIME_OFFSET))(this);
		}

		::System::Void set_CurrentSelectTime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION_SET_CURRENTSELECTTIME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateReijuSelectSlotData*>* get_SelectReijuData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateReijuSelectSlotData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION_GET_SELECTREIJUDATA_OFFSET))(this);
		}

		::System::Void set_SelectReijuData(::System::Collections::Generic::List_1<::RPG::Client::FateReijuSelectSlotData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateReijuSelectSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTACTION_SET_SELECTREIJUDATA_OFFSET))(this, a1);
		}
	};
}
