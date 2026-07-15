#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerCustomStringOnDialogEnd; }

#define CLASS_2_C7BA6885842D4A78_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1672D3F0)
#define CLASS_2_C7BA6885842D4A78_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1672D430)
#define CLASS_2_C7BA6885842D4A78_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1672D6E0)
#define CLASS_2_C7BA6885842D4A78_TICK_OFFSET UNITYSDK_OFFSET(0x1672D730)
#define CLASS_2_C7BA6885842D4A78__CTOR_OFFSET UNITYSDK_OFFSET(0x1672D3E0)

inline static constexpr unsigned int Class_2_C7BA6885842D4A78_TypeDefinitionIndex = 56146;

class Class_2_C7BA6885842D4A78 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::TriggerCustomStringOnDialogEnd* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerCustomStringOnDialogEnd* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerCustomStringOnDialogEnd*))((::PBYTE)hIl2Cpp + CLASS_2_C7BA6885842D4A78__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7BA6885842D4A78_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7BA6885842D4A78_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7BA6885842D4A78_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C7BA6885842D4A78_TICK_OFFSET))(this, a1);
	}
};
