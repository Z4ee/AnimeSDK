#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class IncreaseMissionCustomValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6E04FE5A8FEF450B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16417D40)
#define CLASS_2_6E04FE5A8FEF450B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16417D80)
#define CLASS_2_6E04FE5A8FEF450B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16417DD0)
#define CLASS_2_6E04FE5A8FEF450B_TICK_OFFSET UNITYSDK_OFFSET(0x16417E20)
#define CLASS_2_6E04FE5A8FEF450B__CTOR_OFFSET UNITYSDK_OFFSET(0x16417D30)

inline static constexpr unsigned int Class_2_6E04FE5A8FEF450B_TypeDefinitionIndex = 50532;

class Class_2_6E04FE5A8FEF450B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::IncreaseMissionCustomValue* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::IncreaseMissionCustomValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::IncreaseMissionCustomValue*))((::PBYTE)hIl2Cpp + CLASS_2_6E04FE5A8FEF450B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E04FE5A8FEF450B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E04FE5A8FEF450B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E04FE5A8FEF450B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6E04FE5A8FEF450B_TICK_OFFSET))(this, a1);
	}
};
