#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_6BA10DC46C47290E_10;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_71EE8DF214441E57_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8A4510)
#define CLASS_2_71EE8DF214441E57_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB8A4410)
#define CLASS_2_71EE8DF214441E57_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8A41B0)
#define CLASS_2_71EE8DF214441E57_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8A44C0)
#define CLASS_2_71EE8DF214441E57_1_TICK_OFFSET UNITYSDK_OFFSET(0xB8A4460)
#define CLASS_2_71EE8DF214441E57_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB8A41A0)

inline static constexpr unsigned int Class_2_71EE8DF214441E57_1_TypeDefinitionIndex = 58815;

class Class_2_71EE8DF214441E57_1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* FNHBHOPGFBH; // 0x0
	::Class_3_6BA10DC46C47290E_10* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6BA10DC46C47290E_10* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6BA10DC46C47290E_10*))((::PBYTE)hIl2Cpp + CLASS_2_71EE8DF214441E57_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71EE8DF214441E57_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71EE8DF214441E57_1_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71EE8DF214441E57_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71EE8DF214441E57_1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71EE8DF214441E57_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
