#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleCardSelectItem; }
namespace RPG::GameCore { class BattleCardSelectItemGroup; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_DCDA150C051A028F_METHOD_1_4A331CE85F0D36B0_OFFSET UNITYSDK_OFFSET(0x15054BD0)
#define CLASS_1_DCDA150C051A028F_METHOD_1_921144592899FDA1_OFFSET UNITYSDK_OFFSET(0x150542F0)
#define CLASS_1_DCDA150C051A028F_METHOD_1_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x150541A0)
#define CLASS_1_DCDA150C051A028F_METHOD_1_9A3C95A4612D5B0A_OFFSET UNITYSDK_OFFSET(0x15054B10)
#define CLASS_1_DCDA150C051A028F_METHOD_1_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x15053C00)
#define CLASS_1_DCDA150C051A028F_METHOD_1_CBB1EF880D8D68A0_OFFSET UNITYSDK_OFFSET(0x15054CC0)
#define CLASS_1_DCDA150C051A028F_METHOD_1_CCF03C5168CA320D_OFFSET UNITYSDK_OFFSET(0x15053F60)
#define CLASS_1_DCDA150C051A028F_METHOD_1_DA51442A67B7C2B2_OFFSET UNITYSDK_OFFSET(0x15054350)
#define CLASS_1_DCDA150C051A028F_METHOD_1_ED6CF54BFD44815E_OFFSET UNITYSDK_OFFSET(0x15053D60)
#define CLASS_1_DCDA150C051A028F_METHOD_1_F3BA259643FD821A_OFFSET UNITYSDK_OFFSET(0x15053ED0)
#define CLASS_1_DCDA150C051A028F_METHOD_1_F4607FE808F8FB23_1_OFFSET UNITYSDK_OFFSET(0x15054740)
#define CLASS_1_DCDA150C051A028F_METHOD_1_F4607FE808F8FB23_OFFSET UNITYSDK_OFFSET(0x15054400)
#define CLASS_1_DCDA150C051A028F_METHOD_1_FE5F530812452905_OFFSET UNITYSDK_OFFSET(0x15053BB0)
#define CLASS_1_DCDA150C051A028F__CTOR_OFFSET UNITYSDK_OFFSET(0x15053BA0)

inline static constexpr unsigned int Class_1_DCDA150C051A028F_TypeDefinitionIndex = 53507;

class Class_1_DCDA150C051A028F : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* Field_1_0; // 0x10
	::Il2CppArray<::RPG::GameCore::BattleCardSelectItemGroup*>* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_DCDA150C051A028F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_FE5F530812452905(::Il2CppArray<::RPG::GameCore::BattleCardSelectItemGroup*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::BattleCardSelectItemGroup*>*))((::PBYTE)hIl2Cpp + CLASS_1_DCDA150C051A028F_METHOD_1_FE5F530812452905_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED6CF54BFD44815E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DCDA150C051A028F_METHOD_1_ED6CF54BFD44815E_OFFSET))(this, a1);
	}

	::System::Void Method_1_F3BA259643FD821A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DCDA150C051A028F_METHOD_1_F3BA259643FD821A_OFFSET))(this, a1);
	}

	::System::Void Method_1_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCDA150C051A028F_METHOD_1_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_1_CCF03C5168CA320D(::RPG::GameCore::BattleCardSelectItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleCardSelectItem*))((::PBYTE)hIl2Cpp + CLASS_1_DCDA150C051A028F_METHOD_1_CCF03C5168CA320D_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1C7122184516C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCDA150C051A028F_METHOD_1_A1C7122184516C18_OFFSET))(this);
	}

	::RPG::GameCore::BattleCardSelectItemGroup* Method_1_4A331CE85F0D36B0()
	{
		return ((::RPG::GameCore::BattleCardSelectItemGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCDA150C051A028F_METHOD_1_4A331CE85F0D36B0_OFFSET))(this);
	}

	::System::Void Method_1_CBB1EF880D8D68A0(::RPG::GameCore::BattleCardSelectItemGroup* a1, ::RPG::GameCore::FixPoint& a2, ::RPG::GameCore::BattleCardSelectItemGroup*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleCardSelectItemGroup*, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::BattleCardSelectItemGroup*&))((::PBYTE)hIl2Cpp + CLASS_1_DCDA150C051A028F_METHOD_1_CBB1EF880D8D68A0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9A3C95A4612D5B0A(::RPG::GameCore::BattleCardSelectItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleCardSelectItem*))((::PBYTE)hIl2Cpp + CLASS_1_DCDA150C051A028F_METHOD_1_9A3C95A4612D5B0A_OFFSET))(this, a1);
	}

	::System::Void Method_1_921144592899FDA1(::RPG::GameCore::BattleCardSelectItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleCardSelectItem*))((::PBYTE)hIl2Cpp + CLASS_1_DCDA150C051A028F_METHOD_1_921144592899FDA1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4607FE808F8FB23(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::MazeBuffRow* a2, ::RPG::GameCore::BattleCardSelectItem* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::MazeBuffRow*, ::RPG::GameCore::BattleCardSelectItem*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DCDA150C051A028F_METHOD_1_F4607FE808F8FB23_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F4607FE808F8FB23_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::MazeBuffRow* a2, ::RPG::GameCore::BattleCardSelectItem* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::MazeBuffRow*, ::RPG::GameCore::BattleCardSelectItem*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DCDA150C051A028F_METHOD_1_F4607FE808F8FB23_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::GameEntity* Method_1_DA51442A67B7C2B2(::RPG::GameCore::BattleCardSelectItem* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::BattleCardSelectItem*))((::PBYTE)hIl2Cpp + CLASS_1_DCDA150C051A028F_METHOD_1_DA51442A67B7C2B2_OFFSET))(this, a1);
	}
};
