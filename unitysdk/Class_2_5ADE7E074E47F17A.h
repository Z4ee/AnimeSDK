#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class HideEntityForCurrentCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5ADE7E074E47F17A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC72A980)
#define CLASS_2_5ADE7E074E47F17A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC72A9C0)
#define CLASS_2_5ADE7E074E47F17A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC72AAC0)
#define CLASS_2_5ADE7E074E47F17A_TICK_OFFSET UNITYSDK_OFFSET(0xC72AB10)
#define CLASS_2_5ADE7E074E47F17A__CTOR_OFFSET UNITYSDK_OFFSET(0xC72A970)

inline static constexpr unsigned int Class_2_5ADE7E074E47F17A_TypeDefinitionIndex = 51459;

class Class_2_5ADE7E074E47F17A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::HideEntityForCurrentCamera* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideEntityForCurrentCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideEntityForCurrentCamera*))((::PBYTE)hIl2Cpp + CLASS_2_5ADE7E074E47F17A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5ADE7E074E47F17A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5ADE7E074E47F17A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5ADE7E074E47F17A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5ADE7E074E47F17A_TICK_OFFSET))(this, a1);
	}
};
