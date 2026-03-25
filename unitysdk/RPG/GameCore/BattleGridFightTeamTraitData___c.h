#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_3;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA885C00)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA885C40)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C__GET_MEMBERCOUNTEXCEPTDUMMY_B__10_0_OFFSET UNITYSDK_OFFSET(0xA885C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleGridFightTeamTraitData___c_TypeDefinitionIndex = 45118;

	class BattleGridFightTeamTraitData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_352A8B3482C80E7D_3*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::Class_1_352A8B3482C80E7D_3*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BattleGridFightTeamTraitData___c_TypeDefinitionIndex)->GetStaticField(0x449D0);
		}
		static ::RPG::GameCore::BattleGridFightTeamTraitData___c** StaticGet___9()
		{
			return (::RPG::GameCore::BattleGridFightTeamTraitData___c**)Il2CppClass::FromTypeDefinitionIndex(BattleGridFightTeamTraitData___c_TypeDefinitionIndex)->GetStaticField(0x449D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_MemberCountExceptDummy_b__10_0(::Class_1_352A8B3482C80E7D_3* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_352A8B3482C80E7D_3*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C__GET_MEMBERCOUNTEXCEPTDUMMY_B__10_0_OFFSET))(this, x);
		}
	};
}
