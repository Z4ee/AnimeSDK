#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::GameCore { class AdvNpcCommanded; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D1A8EB5C1331A9C5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA204260)
#define CLASS_2_D1A8EB5C1331A9C5_METHOD_2_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0xA2042D0)
#define CLASS_2_D1A8EB5C1331A9C5_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xA204500)
#define CLASS_2_D1A8EB5C1331A9C5_METHOD_2_F1372164966A6952_OFFSET UNITYSDK_OFFSET(0xA204650)
#define CLASS_2_D1A8EB5C1331A9C5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA2044B0)
#define CLASS_2_D1A8EB5C1331A9C5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA204600)
#define CLASS_2_D1A8EB5C1331A9C5_TICK_OFFSET UNITYSDK_OFFSET(0xA2043D0)
#define CLASS_2_D1A8EB5C1331A9C5__CTOR_OFFSET UNITYSDK_OFFSET(0xA2041D0)

inline static constexpr unsigned int Class_2_D1A8EB5C1331A9C5_TypeDefinitionIndex = 42417;

class Class_2_D1A8EB5C1331A9C5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvNpcCommanded* Field_2_0; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcCommanded* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcCommanded*))((::PBYTE)hIl2Cpp + CLASS_2_D1A8EB5C1331A9C5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1A8EB5C1331A9C5_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D1A8EB5C1331A9C5_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1A8EB5C1331A9C5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1A8EB5C1331A9C5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1A8EB5C1331A9C5_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1A8EB5C1331A9C5_METHOD_2_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Void Method_2_F1372164966A6952(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_D1A8EB5C1331A9C5_METHOD_2_F1372164966A6952_OFFSET))(this, a1);
	}
};
