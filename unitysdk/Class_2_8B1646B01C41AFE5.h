#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AIVariableInt; }
namespace RPG::GameCore { class ModifyAIVariableInt; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8B1646B01C41AFE5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC14E80)
#define CLASS_2_8B1646B01C41AFE5_METHOD_2_C2422E9C86913F34_OFFSET UNITYSDK_OFFSET(0xBC14F80)
#define CLASS_2_8B1646B01C41AFE5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC14EC0)
#define CLASS_2_8B1646B01C41AFE5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC15010)
#define CLASS_2_8B1646B01C41AFE5_TICK_OFFSET UNITYSDK_OFFSET(0xBC15060)
#define CLASS_2_8B1646B01C41AFE5__CTOR_OFFSET UNITYSDK_OFFSET(0xBC14E70)

inline static constexpr unsigned int Class_2_8B1646B01C41AFE5_TypeDefinitionIndex = 54606;

class Class_2_8B1646B01C41AFE5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::ModifyAIVariableInt* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyAIVariableInt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyAIVariableInt*))((::PBYTE)hIl2Cpp + CLASS_2_8B1646B01C41AFE5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B1646B01C41AFE5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B1646B01C41AFE5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B1646B01C41AFE5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8B1646B01C41AFE5_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C2422E9C86913F34(::RPG::GameCore::AIVariableInt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AIVariableInt*))((::PBYTE)hIl2Cpp + CLASS_2_8B1646B01C41AFE5_METHOD_2_C2422E9C86913F34_OFFSET))(this, a1);
	}
};
