#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_F3391C70DC37088D;
namespace RPG::GameCore { class DialogueEventSwitch; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E9EBD6157D3421C4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x138AEB80)
#define CLASS_2_E9EBD6157D3421C4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x138AEC70)
#define CLASS_2_E9EBD6157D3421C4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x138AECF0)
#define CLASS_2_E9EBD6157D3421C4_TICK_OFFSET UNITYSDK_OFFSET(0x138AED40)
#define CLASS_2_E9EBD6157D3421C4__CTOR_OFFSET UNITYSDK_OFFSET(0x138AEB70)

inline static constexpr unsigned int Class_2_E9EBD6157D3421C4_TypeDefinitionIndex = 54278;

class Class_2_E9EBD6157D3421C4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_F3391C70DC37088D* Field_2_0; // 0x18
	::Class_1_F3391C70DC37088D* Field_2_1; // 0x20
	::RPG::GameCore::DialogueEventSwitch* Field_2_2; // 0x28
	::Class_1_F3391C70DC37088D* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DialogueEventSwitch* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DialogueEventSwitch*))((::PBYTE)hIl2Cpp + CLASS_2_E9EBD6157D3421C4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9EBD6157D3421C4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9EBD6157D3421C4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9EBD6157D3421C4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E9EBD6157D3421C4_TICK_OFFSET))(this, a1);
	}
};
