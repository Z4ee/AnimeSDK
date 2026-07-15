#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_97C496F5D89C4BC2;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_AF0CF8D32079A59D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17874010)
#define CLASS_2_AF0CF8D32079A59D_METHOD_2_FCEF005F844F513C_OFFSET UNITYSDK_OFFSET(0x17874240)
#define CLASS_2_AF0CF8D32079A59D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17874130)
#define CLASS_2_AF0CF8D32079A59D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17873FC0)
#define CLASS_2_AF0CF8D32079A59D_TICK_OFFSET UNITYSDK_OFFSET(0x17873F20)
#define CLASS_2_AF0CF8D32079A59D__CTOR_OFFSET UNITYSDK_OFFSET(0x17873EA0)

inline static constexpr unsigned int Class_2_AF0CF8D32079A59D_TypeDefinitionIndex = 55866;

class Class_2_AF0CF8D32079A59D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_97C496F5D89C4BC2* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_97C496F5D89C4BC2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_97C496F5D89C4BC2*))((::PBYTE)hIl2Cpp + CLASS_2_AF0CF8D32079A59D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AF0CF8D32079A59D_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF0CF8D32079A59D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF0CF8D32079A59D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF0CF8D32079A59D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_FCEF005F844F513C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF0CF8D32079A59D_METHOD_2_FCEF005F844F513C_OFFSET))(this, a1);
	}
};
