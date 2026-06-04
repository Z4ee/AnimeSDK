#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitHipplenGameExit; }

#define CLASS_2_0270D3FEC2A14EF7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x139EFAA0)
#define CLASS_2_0270D3FEC2A14EF7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x139EF910)
#define CLASS_2_0270D3FEC2A14EF7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x139EFA50)
#define CLASS_2_0270D3FEC2A14EF7_TICK_OFFSET UNITYSDK_OFFSET(0x139EF960)
#define CLASS_2_0270D3FEC2A14EF7__CTOR_OFFSET UNITYSDK_OFFSET(0x139EF900)

inline static constexpr unsigned int Class_2_0270D3FEC2A14EF7_TypeDefinitionIndex = 48908;

class Class_2_0270D3FEC2A14EF7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitHipplenGameExit* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitHipplenGameExit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitHipplenGameExit*))((::PBYTE)hIl2Cpp + CLASS_2_0270D3FEC2A14EF7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0270D3FEC2A14EF7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0270D3FEC2A14EF7_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0270D3FEC2A14EF7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0270D3FEC2A14EF7_DISPOSE_OFFSET))(this);
	}
};
