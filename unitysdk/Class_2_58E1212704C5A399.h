#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class MonopolyCheckAtFinalPos; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_58E1212704C5A399_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDA9700)
#define CLASS_2_58E1212704C5A399_METHOD_2_BC6CEE43F93F10B5_OFFSET UNITYSDK_OFFSET(0xBDA91D0)
#define CLASS_2_58E1212704C5A399_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDA9070)
#define CLASS_2_58E1212704C5A399_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBDA96B0)
#define CLASS_2_58E1212704C5A399_TICK_OFFSET UNITYSDK_OFFSET(0xBDA9870)
#define CLASS_2_58E1212704C5A399__CTOR_OFFSET UNITYSDK_OFFSET(0xBDA8F70)

inline static constexpr unsigned int Class_2_58E1212704C5A399_TypeDefinitionIndex = 58215;

class Class_2_58E1212704C5A399 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_3_07C3C4D2990C49EE* IJBFOGOBMLE; // 0x20
	::Class_3_07C3C4D2990C49EE* APPJBNPGGMI; // 0x28
	::RPG::GameCore::MonopolyCheckAtFinalPos* OFKGLJOAMLD; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyCheckAtFinalPos* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyCheckAtFinalPos*))((::PBYTE)hIl2Cpp + CLASS_2_58E1212704C5A399__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58E1212704C5A399_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_2_BC6CEE43F93F10B5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58E1212704C5A399_METHOD_2_BC6CEE43F93F10B5_OFFSET))(this);
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
