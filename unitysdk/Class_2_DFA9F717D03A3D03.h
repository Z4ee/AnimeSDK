#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetMechanismBarState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DFA9F717D03A3D03_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17D72400)
#define CLASS_2_DFA9F717D03A3D03_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17D72440)
#define CLASS_2_DFA9F717D03A3D03_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17D72490)
#define CLASS_2_DFA9F717D03A3D03_TICK_OFFSET UNITYSDK_OFFSET(0x17D724E0)
#define CLASS_2_DFA9F717D03A3D03__CTOR_OFFSET UNITYSDK_OFFSET(0x17D723F0)

inline static constexpr unsigned int Class_2_DFA9F717D03A3D03_TypeDefinitionIndex = 53019;

class Class_2_DFA9F717D03A3D03 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetMechanismBarState* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMechanismBarState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMechanismBarState*))((::PBYTE)hIl2Cpp + CLASS_2_DFA9F717D03A3D03__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFA9F717D03A3D03_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFA9F717D03A3D03_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFA9F717D03A3D03_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DFA9F717D03A3D03_TICK_OFFSET))(this, a1);
	}
};
