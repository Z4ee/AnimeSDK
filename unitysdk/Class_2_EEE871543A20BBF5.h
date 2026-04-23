#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetDroneFuncBtn; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_EEE871543A20BBF5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9166700)
#define CLASS_2_EEE871543A20BBF5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9166740)
#define CLASS_2_EEE871543A20BBF5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9166830)
#define CLASS_2_EEE871543A20BBF5_TICK_OFFSET UNITYSDK_OFFSET(0x9166880)
#define CLASS_2_EEE871543A20BBF5__CTOR_OFFSET UNITYSDK_OFFSET(0x91666F0)

inline static constexpr unsigned int Class_2_EEE871543A20BBF5_TypeDefinitionIndex = 49081;

class Class_2_EEE871543A20BBF5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::SetDroneFuncBtn* Field_2_0; // 0x20

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
