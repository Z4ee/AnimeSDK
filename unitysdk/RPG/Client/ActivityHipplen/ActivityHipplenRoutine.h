#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameCycleData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_ADDWORKDATA_OFFSET UNITYSDK_OFFSET(0x8F2AE90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CHECKADDWORKDATAACTIONPOINTENOUGH_OFFSET UNITYSDK_OFFSET(0x8F2A460)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CHECKADDWORKDATAENERGYENOUGH_OFFSET UNITYSDK_OFFSET(0x8F2A6A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CHECKWORKDATAFINISH_OFFSET UNITYSDK_OFFSET(0x8F2B640)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CHECKWORKDATASELECTED_OFFSET UNITYSDK_OFFSET(0x8F2B4B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CLEARARRANGEDWORKDATA_OFFSET UNITYSDK_OFFSET(0x8F2B390)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F2A2C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_GETAVAILABLEACTIONPOINTNUM_OFFSET UNITYSDK_OFFSET(0x8F2A4D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_GETROUTINEWORKLIST_OFFSET UNITYSDK_OFFSET(0x8F2ACB0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_GET_ARRANGEDWORKLIST_OFFSET UNITYSDK_OFFSET(0x8F2B7D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_GET_FIXEDWORK_OFFSET UNITYSDK_OFFSET(0x8F2B7F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_INIT_OFFSET UNITYSDK_OFFSET(0x8F2A230)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_REMOVELASTWORKDATA_OFFSET UNITYSDK_OFFSET(0x8F2B250)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_REMOVEWORKDATA_OFFSET UNITYSDK_OFFSET(0x8F2B110)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_RESET_OFFSET UNITYSDK_OFFSET(0x8F2A310)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_SETFIXEDWORKDATA_OFFSET UNITYSDK_OFFSET(0x8F2B0C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_SET_ARRANGEDWORKLIST_OFFSET UNITYSDK_OFFSET(0x8F2B7E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_SET_FIXEDWORK_OFFSET UNITYSDK_OFFSET(0x8F2B800)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE__CTOR_OFFSET UNITYSDK_OFFSET(0x8F2B810)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenRoutine_TypeDefinitionIndex = 61751;

	class ActivityHipplenRoutine : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* _FixedWork_k__BackingField; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenGameCycleData* _GameCycleData; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* _ArrangedWorkList_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_DISPOSE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_RESET_OFFSET))(this);
		}

		::System::Boolean CheckAddWorkDataActionPointEnough(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CHECKADDWORKDATAACTIONPOINTENOUGH_OFFSET))(this, data);
		}

		::System::Boolean CheckAddWorkDataEnergyEnough(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CHECKADDWORKDATAENERGYENOUGH_OFFSET))(this, data);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* GetRoutineWorkList(::System::Boolean includeEmptyBlock)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_GETROUTINEWORKLIST_OFFSET))(this, includeEmptyBlock);
		}

		::System::Boolean AddWorkData(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_ADDWORKDATA_OFFSET))(this, data);
		}

		::System::Void SetFixedWorkData(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_SETFIXEDWORKDATA_OFFSET))(this, data);
		}

		::System::Boolean RemoveWorkData(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_REMOVEWORKDATA_OFFSET))(this, data);
		}

		::System::Boolean RemoveLastWorkData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_REMOVELASTWORKDATA_OFFSET))(this);
		}

		::System::Boolean ClearArrangedWorkData(::System::Boolean refreshView)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CLEARARRANGEDWORKDATA_OFFSET))(this, refreshView);
		}

		::System::Boolean CheckWorkDataSelected(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CHECKWORKDATASELECTED_OFFSET))(this, data);
		}

		::System::Boolean CheckWorkDataFinish(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_CHECKWORKDATAFINISH_OFFSET))(this, data);
		}

		::System::Int32 GetAvailableActionPointNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_GETAVAILABLEACTIONPOINTNUM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* get_ArrangedWorkList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_GET_ARRANGEDWORKLIST_OFFSET))(this);
		}

		::System::Void set_ArrangedWorkList(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_SET_ARRANGEDWORKLIST_OFFSET))(this, value);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* get_FixedWork()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_GET_FIXEDWORK_OFFSET))(this);
		}

		::System::Void set_FixedWork(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE_SET_FIXEDWORK_OFFSET))(this, value);
		}
	};
}
