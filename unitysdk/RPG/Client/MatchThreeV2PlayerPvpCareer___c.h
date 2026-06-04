#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CAB6C405C6C7B1_2.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_103;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBFAA770)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBFAA7B0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCARENASTATISTICS_B__19_0_OFFSET UNITYSDK_OFFSET(0xBFAA800)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCARENASTATISTICS_B__19_1_OFFSET UNITYSDK_OFFSET(0xBFAA820)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCSOLOSTATISTICS_B__18_0_OFFSET UNITYSDK_OFFSET(0xBFAA7C0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCSOLOSTATISTICS_B__18_1_OFFSET UNITYSDK_OFFSET(0xBFAA7E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PlayerPvpCareer___c_TypeDefinitionIndex = 61712;

	class MatchThreeV2PlayerPvpCareer___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MatchThreeV2PlayerPvpCareer___c** StaticGet___9()
		{
			return (::RPG::Client::MatchThreeV2PlayerPvpCareer___c**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PlayerPvpCareer___c_TypeDefinitionIndex)->GetStaticField(0x56BB0);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_103*, ::Enum_3_63CAB6C405C6C7B1_2>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_103*, ::Enum_3_63CAB6C405C6C7B1_2>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PlayerPvpCareer___c_TypeDefinitionIndex)->GetStaticField(0x56BB8);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_103*, ::Enum_3_63CAB6C405C6C7B1_2>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_103*, ::Enum_3_63CAB6C405C6C7B1_2>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PlayerPvpCareer___c_TypeDefinitionIndex)->GetStaticField(0x56BC0);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_103*, ::System::UInt32>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_103*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PlayerPvpCareer___c_TypeDefinitionIndex)->GetStaticField(0x56BC8);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_103*, ::System::UInt32>** StaticGet___9__18_1()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_103*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PlayerPvpCareer___c_TypeDefinitionIndex)->GetStaticField(0x56BD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__CTOR_OFFSET))(this);
		}

		::Enum_3_63CAB6C405C6C7B1_2 _SyncSoloStatistics_b__18_0(::Class_1_D17272E82AE804C2_103* a1)
		{
			return ((::Enum_3_63CAB6C405C6C7B1_2(*)(::PVOID, ::Class_1_D17272E82AE804C2_103*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCSOLOSTATISTICS_B__18_0_OFFSET))(this, a1);
		}

		::System::UInt32 _SyncSoloStatistics_b__18_1(::Class_1_D17272E82AE804C2_103* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_D17272E82AE804C2_103*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCSOLOSTATISTICS_B__18_1_OFFSET))(this, a1);
		}

		::Enum_3_63CAB6C405C6C7B1_2 _SyncArenaStatistics_b__19_0(::Class_1_D17272E82AE804C2_103* a1)
		{
			return ((::Enum_3_63CAB6C405C6C7B1_2(*)(::PVOID, ::Class_1_D17272E82AE804C2_103*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCARENASTATISTICS_B__19_0_OFFSET))(this, a1);
		}

		::System::UInt32 _SyncArenaStatistics_b__19_1(::Class_1_D17272E82AE804C2_103* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_D17272E82AE804C2_103*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCARENASTATISTICS_B__19_1_OFFSET))(this, a1);
		}
	};
}
