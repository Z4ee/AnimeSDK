#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AvdMonitorPlayerRun; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_0466D90D45BB9334_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B96E60)
#define CLASS_2_0466D90D45BB9334_METHOD_2_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0x18B97260)
#define CLASS_2_0466D90D45BB9334_METHOD_2_C74639398F739FDA_OFFSET UNITYSDK_OFFSET(0x18B976D0)
#define CLASS_2_0466D90D45BB9334_METHOD_2_E6451DD1ECA91329_OFFSET UNITYSDK_OFFSET(0x18B973F0)
#define CLASS_2_0466D90D45BB9334_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18B96FD0)
#define CLASS_2_0466D90D45BB9334_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18B97150)
#define CLASS_2_0466D90D45BB9334_TICK_OFFSET UNITYSDK_OFFSET(0x18B971E0)
#define CLASS_2_0466D90D45BB9334__CTOR_OFFSET UNITYSDK_OFFSET(0x18B96DD0)

inline static constexpr unsigned int Class_2_0466D90D45BB9334_TypeDefinitionIndex = 52808;

class Class_2_0466D90D45BB9334 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AvdMonitorPlayerRun* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_3_07C3C4D2990C49EE* PNMJOFIDEDI; // 0x28
	::System::String* KFOFDNOJILO; // 0x30
	::System::UInt32 ANEENHPKAIM; // 0x38
	::System::Single GAAOODNCNEJ; // 0x3C
	::System::Boolean HNKGHLKPALC; // 0x40

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

	::System::Void Method_2_C74639398F739FDA(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_0466D90D45BB9334_METHOD_2_C74639398F739FDA_OFFSET))(this, a1);
	}
};
