#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_0A6AEAAB98E550F1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_116_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19109010)
#define CLASS_3_27518451A20BB161_116_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19109050)
#define CLASS_3_27518451A20BB161_116_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x191094F0)
#define CLASS_3_27518451A20BB161_116__CTOR_OFFSET UNITYSDK_OFFSET(0x19108FE0)

inline static constexpr unsigned int Class_3_27518451A20BB161_116_TypeDefinitionIndex = 53705;

class Class_3_27518451A20BB161_116 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_0A6AEAAB98E550F1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_0A6AEAAB98E550F1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_0A6AEAAB98E550F1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_116__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_116_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_116_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_116_ONTASKRESET_OFFSET))(this);
	}
};
