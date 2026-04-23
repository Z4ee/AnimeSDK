#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_01F4079471966D8C;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropAnimState; }

#define CLASS_2_0E1C32772EE39E59_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DCAB30)
#define CLASS_2_0E1C32772EE39E59_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11DCABC0)
#define CLASS_2_0E1C32772EE39E59_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11DCAC60)
#define CLASS_2_0E1C32772EE39E59_TICK_OFFSET UNITYSDK_OFFSET(0x11DCAD30)
#define CLASS_2_0E1C32772EE39E59__CTOR_OFFSET UNITYSDK_OFFSET(0x11DCA9F0)

inline static constexpr unsigned int Class_2_0E1C32772EE39E59_TypeDefinitionIndex = 51461;

class Class_2_0E1C32772EE39E59 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::Class_2_01F4079471966D8C* Field_2_5; // 0x30
	::RPG::GameCore::WaitPropAnimState* Field_2_0; // 0x38
	::System::Int32 Field_2_4; // 0x40
	::System::Boolean Field_2_6; // 0x44
	::System::Single Field_2_7; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropAnimState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropAnimState*))((::PBYTE)hIl2Cpp + CLASS_2_0E1C32772EE39E59__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E1C32772EE39E59_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E1C32772EE39E59_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E1C32772EE39E59_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0E1C32772EE39E59_TICK_OFFSET))(this, a1);
	}
};
