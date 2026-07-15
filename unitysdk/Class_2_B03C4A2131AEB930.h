#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_A48F3719AA1CF200_4;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitUIOnTop; }
namespace System { class Object; }

#define CLASS_2_B03C4A2131AEB930_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17E93970)
#define CLASS_2_B03C4A2131AEB930_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x17E939C0)
#define CLASS_2_B03C4A2131AEB930_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x17E93D20)
#define CLASS_2_B03C4A2131AEB930_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x17E940F0)
#define CLASS_2_B03C4A2131AEB930_METHOD_2_ACD91D865E237BC7_OFFSET UNITYSDK_OFFSET(0x17E93AE0)
#define CLASS_2_B03C4A2131AEB930_METHOD_2_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x17E93F40)
#define CLASS_2_B03C4A2131AEB930_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x17E93EF0)
#define CLASS_2_B03C4A2131AEB930_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17E93A70)
#define CLASS_2_B03C4A2131AEB930_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17E93DE0)
#define CLASS_2_B03C4A2131AEB930_TICK_OFFSET UNITYSDK_OFFSET(0x17E93E30)
#define CLASS_2_B03C4A2131AEB930__CTOR_OFFSET UNITYSDK_OFFSET(0x17E93960)

inline static constexpr unsigned int Class_2_B03C4A2131AEB930_TypeDefinitionIndex = 56311;

class Class_2_B03C4A2131AEB930 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitUIOnTop* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x31

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitUIOnTop* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitUIOnTop*))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_ACD91D865E237BC7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930_METHOD_2_ACD91D865E237BC7_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930_METHOD_2_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930_METHOD_2_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_4*))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}
};
