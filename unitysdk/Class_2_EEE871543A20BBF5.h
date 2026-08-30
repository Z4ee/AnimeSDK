#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetDroneFuncBtn; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_EEE871543A20BBF5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1608AF90)
#define CLASS_2_EEE871543A20BBF5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1608AFD0)
#define CLASS_2_EEE871543A20BBF5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1608B0C0)
#define CLASS_2_EEE871543A20BBF5_TICK_OFFSET UNITYSDK_OFFSET(0x1608B110)
#define CLASS_2_EEE871543A20BBF5__CTOR_OFFSET UNITYSDK_OFFSET(0x1608AF80)

inline static constexpr unsigned int Class_2_EEE871543A20BBF5_TypeDefinitionIndex = 53484;

class Class_2_EEE871543A20BBF5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetDroneFuncBtn* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDroneFuncBtn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDroneFuncBtn*))((::PBYTE)hIl2Cpp + CLASS_2_EEE871543A20BBF5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEE871543A20BBF5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEE871543A20BBF5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEE871543A20BBF5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EEE871543A20BBF5_TICK_OFFSET))(this, a1);
	}
};
