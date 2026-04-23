#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_819F0DD6CB28FAB6;
class Class_1_93D6797E7CD6923E;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_TEAMBUILDCALCULATOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2A3C40)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB2A3C80)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___C__GETTEAMBUILDSYNOPSIS_B__25_1_OFFSET UNITYSDK_OFFSET(0xB2A3CB0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___C___FILLWITHMAINAVATARS_B__20_0_OFFSET UNITYSDK_OFFSET(0xB2A3C90)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildCalculator___c_TypeDefinitionIndex = 62772;

	class TeamBuildCalculator___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_93D6797E7CD6923E*, ::System::Boolean>** StaticGet___9__25_1()
		{
			return (::System::Func_2<::Class_1_93D6797E7CD6923E*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TeamBuildCalculator___c_TypeDefinitionIndex)->GetStaticField(0x33020);
		}
		static ::RPG::Client::TeamBuildCalculator___c** StaticGet___9()
		{
			return (::RPG::Client::TeamBuildCalculator___c**)Il2CppClass::FromTypeDefinitionIndex(TeamBuildCalculator___c_TypeDefinitionIndex)->GetStaticField(0x33028);
		}
		static ::System::Action_1<::Class_1_819F0DD6CB28FAB6*>** StaticGet___9__20_0()
		{
			return (::System::Action_1<::Class_1_819F0DD6CB28FAB6*>**)Il2CppClass::FromTypeDefinitionIndex(TeamBuildCalculator___c_TypeDefinitionIndex)->GetStaticField(0x33030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___C__CTOR_OFFSET))(this);
		}

		::System::Void __FillWithMainAvatars_b__20_0(::Class_1_819F0DD6CB28FAB6* builder)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_819F0DD6CB28FAB6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___C___FILLWITHMAINAVATARS_B__20_0_OFFSET))(this, builder);
		}

		::System::Boolean _GetTeamBuildSynopsis_b__25_1(::Class_1_93D6797E7CD6923E* candidatePool)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_93D6797E7CD6923E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___C__GETTEAMBUILDSYNOPSIS_B__25_1_OFFSET))(this, candidatePool);
		}
	};
}
