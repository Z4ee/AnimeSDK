#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_3512BA380C7E2432;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_71EE8DF214441E57_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10523620)
#define CLASS_2_71EE8DF214441E57_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10523660)
#define CLASS_2_71EE8DF214441E57_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x105235D0)
#define CLASS_2_71EE8DF214441E57_TICK_OFFSET UNITYSDK_OFFSET(0x10523570)
#define CLASS_2_71EE8DF214441E57__CTOR_OFFSET UNITYSDK_OFFSET(0x10523550)

inline static constexpr unsigned int Class_2_71EE8DF214441E57_TypeDefinitionIndex = 47188;

class Class_2_71EE8DF214441E57 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::String* Field_2_2; // 0x18
	::Class_3_3512BA380C7E2432* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3512BA380C7E2432* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3512BA380C7E2432*))((::PBYTE)hIl2Cpp + CLASS_2_71EE8DF214441E57__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71EE8DF214441E57_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71EE8DF214441E57_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71EE8DF214441E57_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71EE8DF214441E57_ONTASKBEGIN_OFFSET))(this);
	}
};
