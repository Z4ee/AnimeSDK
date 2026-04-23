#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class StackProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C189FC086B495A1E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B89E50)
#define CLASS_2_C189FC086B495A1E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11B89E90)
#define CLASS_2_C189FC086B495A1E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11B8A1C0)
#define CLASS_2_C189FC086B495A1E_TICK_OFFSET UNITYSDK_OFFSET(0x11B8A210)
#define CLASS_2_C189FC086B495A1E__CTOR_OFFSET UNITYSDK_OFFSET(0x11B89E20)

inline static constexpr unsigned int Class_2_C189FC086B495A1E_TypeDefinitionIndex = 51305;

class Class_2_C189FC086B495A1E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::StackProperty* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackProperty*))((::PBYTE)hIl2Cpp + CLASS_2_C189FC086B495A1E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C189FC086B495A1E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C189FC086B495A1E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C189FC086B495A1E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C189FC086B495A1E_TICK_OFFSET))(this, a1);
	}
};
