#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AvdMonitorPlayerRun; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_0466D90D45BB9334_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1419A160)
#define CLASS_2_0466D90D45BB9334_METHOD_2_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0x1419A500)
#define CLASS_2_0466D90D45BB9334_METHOD_2_C74639398F739FDA_OFFSET UNITYSDK_OFFSET(0x1419A970)
#define CLASS_2_0466D90D45BB9334_METHOD_2_E6451DD1ECA91329_OFFSET UNITYSDK_OFFSET(0x1419A690)
#define CLASS_2_0466D90D45BB9334_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1419A270)
#define CLASS_2_0466D90D45BB9334_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1419A3F0)
#define CLASS_2_0466D90D45BB9334_TICK_OFFSET UNITYSDK_OFFSET(0x1419A480)
#define CLASS_2_0466D90D45BB9334__CTOR_OFFSET UNITYSDK_OFFSET(0x1419A0D0)

inline static constexpr unsigned int Class_2_0466D90D45BB9334_TypeDefinitionIndex = 49131;

class Class_2_0466D90D45BB9334 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::RPG::GameCore::AvdMonitorPlayerRun* Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x38
	::System::Single Field_2_5; // 0x3C
	::System::UInt32 Field_2_6; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AvdMonitorPlayerRun* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AvdMonitorPlayerRun*))((::PBYTE)hIl2Cpp + CLASS_2_0466D90D45BB9334__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0466D90D45BB9334_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0466D90D45BB9334_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0466D90D45BB9334_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0466D90D45BB9334_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_E6451DD1ECA91329(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0466D90D45BB9334_METHOD_2_E6451DD1ECA91329_OFFSET))(this, a1);
	}

	::System::Void Method_2_7998F8CA1E002410(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0466D90D45BB9334_METHOD_2_7998F8CA1E002410_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74639398F739FDA(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_0466D90D45BB9334_METHOD_2_C74639398F739FDA_OFFSET))(this, a1);
	}
};
