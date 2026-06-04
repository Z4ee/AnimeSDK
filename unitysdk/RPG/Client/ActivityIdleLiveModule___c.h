#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E46AFE244F4A466;
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client::ActivityIdleLive { class CaptainData; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB191FF0)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB192020)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C___INITREQ_B__229_0_OFFSET UNITYSDK_OFFSET(0xB192070)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C___SORTCAPTAINBYTOTALSCDESCEND_B__258_0_OFFSET UNITYSDK_OFFSET(0xB192130)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C___UPDATECHAPTERRECORDDATA_B__215_1_OFFSET UNITYSDK_OFFSET(0xB192030)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityIdleLiveModule___c_TypeDefinitionIndex = 57539;

	class ActivityIdleLiveModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityIdleLiveModule___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLiveModule___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityIdleLiveModule___c_TypeDefinitionIndex)->GetStaticField(0x55D60);
		}
		static ::System::Comparison_1<::Class_1_0E46AFE244F4A466*>** StaticGet___9__215_1()
		{
			return (::System::Comparison_1<::Class_1_0E46AFE244F4A466*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityIdleLiveModule___c_TypeDefinitionIndex)->GetStaticField(0x55D68);
		}
		static ::System::Action_1<::RPG::Client::ScheduleData*>** StaticGet___9__229_0()
		{
			return (::System::Action_1<::RPG::Client::ScheduleData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityIdleLiveModule___c_TypeDefinitionIndex)->GetStaticField(0x55D70);
		}
		static ::System::Comparison_1<::RPG::Client::ActivityIdleLive::CaptainData*>** StaticGet___9__258_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityIdleLive::CaptainData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityIdleLiveModule___c_TypeDefinitionIndex)->GetStaticField(0x55D78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __UpdateChapterRecordData_b__215_1(::Class_1_0E46AFE244F4A466* a1, ::Class_1_0E46AFE244F4A466* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_0E46AFE244F4A466*, ::Class_1_0E46AFE244F4A466*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C___UPDATECHAPTERRECORDDATA_B__215_1_OFFSET))(this, a1, a2);
		}

		::System::Void __InitReq_b__229_0(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C___INITREQ_B__229_0_OFFSET))(this, a1);
		}

		::System::Int32 __SortCaptainByTotalScDescend_b__258_0(::RPG::Client::ActivityIdleLive::CaptainData* a1, ::RPG::Client::ActivityIdleLive::CaptainData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::CaptainData*, ::RPG::Client::ActivityIdleLive::CaptainData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C___SORTCAPTAINBYTOTALSCDESCEND_B__258_0_OFFSET))(this, a1, a2);
		}
	};
}
