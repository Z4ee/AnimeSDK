#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetMonsterStanceBarStyle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1DBC99898268989D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC27BC20)
#define CLASS_2_1DBC99898268989D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC27BC60)
#define CLASS_2_1DBC99898268989D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC27C060)
#define CLASS_2_1DBC99898268989D_TICK_OFFSET UNITYSDK_OFFSET(0xC27C0B0)
#define CLASS_2_1DBC99898268989D__CTOR_OFFSET UNITYSDK_OFFSET(0xC27BC10)

inline static constexpr unsigned int Class_2_1DBC99898268989D_TypeDefinitionIndex = 56415;

class Class_2_1DBC99898268989D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetMonsterStanceBarStyle* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMonsterStanceBarStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMonsterStanceBarStyle*))((::PBYTE)hIl2Cpp + CLASS_2_1DBC99898268989D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DBC99898268989D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DBC99898268989D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DBC99898268989D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1DBC99898268989D_TICK_OFFSET))(this, a1);
	}
};
