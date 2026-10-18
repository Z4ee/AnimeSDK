#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5112518BD1B5B872.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class ConditionLoopExecuteTaskListWithInterval; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C70CA81480B3ED2B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16434190)
#define CLASS_3_C70CA81480B3ED2B_METHOD_3_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x16433F00)
#define CLASS_3_C70CA81480B3ED2B_METHOD_3_71227BBBB7D3D8E0_OFFSET UNITYSDK_OFFSET(0x164341E0)
#define CLASS_3_C70CA81480B3ED2B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16433E00)
#define CLASS_3_C70CA81480B3ED2B__CTOR_OFFSET UNITYSDK_OFFSET(0x16433D30)

inline static constexpr unsigned int Class_3_C70CA81480B3ED2B_TypeDefinitionIndex = 54974;

class Class_3_C70CA81480B3ED2B : public ::Class_2_5112518BD1B5B872
{
public:
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x30
	::RPG::GameCore::ConditionLoopExecuteTaskListWithInterval* OFKGLJOAMLD; // 0x38
	::System::Int32 DLANCNECDDA; // 0x40
	::System::Int32 CALNAPHILLA; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConditionLoopExecuteTaskListWithInterval* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConditionLoopExecuteTaskListWithInterval*))((::PBYTE)hIl2Cpp + CLASS_3_C70CA81480B3ED2B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C70CA81480B3ED2B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C70CA81480B3ED2B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_71227BBBB7D3D8E0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C70CA81480B3ED2B_METHOD_3_71227BBBB7D3D8E0_OFFSET))(this);
	}

	::System::Void Method_3_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C70CA81480B3ED2B_METHOD_3_41AA181104E03F2C_OFFSET))(this);
	}
};
