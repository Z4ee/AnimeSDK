#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPamMovePhaseTalkWait; }

#define CLASS_2_19EABE4EEB081727_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13963110)
#define CLASS_2_19EABE4EEB081727_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13963150)
#define CLASS_2_19EABE4EEB081727_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13963220)
#define CLASS_2_19EABE4EEB081727_TICK_OFFSET UNITYSDK_OFFSET(0x139632F0)
#define CLASS_2_19EABE4EEB081727__CTOR_OFFSET UNITYSDK_OFFSET(0x13963100)

inline static constexpr unsigned int Class_2_19EABE4EEB081727_TypeDefinitionIndex = 55117;

class Class_2_19EABE4EEB081727 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPamMovePhaseTalkWait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPamMovePhaseTalkWait*))((::PBYTE)hIl2Cpp + CLASS_2_19EABE4EEB081727__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19EABE4EEB081727_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19EABE4EEB081727_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19EABE4EEB081727_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_19EABE4EEB081727_TICK_OFFSET))(this, a1);
	}
};
