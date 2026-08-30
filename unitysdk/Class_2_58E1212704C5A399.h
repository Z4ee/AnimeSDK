#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class MonopolyCheckAtFinalPos; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_58E1212704C5A399_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE02040)
#define CLASS_2_58E1212704C5A399_METHOD_2_BC6CEE43F93F10B5_OFFSET UNITYSDK_OFFSET(0xBE01B10)
#define CLASS_2_58E1212704C5A399_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE019B0)
#define CLASS_2_58E1212704C5A399_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE01FF0)
#define CLASS_2_58E1212704C5A399_TICK_OFFSET UNITYSDK_OFFSET(0xBE021B0)
#define CLASS_2_58E1212704C5A399__CTOR_OFFSET UNITYSDK_OFFSET(0xBE018B0)

inline static constexpr unsigned int Class_2_58E1212704C5A399_TypeDefinitionIndex = 58364;

class Class_2_58E1212704C5A399 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* APPJBNPGGMI; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_3_07C3C4D2990C49EE* IJBFOGOBMLE; // 0x28
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
