#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetEntityTalkEnable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4050F88FE35C6AE1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12E77C90)
#define CLASS_2_4050F88FE35C6AE1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12E77CD0)
#define CLASS_2_4050F88FE35C6AE1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12E77E30)
#define CLASS_2_4050F88FE35C6AE1_TICK_OFFSET UNITYSDK_OFFSET(0x12E77E80)
#define CLASS_2_4050F88FE35C6AE1__CTOR_OFFSET UNITYSDK_OFFSET(0x12E77C80)

inline static constexpr unsigned int Class_2_4050F88FE35C6AE1_TypeDefinitionIndex = 53485;

class Class_2_4050F88FE35C6AE1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetEntityTalkEnable* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityTalkEnable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityTalkEnable*))((::PBYTE)hIl2Cpp + CLASS_2_4050F88FE35C6AE1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4050F88FE35C6AE1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4050F88FE35C6AE1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4050F88FE35C6AE1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4050F88FE35C6AE1_TICK_OFFSET))(this, a1);
	}
};
