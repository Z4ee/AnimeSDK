#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DestroyAllNPCMonsterInArea; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D3485ABA22C7404A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x174D0890)
#define CLASS_2_D3485ABA22C7404A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x174D08D0)
#define CLASS_2_D3485ABA22C7404A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x174D0C40)
#define CLASS_2_D3485ABA22C7404A_TICK_OFFSET UNITYSDK_OFFSET(0x174D0C90)
#define CLASS_2_D3485ABA22C7404A__CTOR_OFFSET UNITYSDK_OFFSET(0x174D0880)

inline static constexpr unsigned int Class_2_D3485ABA22C7404A_TypeDefinitionIndex = 50343;

class Class_2_D3485ABA22C7404A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::DestroyAllNPCMonsterInArea* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DestroyAllNPCMonsterInArea* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DestroyAllNPCMonsterInArea*))((::PBYTE)hIl2Cpp + CLASS_2_D3485ABA22C7404A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3485ABA22C7404A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3485ABA22C7404A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3485ABA22C7404A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D3485ABA22C7404A_TICK_OFFSET))(this, a1);
	}
};
