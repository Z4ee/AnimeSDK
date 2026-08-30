#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitLevelGraphFinish; }

#define CLASS_2_4B70AF582BC96D54_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15925E60)
#define CLASS_2_4B70AF582BC96D54_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x15925FB0)
#define CLASS_2_4B70AF582BC96D54_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15926030)
#define CLASS_2_4B70AF582BC96D54_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15926210)
#define CLASS_2_4B70AF582BC96D54_TICK_OFFSET UNITYSDK_OFFSET(0x15926260)
#define CLASS_2_4B70AF582BC96D54__CTOR_OFFSET UNITYSDK_OFFSET(0x15925DD0)

inline static constexpr unsigned int Class_2_4B70AF582BC96D54_TypeDefinitionIndex = 56666;

class Class_2_4B70AF582BC96D54 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* ECMFFNPIHGD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::WaitLevelGraphFinish* OFKGLJOAMLD; // 0x28
	::System::Boolean HFDCEKACNAJ; // 0x30

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
