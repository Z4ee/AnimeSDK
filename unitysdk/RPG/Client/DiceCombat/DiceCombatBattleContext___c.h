#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D508B1981C147C96;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB79B810)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB79B850)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C___DOFORCEREFRESHDICEBATTLEGAMEPAGE_B__5_0_OFFSET UNITYSDK_OFFSET(0xB79B860)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C___DOFORCEREFRESHDICEBATTLEGAMEPAGE_B__5_1_OFFSET UNITYSDK_OFFSET(0xB79B880)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBattleContext___c_TypeDefinitionIndex = 70608;

	class DiceCombatBattleContext___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_D508B1981C147C96*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::Class_1_D508B1981C147C96*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBattleContext___c_TypeDefinitionIndex)->GetStaticField(0x4910);
		}
		static ::System::Func_2<::Class_1_D508B1981C147C96*, ::System::Boolean>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::Class_1_D508B1981C147C96*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBattleContext___c_TypeDefinitionIndex)->GetStaticField(0x4918);
		}
		static ::RPG::Client::DiceCombat::DiceCombatBattleContext___c** StaticGet___9()
		{
			return (::RPG::Client::DiceCombat::DiceCombatBattleContext___c**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBattleContext___c_TypeDefinitionIndex)->GetStaticField(0x4920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __DoForceRefreshDiceBattleGamePage_b__5_0(::Class_1_D508B1981C147C96* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_D508B1981C147C96*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C___DOFORCEREFRESHDICEBATTLEGAMEPAGE_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean __DoForceRefreshDiceBattleGamePage_b__5_1(::Class_1_D508B1981C147C96* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_D508B1981C147C96*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C___DOFORCEREFRESHDICEBATTLEGAMEPAGE_B__5_1_OFFSET))(this, a1);
		}
	};
}
