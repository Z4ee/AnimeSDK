#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B7E0A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9B7E0E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO___C__INITTEAM_B__5_0_OFFSET UNITYSDK_OFFSET(0x9B7E0F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO___C__ISALLSLOTSFULL_B__12_0_OFFSET UNITYSDK_OFFSET(0x9B7E110)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO___C__ISALLSLOTSFULL_B__12_1_OFFSET UNITYSDK_OFFSET(0x9B7E2D0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTeamInfo___c_TypeDefinitionIndex = 69160;

	class IdleLiveTeamInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x305D0);
		}
		static ::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x305D8);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveTeamInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveTeamInfo___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x305E0);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>** StaticGet___9__12_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x305E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitTeam_b__5_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO___C__INITTEAM_B__5_0_OFFSET))(this, a, b);
		}

		::System::Boolean _IsAllSlotsFull_b__12_0(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* slots)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO___C__ISALLSLOTSFULL_B__12_0_OFFSET))(this, slots);
		}

		::System::Boolean _IsAllSlotsFull_b__12_1(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO___C__ISALLSLOTSFULL_B__12_1_OFFSET))(this, slot);
		}
	};
}
