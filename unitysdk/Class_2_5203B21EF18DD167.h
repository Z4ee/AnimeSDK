#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class EntityOnEraFlippedListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5203B21EF18DD167_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A01F80)
#define CLASS_2_5203B21EF18DD167_METHOD_2_DCA0D07D90B1A2A3_1_OFFSET UNITYSDK_OFFSET(0x13A02510)
#define CLASS_2_5203B21EF18DD167_METHOD_2_DCA0D07D90B1A2A3_OFFSET UNITYSDK_OFFSET(0x13A021C0)
#define CLASS_2_5203B21EF18DD167_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A01BC0)
#define CLASS_2_5203B21EF18DD167_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13A01DB0)
#define CLASS_2_5203B21EF18DD167_TICK_OFFSET UNITYSDK_OFFSET(0x13A02860)
#define CLASS_2_5203B21EF18DD167__CTOR_OFFSET UNITYSDK_OFFSET(0x13A019F0)

inline static constexpr unsigned int Class_2_5203B21EF18DD167_TypeDefinitionIndex = 49359;

class Class_2_5203B21EF18DD167 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::RPG::GameCore::EntityOnEraFlippedListener* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38
	::Class_3_07C3C4D2990C49EE* Field_2_5; // 0x40
	::System::Boolean Field_2_6; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EntityOnEraFlippedListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EntityOnEraFlippedListener*))((::PBYTE)hIl2Cpp + CLASS_2_5203B21EF18DD167__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5203B21EF18DD167_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5203B21EF18DD167_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5203B21EF18DD167_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_DCA0D07D90B1A2A3(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_5203B21EF18DD167_METHOD_2_DCA0D07D90B1A2A3_OFFSET))(this, a1);
	}

	::System::Void Method_2_DCA0D07D90B1A2A3_1(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_5203B21EF18DD167_METHOD_2_DCA0D07D90B1A2A3_1_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5203B21EF18DD167_TICK_OFFSET))(this, a1);
	}
};
