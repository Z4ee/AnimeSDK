#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D508B1981C147C96;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x946ED80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x946EDC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C___DOFORCEREFRESHDICEBATTLEGAMEPAGE_B__7_0_OFFSET UNITYSDK_OFFSET(0x946EDD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C___DOFORCEREFRESHDICEBATTLEGAMEPAGE_B__7_1_OFFSET UNITYSDK_OFFSET(0x946EDF0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBattleContext___c_TypeDefinitionIndex = 61891;

	class DiceCombatBattleContext___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_D508B1981C147C96*, ::System::Boolean>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::Class_1_D508B1981C147C96*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBattleContext___c_TypeDefinitionIndex)->GetStaticField(0x44740);
		}
		static ::System::Func_2<::Class_1_D508B1981C147C96*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::Class_1_D508B1981C147C96*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBattleContext___c_TypeDefinitionIndex)->GetStaticField(0x44748);
		}
		static ::RPG::Client::DiceCombat::DiceCombatBattleContext___c** StaticGet___9()
		{
			return (::RPG::Client::DiceCombat::DiceCombatBattleContext___c**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBattleContext___c_TypeDefinitionIndex)->GetStaticField(0x44750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __DoForceRefreshDiceBattleGamePage_b__7_0(::Class_1_D508B1981C147C96* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_D508B1981C147C96*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C___DOFORCEREFRESHDICEBATTLEGAMEPAGE_B__7_0_OFFSET))(this, x);
		}

		::System::Boolean __DoForceRefreshDiceBattleGamePage_b__7_1(::Class_1_D508B1981C147C96* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_D508B1981C147C96*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C___DOFORCEREFRESHDICEBATTLEGAMEPAGE_B__7_1_OFFSET))(this, x);
		}
	};
}
