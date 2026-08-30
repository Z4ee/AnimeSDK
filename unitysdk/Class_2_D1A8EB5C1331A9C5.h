#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::GameCore { class AdvNpcCommanded; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D1A8EB5C1331A9C5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15547870)
#define CLASS_2_D1A8EB5C1331A9C5_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x15547950)
#define CLASS_2_D1A8EB5C1331A9C5_METHOD_2_5DC9989DD20A6DEF_OFFSET UNITYSDK_OFFSET(0x15547D70)
#define CLASS_2_D1A8EB5C1331A9C5_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x15547C10)
#define CLASS_2_D1A8EB5C1331A9C5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15547BC0)
#define CLASS_2_D1A8EB5C1331A9C5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15547D20)
#define CLASS_2_D1A8EB5C1331A9C5_TICK_OFFSET UNITYSDK_OFFSET(0x15547A60)
#define CLASS_2_D1A8EB5C1331A9C5__CTOR_OFFSET UNITYSDK_OFFSET(0x155477E0)

inline static constexpr unsigned int Class_2_D1A8EB5C1331A9C5_TypeDefinitionIndex = 52677;

class Class_2_D1A8EB5C1331A9C5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::AdvNpcCommanded* IGHAHBNLIJA; // 0x20
	::Class_1_5F51D4049EA87B7B* GGMDAFJCJIP; // 0x28
	::System::Boolean BJIMNGNKDGD; // 0x30

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

	::System::Void Method_2_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1A8EB5C1331A9C5_METHOD_2_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_2_5DC9989DD20A6DEF(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_D1A8EB5C1331A9C5_METHOD_2_5DC9989DD20A6DEF_OFFSET))(this, a1);
	}
};
