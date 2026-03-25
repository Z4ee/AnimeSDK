#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitLevelGraphFinish; }

#define CLASS_2_4B70AF582BC96D54_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8771BF0)
#define CLASS_2_4B70AF582BC96D54_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x8771CC0)
#define CLASS_2_4B70AF582BC96D54_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8771D40)
#define CLASS_2_4B70AF582BC96D54_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8771EF0)
#define CLASS_2_4B70AF582BC96D54_TICK_OFFSET UNITYSDK_OFFSET(0x8771F40)
#define CLASS_2_4B70AF582BC96D54__CTOR_OFFSET UNITYSDK_OFFSET(0x8771B60)

inline static constexpr unsigned int Class_2_4B70AF582BC96D54_TypeDefinitionIndex = 45415;

class Class_2_4B70AF582BC96D54 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitLevelGraphFinish* Field_2_0; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::System::Boolean Field_2_2; // 0x30

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
