#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class MonopolyCheckAtFinalPos; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_58E1212704C5A399_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB20A7C0)
#define CLASS_2_58E1212704C5A399_METHOD_2_3AC572023154FC7C_OFFSET UNITYSDK_OFFSET(0xB20A270)
#define CLASS_2_58E1212704C5A399_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB20A110)
#define CLASS_2_58E1212704C5A399_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB20A770)
#define CLASS_2_58E1212704C5A399_TICK_OFFSET UNITYSDK_OFFSET(0xB20A860)
#define CLASS_2_58E1212704C5A399__CTOR_OFFSET UNITYSDK_OFFSET(0xB20A010)

inline static constexpr unsigned int Class_2_58E1212704C5A399_TypeDefinitionIndex = 53687;

class Class_2_58E1212704C5A399 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::MonopolyCheckAtFinalPos* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyCheckAtFinalPos* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyCheckAtFinalPos*))((::PBYTE)hIl2Cpp + CLASS_2_58E1212704C5A399__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58E1212704C5A399_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_2_3AC572023154FC7C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58E1212704C5A399_METHOD_2_3AC572023154FC7C_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58E1212704C5A399_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58E1212704C5A399_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_58E1212704C5A399_TICK_OFFSET))(this, a1);
	}
};
