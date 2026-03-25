#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_9D4DD2F4235F8658;
class Class_2_E2910CE9CBBA0DE5;
namespace RPG::GameCore { class AdvRunStateTree; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4436360A3A829112_DISPOSE_OFFSET UNITYSDK_OFFSET(0x88A2B60)
#define CLASS_2_4436360A3A829112_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x88A2C20)
#define CLASS_2_4436360A3A829112_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x88A2D00)
#define CLASS_2_4436360A3A829112_TICK_OFFSET UNITYSDK_OFFSET(0x88A2DE0)
#define CLASS_2_4436360A3A829112__CTOR_OFFSET UNITYSDK_OFFSET(0x88A28E0)

inline static constexpr unsigned int Class_2_4436360A3A829112_TypeDefinitionIndex = 42497;

class Class_2_4436360A3A829112 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_3; // 0x18
	::Class_2_9D4DD2F4235F8658* Field_2_1; // 0x20
	::Class_2_E2910CE9CBBA0DE5* Field_2_2; // 0x28
	::RPG::GameCore::AdvRunStateTree* Field_2_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvRunStateTree* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvRunStateTree*))((::PBYTE)hIl2Cpp + CLASS_2_4436360A3A829112__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4436360A3A829112_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4436360A3A829112_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4436360A3A829112_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4436360A3A829112_TICK_OFFSET))(this, a1);
	}
};
