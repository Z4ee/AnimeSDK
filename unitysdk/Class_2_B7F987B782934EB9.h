#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class EnterMapByCondition; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B7F987B782934EB9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EC6F20)
#define CLASS_2_B7F987B782934EB9_METHOD_2_FD7588F6F987E6BA_OFFSET UNITYSDK_OFFSET(0x15EC71B0)
#define CLASS_2_B7F987B782934EB9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EC6F60)
#define CLASS_2_B7F987B782934EB9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15EC73F0)
#define CLASS_2_B7F987B782934EB9_TICK_OFFSET UNITYSDK_OFFSET(0x15EC7440)
#define CLASS_2_B7F987B782934EB9__CTOR_OFFSET UNITYSDK_OFFSET(0x15EC6F10)

inline static constexpr unsigned int Class_2_B7F987B782934EB9_TypeDefinitionIndex = 52753;

class Class_2_B7F987B782934EB9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::EnterMapByCondition* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterMapByCondition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterMapByCondition*))((::PBYTE)hIl2Cpp + CLASS_2_B7F987B782934EB9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F987B782934EB9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F987B782934EB9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F987B782934EB9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B7F987B782934EB9_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD7588F6F987E6BA(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B7F987B782934EB9_METHOD_2_FD7588F6F987E6BA_OFFSET))(this, a1, a2, a3, a4);
	}
};
