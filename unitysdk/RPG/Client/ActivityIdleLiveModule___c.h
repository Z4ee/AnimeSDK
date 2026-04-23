#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6CF570E1464558AD;
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client::ActivityIdleLive { class CaptainData; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9BF5C50)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9BF5C80)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C___INITREQ_B__229_0_OFFSET UNITYSDK_OFFSET(0x9BF5CD0)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C___SORTCAPTAINBYTOTALSCDESCEND_B__258_0_OFFSET UNITYSDK_OFFSET(0x9BF5D90)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C___UPDATECHAPTERRECORDDATA_B__215_1_OFFSET UNITYSDK_OFFSET(0x9BF5C90)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityIdleLiveModule___c_TypeDefinitionIndex = 56755;

	class ActivityIdleLiveModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ActivityIdleLive::CaptainData*>** StaticGet___9__258_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityIdleLive::CaptainData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityIdleLiveModule___c_TypeDefinitionIndex)->GetStaticField(0x33400);
		}
		static ::System::Comparison_1<::Class_1_6CF570E1464558AD*>** StaticGet___9__215_1()
		{
			return (::System::Comparison_1<::Class_1_6CF570E1464558AD*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityIdleLiveModule___c_TypeDefinitionIndex)->GetStaticField(0x33408);
		}
		static ::System::Action_1<::RPG::Client::ScheduleData*>** StaticGet___9__229_0()
		{
			return (::System::Action_1<::RPG::Client::ScheduleData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityIdleLiveModule___c_TypeDefinitionIndex)->GetStaticField(0x33410);
		}
		static ::RPG::Client::ActivityIdleLiveModule___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLiveModule___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityIdleLiveModule___c_TypeDefinitionIndex)->GetStaticField(0x33418);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __UpdateChapterRecordData_b__215_1(::Class_1_6CF570E1464558AD* l, ::Class_1_6CF570E1464558AD* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_6CF570E1464558AD*, ::Class_1_6CF570E1464558AD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C___UPDATECHAPTERRECORDDATA_B__215_1_OFFSET))(this, l, r);
		}

		::System::Void __InitReq_b__229_0(::RPG::Client::ScheduleData* _)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C___INITREQ_B__229_0_OFFSET))(this, _);
		}

		::System::Int32 __SortCaptainByTotalScDescend_b__258_0(::RPG::Client::ActivityIdleLive::CaptainData* l, ::RPG::Client::ActivityIdleLive::CaptainData* r)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::CaptainData*, ::RPG::Client::ActivityIdleLive::CaptainData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C___SORTCAPTAINBYTOTALSCDESCEND_B__258_0_OFFSET))(this, l, r);
		}
	};
}
