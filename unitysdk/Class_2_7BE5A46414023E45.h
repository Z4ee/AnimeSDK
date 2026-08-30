#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/TaskState.h"

class Class_0_16E4307DCC419505_558;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7BE5A46414023E45_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1561FDD0)
#define CLASS_2_7BE5A46414023E45_METHOD_2_83380203C9BE072E_OFFSET UNITYSDK_OFFSET(0x1561FF50)
#define CLASS_2_7BE5A46414023E45_METHOD_2_F1A003E5C1501299_OFFSET UNITYSDK_OFFSET(0x1561FF40)
#define CLASS_2_7BE5A46414023E45_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1561FE30)
#define CLASS_2_7BE5A46414023E45_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1561FE80)
#define CLASS_2_7BE5A46414023E45_TICK_OFFSET UNITYSDK_OFFSET(0x1561FED0)
#define CLASS_2_7BE5A46414023E45__CTOR_OFFSET UNITYSDK_OFFSET(0x1561FD90)

inline static constexpr unsigned int Class_2_7BE5A46414023E45_TypeDefinitionIndex = 54995;

class Class_2_7BE5A46414023E45 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_0_16E4307DCC419505_558* ANJMMCICKPI; // 0x18
	::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x20
	::RPG::GameCore::TaskConfig* DOCBCODGIEH; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TaskConfig* a2, ::Class_0_16E4307DCC419505_558* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*, ::Class_0_16E4307DCC419505_558*))((::PBYTE)hIl2Cpp + CLASS_2_7BE5A46414023E45__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BE5A46414023E45_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BE5A46414023E45_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BE5A46414023E45_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7BE5A46414023E45_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskState Method_2_F1A003E5C1501299()
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BE5A46414023E45_METHOD_2_F1A003E5C1501299_OFFSET))(this);
	}

	::System::Void Method_2_83380203C9BE072E(::RPG::GameCore::TaskState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskState))((::PBYTE)hIl2Cpp + CLASS_2_7BE5A46414023E45_METHOD_2_83380203C9BE072E_OFFSET))(this, a1);
	}
};
