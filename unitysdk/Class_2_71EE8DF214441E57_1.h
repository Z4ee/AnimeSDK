#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_6BA10DC46C47290E_10;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_71EE8DF214441E57_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15295090)
#define CLASS_2_71EE8DF214441E57_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15294F90)
#define CLASS_2_71EE8DF214441E57_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15294D30)
#define CLASS_2_71EE8DF214441E57_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15295040)
#define CLASS_2_71EE8DF214441E57_1_TICK_OFFSET UNITYSDK_OFFSET(0x15294FE0)
#define CLASS_2_71EE8DF214441E57_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15294D20)

inline static constexpr unsigned int Class_2_71EE8DF214441E57_1_TypeDefinitionIndex = 56040;

class Class_2_71EE8DF214441E57_1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_3_6BA10DC46C47290E_10* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20

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
