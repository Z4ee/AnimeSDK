#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_01F4079471966D8C;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropAnimState; }

#define CLASS_2_0E1C32772EE39E59_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18CB4890)
#define CLASS_2_0E1C32772EE39E59_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18CB49F0)
#define CLASS_2_0E1C32772EE39E59_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18CB4A90)
#define CLASS_2_0E1C32772EE39E59_TICK_OFFSET UNITYSDK_OFFSET(0x18CB4B60)
#define CLASS_2_0E1C32772EE39E59__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB4750)

inline static constexpr unsigned int Class_2_0E1C32772EE39E59_TypeDefinitionIndex = 56000;

class Class_2_0E1C32772EE39E59 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitPropAnimState* OFKGLJOAMLD; // 0x18
	::Class_3_07C3C4D2990C49EE* PIKHPDDHLHO; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::Class_2_01F4079471966D8C* ODHAMLOAKEE; // 0x30
	::Class_3_07C3C4D2990C49EE* FOFLNCAEEOM; // 0x38
	::System::Int32 HFHILHOCPNL; // 0x40
	::System::Boolean CFDILKDNDPO; // 0x44
	::System::Single JFKEJBNEINL; // 0x48

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
