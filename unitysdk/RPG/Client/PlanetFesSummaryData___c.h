#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesAvatarStatsData; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define RPG_CLIENT_PLANETFESSUMMARYDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2CA200)
#define RPG_CLIENT_PLANETFESSUMMARYDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2CA240)
#define RPG_CLIENT_PLANETFESSUMMARYDATA___C__GETMOSTINCOMEAVATAR_B__1_0_OFFSET UNITYSDK_OFFSET(0x1C2CA250)
#define RPG_CLIENT_PLANETFESSUMMARYDATA___C__GETMOSTPAMEVENTAVATAR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1C2CA300)
#define RPG_CLIENT_PLANETFESSUMMARYDATA___C__GETMOSTWORKTIMEAVATAR_B__3_0_OFFSET UNITYSDK_OFFSET(0x1C2CA2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesSummaryData___c_TypeDefinitionIndex = 66674;

	class PlanetFesSummaryData___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*>** StaticGet___9__1_0()
		{
			return (::System::Func_3<::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesSummaryData___c_TypeDefinitionIndex)->GetStaticField(0x5B770);
		}
		static ::System::Func_3<::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*>** StaticGet___9__3_0()
		{
			return (::System::Func_3<::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesSummaryData___c_TypeDefinitionIndex)->GetStaticField(0x5B778);
		}
		static ::RPG::Client::PlanetFesSummaryData___c** StaticGet___9()
		{
			return (::RPG::Client::PlanetFesSummaryData___c**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesSummaryData___c_TypeDefinitionIndex)->GetStaticField(0x5B780);
		}
		static ::System::Func_3<::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*>** StaticGet___9__4_0()
		{
			return (::System::Func_3<::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesSummaryData___c_TypeDefinitionIndex)->GetStaticField(0x5B788);
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
