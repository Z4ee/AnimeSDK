#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_C98D71F68A90976E;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_476488590274C92C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DF5C40)
#define CLASS_2_476488590274C92C_METHOD_2_FCEF005F844F513C_OFFSET UNITYSDK_OFFSET(0x11DF5F20)
#define CLASS_2_476488590274C92C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11DF5D10)
#define CLASS_2_476488590274C92C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11DF5E20)
#define CLASS_2_476488590274C92C_TICK_OFFSET UNITYSDK_OFFSET(0x11DF5EC0)
#define CLASS_2_476488590274C92C__CTOR_OFFSET UNITYSDK_OFFSET(0x11DF5BB0)

inline static constexpr unsigned int Class_2_476488590274C92C_TypeDefinitionIndex = 48787;

class Class_2_476488590274C92C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_3_C98D71F68A90976E* Field_2_0; // 0x28
	::System::UInt32 Field_2_3; // 0x30
	::System::UInt32 Field_2_5; // 0x34
	::System::UInt32 Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C98D71F68A90976E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C98D71F68A90976E*))((::PBYTE)hIl2Cpp + CLASS_2_476488590274C92C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_476488590274C92C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_476488590274C92C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_476488590274C92C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_476488590274C92C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCEF005F844F513C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_476488590274C92C_METHOD_2_FCEF005F844F513C_OFFSET))(this, a1);
	}
};
