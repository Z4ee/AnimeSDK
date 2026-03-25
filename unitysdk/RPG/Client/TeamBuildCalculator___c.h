#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_93D6797E7CD6923E;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_TEAMBUILDCALCULATOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA565A60)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA565AA0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___C__GETTEAMBUILDSYNOPSIS_B__18_1_OFFSET UNITYSDK_OFFSET(0xA565AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildCalculator___c_TypeDefinitionIndex = 55578;

	class TeamBuildCalculator___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_93D6797E7CD6923E*, ::System::Boolean>** StaticGet___9__18_1()
		{
			return (::System::Func_2<::Class_1_93D6797E7CD6923E*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TeamBuildCalculator___c_TypeDefinitionIndex)->GetStaticField(0x2C290);
		}
		static ::RPG::Client::TeamBuildCalculator___c** StaticGet___9()
		{
			return (::RPG::Client::TeamBuildCalculator___c**)Il2CppClass::FromTypeDefinitionIndex(TeamBuildCalculator___c_TypeDefinitionIndex)->GetStaticField(0x2C298);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTeamBuildSynopsis_b__18_1(::Class_1_93D6797E7CD6923E* candidatePool)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_93D6797E7CD6923E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___C__GETTEAMBUILDSYNOPSIS_B__18_1_OFFSET))(this, candidatePool);
		}
	};
}
