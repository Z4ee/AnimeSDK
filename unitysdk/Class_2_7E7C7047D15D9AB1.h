#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_415;
namespace RPG::GameCore { class SetModifierValueByBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7E7C7047D15D9AB1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F2C920)
#define CLASS_2_7E7C7047D15D9AB1_METHOD_2_02B490C9189918DC_OFFSET UNITYSDK_OFFSET(0x18F2CB80)
#define CLASS_2_7E7C7047D15D9AB1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18F2C960)
#define CLASS_2_7E7C7047D15D9AB1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18F2CCA0)
#define CLASS_2_7E7C7047D15D9AB1_TICK_OFFSET UNITYSDK_OFFSET(0x18F2CCF0)
#define CLASS_2_7E7C7047D15D9AB1__CTOR_OFFSET UNITYSDK_OFFSET(0x18F2C910)

inline static constexpr unsigned int Class_2_7E7C7047D15D9AB1_TypeDefinitionIndex = 55729;

class Class_2_7E7C7047D15D9AB1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetModifierValueByBehaviorFlag* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::Int32 EKIMKMCPHGC; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetModifierValueByBehaviorFlag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetModifierValueByBehaviorFlag*))((::PBYTE)hIl2Cpp + CLASS_2_7E7C7047D15D9AB1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E7C7047D15D9AB1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E7C7047D15D9AB1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E7C7047D15D9AB1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7E7C7047D15D9AB1_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_02B490C9189918DC(::Class_0_16E4307DCC419505_415* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_415*))((::PBYTE)hIl2Cpp + CLASS_2_7E7C7047D15D9AB1_METHOD_2_02B490C9189918DC_OFFSET))(this, a1);
	}
};
