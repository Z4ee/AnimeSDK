#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveDmgStatisticsUiData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B270C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9B27100)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL___C___REFRESHDMGSTATISTICS_B__7_0_OFFSET UNITYSDK_OFFSET(0x9B27110)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int DmgStatisticViewModel___c_TypeDefinitionIndex = 69476;

	class DmgStatisticViewModel___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityIdleLive::DmgStatisticViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::DmgStatisticViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(DmgStatisticViewModel___c_TypeDefinitionIndex)->GetStaticField(0x28D10);
		}
		static ::System::Comparison_1<::RPG::Client::ActivityIdleLive::IdleLiveDmgStatisticsUiData*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityIdleLive::IdleLiveDmgStatisticsUiData*>**)Il2CppClass::FromTypeDefinitionIndex(DmgStatisticViewModel___c_TypeDefinitionIndex)->GetStaticField(0x28D18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __RefreshDmgStatistics_b__7_0(::RPG::Client::ActivityIdleLive::IdleLiveDmgStatisticsUiData* l, ::RPG::Client::ActivityIdleLive::IdleLiveDmgStatisticsUiData* r)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDmgStatisticsUiData*, ::RPG::Client::ActivityIdleLive::IdleLiveDmgStatisticsUiData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL___C___REFRESHDMGSTATISTICS_B__7_0_OFFSET))(this, l, r);
		}
	};
}
