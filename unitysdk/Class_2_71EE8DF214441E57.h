#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5E28A3685A6F264E;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_71EE8DF214441E57_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8F86C0)
#define CLASS_2_71EE8DF214441E57_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8F8700)
#define CLASS_2_71EE8DF214441E57_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8F8670)
#define CLASS_2_71EE8DF214441E57_TICK_OFFSET UNITYSDK_OFFSET(0xB8F8610)
#define CLASS_2_71EE8DF214441E57__CTOR_OFFSET UNITYSDK_OFFSET(0xB8F85F0)

inline static constexpr unsigned int Class_2_71EE8DF214441E57_TypeDefinitionIndex = 58636;

class Class_2_71EE8DF214441E57 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5E28A3685A6F264E* JKJPFJALGKO; // 0x18
	::System::String* MNLKJLDIEIA; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5E28A3685A6F264E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5E28A3685A6F264E*))((::PBYTE)hIl2Cpp + CLASS_2_71EE8DF214441E57__CTOR_OFFSET))(this, a1, a2);
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
