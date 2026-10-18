#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityFinalityBattle::Level { class FinalityBattleBattleTargetItem; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_280B56AF77019A2F_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDA58CD0)
#define CLASS_1_280B56AF77019A2F_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDA58D10)
#define CLASS_1_280B56AF77019A2F_1___C__GETBATTLETARGETITEMSINBATTLE_B__2_0_OFFSET UNITYSDK_OFFSET(0xDA58D20)

inline static constexpr unsigned int Class_1_280B56AF77019A2F_1___c_TypeDefinitionIndex = 82100;

class Class_1_280B56AF77019A2F_1___c : public ::System::Object
{
public:
	static ::Class_1_280B56AF77019A2F_1___c** StaticGet___9()
	{
		return (::Class_1_280B56AF77019A2F_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_280B56AF77019A2F_1___c_TypeDefinitionIndex)->GetStaticField(0x53F00);
	}
	static ::System::Comparison_1<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleBattleTargetItem*>** StaticGet___9__2_0()
	{
		return (::System::Comparison_1<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleBattleTargetItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_280B56AF77019A2F_1___c_TypeDefinitionIndex)->GetStaticField(0x53F08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_280B56AF77019A2F_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280B56AF77019A2F_1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetBattleTargetItemsInBattle_b__2_0(::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleBattleTargetItem* a1, ::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleBattleTargetItem* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleBattleTargetItem*, ::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleBattleTargetItem*))((::PBYTE)hIl2Cpp + CLASS_1_280B56AF77019A2F_1___C__GETBATTLETARGETITEMSINBATTLE_B__2_0_OFFSET))(this, a1, a2);
	}
};
