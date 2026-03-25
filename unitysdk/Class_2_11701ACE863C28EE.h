#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPamOnlineFirst; }

#define CLASS_2_11701ACE863C28EE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1096F660)
#define CLASS_2_11701ACE863C28EE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1096F6A0)
#define CLASS_2_11701ACE863C28EE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1096F770)
#define CLASS_2_11701ACE863C28EE_TICK_OFFSET UNITYSDK_OFFSET(0x1096F7C0)
#define CLASS_2_11701ACE863C28EE__CTOR_OFFSET UNITYSDK_OFFSET(0x1096F650)

inline static constexpr unsigned int Class_2_11701ACE863C28EE_TypeDefinitionIndex = 47653;

class Class_2_11701ACE863C28EE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPamOnlineFirst* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPamOnlineFirst*))((::PBYTE)hIl2Cpp + CLASS_2_11701ACE863C28EE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11701ACE863C28EE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11701ACE863C28EE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11701ACE863C28EE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_11701ACE863C28EE_TICK_OFFSET))(this, a1);
	}
};
