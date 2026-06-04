#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_356;
namespace RPG::GameCore { class SetModifierValueByBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7E7C7047D15D9AB1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13909B10)
#define CLASS_2_7E7C7047D15D9AB1_METHOD_2_02B490C9189918DC_OFFSET UNITYSDK_OFFSET(0x13909D90)
#define CLASS_2_7E7C7047D15D9AB1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13909B50)
#define CLASS_2_7E7C7047D15D9AB1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13909EB0)
#define CLASS_2_7E7C7047D15D9AB1_TICK_OFFSET UNITYSDK_OFFSET(0x13909F00)
#define CLASS_2_7E7C7047D15D9AB1__CTOR_OFFSET UNITYSDK_OFFSET(0x13909B00)

inline static constexpr unsigned int Class_2_7E7C7047D15D9AB1_TypeDefinitionIndex = 51871;

class Class_2_7E7C7047D15D9AB1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::SetModifierValueByBehaviorFlag* Field_2_1; // 0x20
	::System::Int32 Field_2_2; // 0x28

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

	::System::Void Method_2_02B490C9189918DC(::Class_0_16E4307DCC419505_356* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_356*))((::PBYTE)hIl2Cpp + CLASS_2_7E7C7047D15D9AB1_METHOD_2_02B490C9189918DC_OFFSET))(this, a1);
	}
};
