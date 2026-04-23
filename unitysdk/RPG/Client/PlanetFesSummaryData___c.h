#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesAvatarStatsData; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define RPG_CLIENT_PLANETFESSUMMARYDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAD45800)
#define RPG_CLIENT_PLANETFESSUMMARYDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAD45840)
#define RPG_CLIENT_PLANETFESSUMMARYDATA___C__GETMOSTINCOMEAVATAR_B__1_0_OFFSET UNITYSDK_OFFSET(0xAD45850)
#define RPG_CLIENT_PLANETFESSUMMARYDATA___C__GETMOSTPAMEVENTAVATAR_B__4_0_OFFSET UNITYSDK_OFFSET(0xAD45900)
#define RPG_CLIENT_PLANETFESSUMMARYDATA___C__GETMOSTWORKTIMEAVATAR_B__3_0_OFFSET UNITYSDK_OFFSET(0xAD458D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesSummaryData___c_TypeDefinitionIndex = 61399;

	class PlanetFesSummaryData___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*>** StaticGet___9__3_0()
		{
			return (::System::Func_3<::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesSummaryData___c_TypeDefinitionIndex)->GetStaticField(0x66C90);
		}
		static ::System::Func_3<::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*>** StaticGet___9__4_0()
		{
			return (::System::Func_3<::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesSummaryData___c_TypeDefinitionIndex)->GetStaticField(0x66C98);
		}
		static ::System::Func_3<::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*>** StaticGet___9__1_0()
		{
			return (::System::Func_3<::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesSummaryData___c_TypeDefinitionIndex)->GetStaticField(0x66CA0);
		}
		static ::RPG::Client::PlanetFesSummaryData___c** StaticGet___9()
		{
			return (::RPG::Client::PlanetFesSummaryData___c**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesSummaryData___c_TypeDefinitionIndex)->GetStaticField(0x66CA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::PlanetFesAvatarStatsData* _GetMostIncomeAvatar_b__1_0(::RPG::Client::PlanetFesAvatarStatsData* cur, ::RPG::Client::PlanetFesAvatarStatsData* next)
		{
			return ((::RPG::Client::PlanetFesAvatarStatsData*(*)(::PVOID, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA___C__GETMOSTINCOMEAVATAR_B__1_0_OFFSET))(this, cur, next);
		}

		::RPG::Client::PlanetFesAvatarStatsData* _GetMostWorkTimeAvatar_b__3_0(::RPG::Client::PlanetFesAvatarStatsData* cur, ::RPG::Client::PlanetFesAvatarStatsData* next)
		{
			return ((::RPG::Client::PlanetFesAvatarStatsData*(*)(::PVOID, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA___C__GETMOSTWORKTIMEAVATAR_B__3_0_OFFSET))(this, cur, next);
		}

		::RPG::Client::PlanetFesAvatarStatsData* _GetMostPamEventAvatar_b__4_0(::RPG::Client::PlanetFesAvatarStatsData* cur, ::RPG::Client::PlanetFesAvatarStatsData* next)
		{
			return ((::RPG::Client::PlanetFesAvatarStatsData*(*)(::PVOID, ::RPG::Client::PlanetFesAvatarStatsData*, ::RPG::Client::PlanetFesAvatarStatsData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA___C__GETMOSTPAMEVENTAVATAR_B__4_0_OFFSET))(this, cur, next);
		}
	};
}
