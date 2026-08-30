#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_6;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B62C800)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B62C840)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C__GET_MEMBERCOUNTEXCEPTDUMMY_B__18_0_OFFSET UNITYSDK_OFFSET(0x1B62C850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleGridFightTeamTraitData___c_TypeDefinitionIndex = 56473;

	class BattleGridFightTeamTraitData___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::BattleGridFightTeamTraitData___c** StaticGet___9()
		{
			return (::RPG::GameCore::BattleGridFightTeamTraitData___c**)Il2CppClass::FromTypeDefinitionIndex(BattleGridFightTeamTraitData___c_TypeDefinitionIndex)->GetStaticField(0x666E0);
		}
		static ::System::Func_2<::Class_1_1CBA230307F9C289_6*, ::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::Class_1_1CBA230307F9C289_6*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BattleGridFightTeamTraitData___c_TypeDefinitionIndex)->GetStaticField(0x666E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_MemberCountExceptDummy_b__18_0(::Class_1_1CBA230307F9C289_6* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1CBA230307F9C289_6*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C__GET_MEMBERCOUNTEXCEPTDUMMY_B__18_0_OFFSET))(this, a1);
		}
	};
}
