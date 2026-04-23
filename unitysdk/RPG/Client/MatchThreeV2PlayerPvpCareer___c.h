#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CAB6C405C6C7B1_1.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_102;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA85F2B0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA85F2F0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCARENASTATISTICS_B__19_0_OFFSET UNITYSDK_OFFSET(0xA85F340)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCARENASTATISTICS_B__19_1_OFFSET UNITYSDK_OFFSET(0xA85F360)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCSOLOSTATISTICS_B__18_0_OFFSET UNITYSDK_OFFSET(0xA85F300)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCSOLOSTATISTICS_B__18_1_OFFSET UNITYSDK_OFFSET(0xA85F320)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PlayerPvpCareer___c_TypeDefinitionIndex = 60778;

	class MatchThreeV2PlayerPvpCareer___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_D17272E82AE804C2_102*, ::System::UInt32>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_102*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PlayerPvpCareer___c_TypeDefinitionIndex)->GetStaticField(0x2A780);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_102*, ::Enum_3_63CAB6C405C6C7B1_1>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_102*, ::Enum_3_63CAB6C405C6C7B1_1>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PlayerPvpCareer___c_TypeDefinitionIndex)->GetStaticField(0x2A788);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_102*, ::System::UInt32>** StaticGet___9__18_1()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_102*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PlayerPvpCareer___c_TypeDefinitionIndex)->GetStaticField(0x2A790);
		}
		static ::RPG::Client::MatchThreeV2PlayerPvpCareer___c** StaticGet___9()
		{
			return (::RPG::Client::MatchThreeV2PlayerPvpCareer___c**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PlayerPvpCareer___c_TypeDefinitionIndex)->GetStaticField(0x2A798);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_102*, ::Enum_3_63CAB6C405C6C7B1_1>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_102*, ::Enum_3_63CAB6C405C6C7B1_1>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PlayerPvpCareer___c_TypeDefinitionIndex)->GetStaticField(0x2A7A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__CTOR_OFFSET))(this);
		}

		::Enum_3_63CAB6C405C6C7B1_1 _SyncSoloStatistics_b__18_0(::Class_1_D17272E82AE804C2_102* pair)
		{
			return ((::Enum_3_63CAB6C405C6C7B1_1(*)(::PVOID, ::Class_1_D17272E82AE804C2_102*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCSOLOSTATISTICS_B__18_0_OFFSET))(this, pair);
		}

		::System::UInt32 _SyncSoloStatistics_b__18_1(::Class_1_D17272E82AE804C2_102* pair)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_D17272E82AE804C2_102*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCSOLOSTATISTICS_B__18_1_OFFSET))(this, pair);
		}

		::Enum_3_63CAB6C405C6C7B1_1 _SyncArenaStatistics_b__19_0(::Class_1_D17272E82AE804C2_102* pair)
		{
			return ((::Enum_3_63CAB6C405C6C7B1_1(*)(::PVOID, ::Class_1_D17272E82AE804C2_102*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCARENASTATISTICS_B__19_0_OFFSET))(this, pair);
		}

		::System::UInt32 _SyncArenaStatistics_b__19_1(::Class_1_D17272E82AE804C2_102* pair)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_D17272E82AE804C2_102*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCARENASTATISTICS_B__19_1_OFFSET))(this, pair);
		}
	};
}
