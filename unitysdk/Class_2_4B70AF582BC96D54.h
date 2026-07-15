#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitLevelGraphFinish; }

#define CLASS_2_4B70AF582BC96D54_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16F83EA0)
#define CLASS_2_4B70AF582BC96D54_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x16F83FF0)
#define CLASS_2_4B70AF582BC96D54_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16F84070)
#define CLASS_2_4B70AF582BC96D54_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16F84250)
#define CLASS_2_4B70AF582BC96D54_TICK_OFFSET UNITYSDK_OFFSET(0x16F842A0)
#define CLASS_2_4B70AF582BC96D54__CTOR_OFFSET UNITYSDK_OFFSET(0x16F83E10)

inline static constexpr unsigned int Class_2_4B70AF582BC96D54_TypeDefinitionIndex = 53945;

class Class_2_4B70AF582BC96D54 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::RPG::GameCore::WaitLevelGraphFinish* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitLevelGraphFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitLevelGraphFinish*))((::PBYTE)hIl2Cpp + CLASS_2_4B70AF582BC96D54__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B70AF582BC96D54_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B70AF582BC96D54_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B70AF582BC96D54_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4B70AF582BC96D54_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B70AF582BC96D54_METHOD_2_24B05D2E15A5C3C8_OFFSET))(this);
	}
};
