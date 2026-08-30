#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_61FB8D394B353477;
namespace RPG::Client::FateRin::Battle { class PrepareBattleTalkEntryViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBD99B0)
#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKVIEWMODEL___C__CREATEBYHOUGUMAPFIGHT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1CBD9A00)
#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBD99F0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int PrepareBattleTalkViewModel___c_TypeDefinitionIndex = 79661;

	class PrepareBattleTalkViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_61FB8D394B353477*, ::RPG::Client::FateRin::Battle::PrepareBattleTalkEntryViewModel*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::Class_1_61FB8D394B353477*, ::RPG::Client::FateRin::Battle::PrepareBattleTalkEntryViewModel*>**)Il2CppClass::FromTypeDefinitionIndex(PrepareBattleTalkViewModel___c_TypeDefinitionIndex)->GetStaticField(0x2380);
		}
		static ::RPG::Client::FateRin::Battle::PrepareBattleTalkViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::Battle::PrepareBattleTalkViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(PrepareBattleTalkViewModel___c_TypeDefinitionIndex)->GetStaticField(0x2388);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::PrepareBattleTalkEntryViewModel* _CreateByHouguMapFight_b__2_0(::Class_1_61FB8D394B353477* a1)
		{
			return ((::RPG::Client::FateRin::Battle::PrepareBattleTalkEntryViewModel*(*)(::PVOID, ::Class_1_61FB8D394B353477*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKVIEWMODEL___C__CREATEBYHOUGUMAPFIGHT_B__2_0_OFFSET))(this, a1);
		}
	};
}
