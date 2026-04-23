#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_382;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class AvdMonitorPlayerRun; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_0466D90D45BB9334_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB20BBD0)
#define CLASS_2_0466D90D45BB9334_METHOD_2_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0xB20BF40)
#define CLASS_2_0466D90D45BB9334_METHOD_2_8EFA7AE8C875AA71_OFFSET UNITYSDK_OFFSET(0xB20C3B0)
#define CLASS_2_0466D90D45BB9334_METHOD_2_E6451DD1ECA91329_OFFSET UNITYSDK_OFFSET(0xB20C0D0)
#define CLASS_2_0466D90D45BB9334_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB20BCD0)
#define CLASS_2_0466D90D45BB9334_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB20BE30)
#define CLASS_2_0466D90D45BB9334_TICK_OFFSET UNITYSDK_OFFSET(0xB20BEC0)
#define CLASS_2_0466D90D45BB9334__CTOR_OFFSET UNITYSDK_OFFSET(0xB20BB40)

inline static constexpr unsigned int Class_2_0466D90D45BB9334_TypeDefinitionIndex = 48504;

class Class_2_0466D90D45BB9334 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x18
	::System::String* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::RPG::GameCore::AvdMonitorPlayerRun* Field_2_1; // 0x30
	::System::UInt32 Field_2_4; // 0x38
	::System::Single Field_2_5; // 0x3C
	::System::Boolean Field_2_6; // 0x40

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

	::System::Void Method_2_8EFA7AE8C875AA71(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_0466D90D45BB9334_METHOD_2_8EFA7AE8C875AA71_OFFSET))(this, a1);
	}
};
