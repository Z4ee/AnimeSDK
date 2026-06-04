#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MonopolyShowSwitchTransition; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_67E537C726C54D4B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x134C6100)
#define CLASS_2_67E537C726C54D4B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x134C6010)
#define CLASS_2_67E537C726C54D4B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x134C60B0)
#define CLASS_2_67E537C726C54D4B_TICK_OFFSET UNITYSDK_OFFSET(0x134C6140)
#define CLASS_2_67E537C726C54D4B__CTOR_OFFSET UNITYSDK_OFFSET(0x134C6000)

inline static constexpr unsigned int Class_2_67E537C726C54D4B_TypeDefinitionIndex = 54420;

class Class_2_67E537C726C54D4B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::MonopolyShowSwitchTransition* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyShowSwitchTransition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyShowSwitchTransition*))((::PBYTE)hIl2Cpp + CLASS_2_67E537C726C54D4B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67E537C726C54D4B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67E537C726C54D4B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67E537C726C54D4B_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_67E537C726C54D4B_TICK_OFFSET))(this, a1);
	}
};
