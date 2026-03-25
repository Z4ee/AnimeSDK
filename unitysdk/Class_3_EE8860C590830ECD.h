#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRewindGlobalUnselectable; }

#define CLASS_3_EE8860C590830ECD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10961B90)
#define CLASS_3_EE8860C590830ECD__CTOR_OFFSET UNITYSDK_OFFSET(0x10961B60)

inline static constexpr unsigned int Class_3_EE8860C590830ECD_TypeDefinitionIndex = 43234;

class Class_3_EE8860C590830ECD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TimeRewindGlobalUnselectable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRewindGlobalUnselectable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRewindGlobalUnselectable*))((::PBYTE)hIl2Cpp + CLASS_3_EE8860C590830ECD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE8860C590830ECD_ONTASKBEGIN_OFFSET))(this);
	}
};
