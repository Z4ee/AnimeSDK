#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPamMovePhaseTalk; }

#define CLASS_2_94D30F748C1C619E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC415820)
#define CLASS_2_94D30F748C1C619E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC415860)
#define CLASS_2_94D30F748C1C619E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC415930)
#define CLASS_2_94D30F748C1C619E_TICK_OFFSET UNITYSDK_OFFSET(0xC415980)
#define CLASS_2_94D30F748C1C619E__CTOR_OFFSET UNITYSDK_OFFSET(0xC415810)

inline static constexpr unsigned int Class_2_94D30F748C1C619E_TypeDefinitionIndex = 59131;

class Class_2_94D30F748C1C619E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPamMovePhaseTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPamMovePhaseTalk*))((::PBYTE)hIl2Cpp + CLASS_2_94D30F748C1C619E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94D30F748C1C619E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94D30F748C1C619E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94D30F748C1C619E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_94D30F748C1C619E_TICK_OFFSET))(this, a1);
	}
};
