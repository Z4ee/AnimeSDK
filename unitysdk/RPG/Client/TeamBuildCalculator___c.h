#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_185A388C9275732B;
class Class_1_93D6797E7CD6923E;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_TEAMBUILDCALCULATOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE1BFBE0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE1BFC20)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___C__GETTEAMBUILDSYNOPSIS_B__25_1_OFFSET UNITYSDK_OFFSET(0xE1BFC50)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___C___FILLWITHMAINAVATARS_B__20_0_OFFSET UNITYSDK_OFFSET(0xE1BFC30)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildCalculator___c_TypeDefinitionIndex = 68088;

	class TeamBuildCalculator___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_93D6797E7CD6923E*, ::System::Boolean>** StaticGet___9__25_1()
		{
			return (::System::Func_2<::Class_1_93D6797E7CD6923E*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TeamBuildCalculator___c_TypeDefinitionIndex)->GetStaticField(0x10360);
		}
		static ::System::Action_1<::Class_1_185A388C9275732B*>** StaticGet___9__20_0()
		{
			return (::System::Action_1<::Class_1_185A388C9275732B*>**)Il2CppClass::FromTypeDefinitionIndex(TeamBuildCalculator___c_TypeDefinitionIndex)->GetStaticField(0x10368);
		}
		static ::RPG::Client::TeamBuildCalculator___c** StaticGet___9()
		{
			return (::RPG::Client::TeamBuildCalculator___c**)Il2CppClass::FromTypeDefinitionIndex(TeamBuildCalculator___c_TypeDefinitionIndex)->GetStaticField(0x10370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___C__CTOR_OFFSET))(this);
		}

		::System::Void __FillWithMainAvatars_b__20_0(::Class_1_185A388C9275732B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_185A388C9275732B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___C___FILLWITHMAINAVATARS_B__20_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetTeamBuildSynopsis_b__25_1(::Class_1_93D6797E7CD6923E* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_93D6797E7CD6923E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___C__GETTEAMBUILDSYNOPSIS_B__25_1_OFFSET))(this, a1);
		}
	};
}
