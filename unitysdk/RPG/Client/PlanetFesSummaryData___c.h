#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesAvatarStatsData; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define RPG_CLIENT_PLANETFESSUMMARYDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1D71A0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1D71E0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA___C__GETMOSTINCOMEAVATAR_B__1_0_OFFSET UNITYSDK_OFFSET(0x1A1D71F0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA___C__GETMOSTPAMEVENTAVATAR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1A1D72A0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA___C__GETMOSTWORKTIMEAVATAR_B__3_0_OFFSET UNITYSDK_OFFSET(0x1A1D7270)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesSummaryData___c_TypeDefinitionIndex = 63689;

	class PlanetFesSummaryData___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*>** StaticGet___9__3_0()
		{
			return (::System::Func_3<::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesSummaryData___c_TypeDefinitionIndex)->GetStaticField(0x689E0);
		}
		static ::System::Func_3<::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*>** StaticGet___9__4_0()
		{
			return (::System::Func_3<::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesSummaryData___c_TypeDefinitionIndex)->GetStaticField(0x689E8);
		}
		static ::System::Func_3<::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*>** StaticGet___9__1_0()
		{
			return (::System::Func_3<::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesSummaryData___c_TypeDefinitionIndex)->GetStaticField(0x689F0);
		}
		static ::RPG::Client::PlanetFesSummaryData___c** StaticGet___9()
		{
			return (::RPG::Client::PlanetFesSummaryData___c**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesSummaryData___c_TypeDefinitionIndex)->GetStaticField(0x689F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::PlanetFesAvatarStatsData* _GetMostIncomeAvatar_b__1_0(::RPG::Client::PlanetFesAvatarStatsData* a1, ::RPG::Client::PlanetFesAvatarStatsData* a2)
		{
			return ((::RPG::Client::PlanetFesAvatarStatsData*(*)(::PVOID, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA___C__GETMOSTINCOMEAVATAR_B__1_0_OFFSET))(this, a1, a2);
		}

		::RPG::Client::PlanetFesAvatarStatsData* _GetMostWorkTimeAvatar_b__3_0(::RPG::Client::PlanetFesAvatarStatsData* a1, ::RPG::Client::PlanetFesAvatarStatsData* a2)
		{
			return ((::RPG::Client::PlanetFesAvatarStatsData*(*)(::PVOID, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA___C__GETMOSTWORKTIMEAVATAR_B__3_0_OFFSET))(this, a1, a2);
		}

		::RPG::Client::PlanetFesAvatarStatsData* _GetMostPamEventAvatar_b__4_0(::RPG::Client::PlanetFesAvatarStatsData* a1, ::RPG::Client::PlanetFesAvatarStatsData* a2)
		{
			return ((::RPG::Client::PlanetFesAvatarStatsData*(*)(::PVOID, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA___C__GETMOSTPAMEVENTAVATAR_B__4_0_OFFSET))(this, a1, a2);
		}
	};
}
