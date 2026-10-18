#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5E28A3685A6F264E;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_71EE8DF214441E57_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB765D60)
#define CLASS_2_71EE8DF214441E57_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB765DA0)
#define CLASS_2_71EE8DF214441E57_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB765D10)
#define CLASS_2_71EE8DF214441E57_TICK_OFFSET UNITYSDK_OFFSET(0xB765CB0)
#define CLASS_2_71EE8DF214441E57__CTOR_OFFSET UNITYSDK_OFFSET(0xB765C90)

inline static constexpr unsigned int Class_2_71EE8DF214441E57_TypeDefinitionIndex = 58487;

class Class_2_71EE8DF214441E57 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::String* MNLKJLDIEIA; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_3_5E28A3685A6F264E* JKJPFJALGKO; // 0x28

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
