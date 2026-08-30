#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class EnableElfEnvironment; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A02F41954CC70FA2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC120FD0)
#define CLASS_2_A02F41954CC70FA2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC121010)
#define CLASS_2_A02F41954CC70FA2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC121230)
#define CLASS_2_A02F41954CC70FA2_TICK_OFFSET UNITYSDK_OFFSET(0xC121280)
#define CLASS_2_A02F41954CC70FA2__CTOR_OFFSET UNITYSDK_OFFSET(0xC120FC0)
#define CLASS_2_A02F41954CC70FA2__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0xC1212E0)
#define CLASS_2_A02F41954CC70FA2__ONTASKBEGIN_B__2_1_OFFSET UNITYSDK_OFFSET(0xC1212F0)

inline static constexpr unsigned int Class_2_A02F41954CC70FA2_TypeDefinitionIndex = 58256;

class Class_2_A02F41954CC70FA2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::Client::EnableElfEnvironment* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::EnableElfEnvironment* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::EnableElfEnvironment*))((::PBYTE)hIl2Cpp + CLASS_2_A02F41954CC70FA2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A02F41954CC70FA2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A02F41954CC70FA2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A02F41954CC70FA2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A02F41954CC70FA2_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A02F41954CC70FA2__ONTASKBEGIN_B__2_0_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__2_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A02F41954CC70FA2__ONTASKBEGIN_B__2_1_OFFSET))(this);
	}
};
