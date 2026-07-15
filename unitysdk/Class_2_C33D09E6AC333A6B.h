#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CaptureCurrentInteractDialogueEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C33D09E6AC333A6B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x185BEDF0)
#define CLASS_2_C33D09E6AC333A6B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x185BEEA0)
#define CLASS_2_C33D09E6AC333A6B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x185BF160)
#define CLASS_2_C33D09E6AC333A6B_TICK_OFFSET UNITYSDK_OFFSET(0x185BEE40)
#define CLASS_2_C33D09E6AC333A6B__CTOR_OFFSET UNITYSDK_OFFSET(0x185BEDE0)

inline static constexpr unsigned int Class_2_C33D09E6AC333A6B_TypeDefinitionIndex = 50243;

class Class_2_C33D09E6AC333A6B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::CaptureCurrentInteractDialogueEntity* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CaptureCurrentInteractDialogueEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CaptureCurrentInteractDialogueEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C33D09E6AC333A6B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33D09E6AC333A6B_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C33D09E6AC333A6B_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33D09E6AC333A6B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33D09E6AC333A6B_ONTASKRESET_OFFSET))(this);
	}
};
