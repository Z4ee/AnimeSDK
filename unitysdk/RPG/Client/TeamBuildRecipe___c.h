#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_2;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_TEAMBUILDRECIPE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A386870)
#define RPG_CLIENT_TEAMBUILDRECIPE___C__CREATE_B__13_0_OFFSET UNITYSDK_OFFSET(0x1A3868C0)
#define RPG_CLIENT_TEAMBUILDRECIPE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3868B0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildRecipe___c_TypeDefinitionIndex = 68089;

	class TeamBuildRecipe___c : public ::System::Object
	{
	public:
		static ::RPG::Client::TeamBuildRecipe___c** StaticGet___9()
		{
			return (::RPG::Client::TeamBuildRecipe___c**)Il2CppClass::FromTypeDefinitionIndex(TeamBuildRecipe___c_TypeDefinitionIndex)->GetStaticField(0x435D0);
		}
		static ::System::Func_2<::Class_1_45BB92167AED63A0_2*, ::System::UInt32>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::Class_1_45BB92167AED63A0_2*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TeamBuildRecipe___c_TypeDefinitionIndex)->GetStaticField(0x435D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _Create_b__13_0(::Class_1_45BB92167AED63A0_2* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_45BB92167AED63A0_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___C__CREATE_B__13_0_OFFSET))(this, a1);
		}
	};
}
