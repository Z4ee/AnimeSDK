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

#define CLASS_1_14033F1652615DE2_METHOD_1_2A64E8FC9C9D79EC_OFFSET UNITYSDK_OFFSET(0xBECDAC0)
#define CLASS_1_14033F1652615DE2_METHOD_1_4A331CE85F0D36B0_OFFSET UNITYSDK_OFFSET(0xBECDF70)
#define CLASS_1_14033F1652615DE2_METHOD_1_921144592899FDA1_OFFSET UNITYSDK_OFFSET(0xBECD670)
#define CLASS_1_14033F1652615DE2_METHOD_1_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0xBECD520)
#define CLASS_1_14033F1652615DE2_METHOD_1_9A3C95A4612D5B0A_OFFSET UNITYSDK_OFFSET(0xBECDEB0)
#define CLASS_1_14033F1652615DE2_METHOD_1_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0xBECCF60)
#define CLASS_1_14033F1652615DE2_METHOD_1_AF3417BD0D6559DE_OFFSET UNITYSDK_OFFSET(0xBECD2B0)
#define CLASS_1_14033F1652615DE2_METHOD_1_CBB1EF880D8D68A0_OFFSET UNITYSDK_OFFSET(0xBECE060)
#define CLASS_1_14033F1652615DE2_METHOD_1_DA51442A67B7C2B2_OFFSET UNITYSDK_OFFSET(0xBECD6D0)
#define CLASS_1_14033F1652615DE2_METHOD_1_ED6CF54BFD44815E_OFFSET UNITYSDK_OFFSET(0xBECD0C0)
#define CLASS_1_14033F1652615DE2_METHOD_1_F3BA259643FD821A_OFFSET UNITYSDK_OFFSET(0xBECD220)
#define CLASS_1_14033F1652615DE2_METHOD_1_F4607FE808F8FB23_OFFSET UNITYSDK_OFFSET(0xBECD780)
#define CLASS_1_14033F1652615DE2_METHOD_1_FE5F530812452905_OFFSET UNITYSDK_OFFSET(0xBECCF10)
#define CLASS_1_14033F1652615DE2__CTOR_OFFSET UNITYSDK_OFFSET(0xBECCF00)

inline static constexpr unsigned int Class_1_14033F1652615DE2_TypeDefinitionIndex = 56221;

class Class_1_14033F1652615DE2 : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* OBKLPOKMIEA; // 0x10
	::Il2CppArray<::RPG::GameCore::BattleCardSelectItemGroup*>* LCFLKHFNCAL; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_14033F1652615DE2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_FE5F530812452905(::Il2CppArray<::RPG::GameCore::BattleCardSelectItemGroup*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::BattleCardSelectItemGroup*>*))((::PBYTE)hIl2Cpp + CLASS_1_14033F1652615DE2_METHOD_1_FE5F530812452905_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED6CF54BFD44815E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14033F1652615DE2_METHOD_1_ED6CF54BFD44815E_OFFSET))(this, a1);
	}

	::System::Void Method_1_F3BA259643FD821A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14033F1652615DE2_METHOD_1_F3BA259643FD821A_OFFSET))(this, a1);
	}

	::System::Void Method_1_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14033F1652615DE2_METHOD_1_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_1_AF3417BD0D6559DE(::RPG::GameCore::BattleCardSelectItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleCardSelectItem*))((::PBYTE)hIl2Cpp + CLASS_1_14033F1652615DE2_METHOD_1_AF3417BD0D6559DE_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1C7122184516C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14033F1652615DE2_METHOD_1_A1C7122184516C18_OFFSET))(this);
	}

	::RPG::GameCore::BattleCardSelectItemGroup* Method_1_4A331CE85F0D36B0()
	{
		return ((::RPG::GameCore::BattleCardSelectItemGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14033F1652615DE2_METHOD_1_4A331CE85F0D36B0_OFFSET))(this);
	}

	::System::Void Method_1_CBB1EF880D8D68A0(::RPG::GameCore::BattleCardSelectItemGroup* a1, ::RPG::GameCore::FixPoint& a2, ::RPG::GameCore::BattleCardSelectItemGroup*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleCardSelectItemGroup*, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::BattleCardSelectItemGroup*&))((::PBYTE)hIl2Cpp + CLASS_1_14033F1652615DE2_METHOD_1_CBB1EF880D8D68A0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9A3C95A4612D5B0A(::RPG::GameCore::BattleCardSelectItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleCardSelectItem*))((::PBYTE)hIl2Cpp + CLASS_1_14033F1652615DE2_METHOD_1_9A3C95A4612D5B0A_OFFSET))(this, a1);
	}

	::System::Void Method_1_921144592899FDA1(::RPG::GameCore::BattleCardSelectItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleCardSelectItem*))((::PBYTE)hIl2Cpp + CLASS_1_14033F1652615DE2_METHOD_1_921144592899FDA1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4607FE808F8FB23(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::MazeBuffRow* a2, ::RPG::GameCore::BattleCardSelectItem* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::MazeBuffRow*, ::RPG::GameCore::BattleCardSelectItem*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_14033F1652615DE2_METHOD_1_F4607FE808F8FB23_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_2A64E8FC9C9D79EC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::MazeBuffRow* a2, ::RPG::GameCore::BattleCardSelectItem* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::MazeBuffRow*, ::RPG::GameCore::BattleCardSelectItem*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_14033F1652615DE2_METHOD_1_2A64E8FC9C9D79EC_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::GameEntity* Method_1_DA51442A67B7C2B2(::RPG::GameCore::BattleCardSelectItem* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::BattleCardSelectItem*))((::PBYTE)hIl2Cpp + CLASS_1_14033F1652615DE2_METHOD_1_DA51442A67B7C2B2_OFFSET))(this, a1);
	}
};
