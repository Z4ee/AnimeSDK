#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByBehaviorFlagCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_69A820402A05E6EB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7ECA10)
#define CLASS_3_69A820402A05E6EB__CTOR_OFFSET UNITYSDK_OFFSET(0xA7EC930)

inline static constexpr unsigned int Class_3_69A820402A05E6EB_TypeDefinitionIndex = 51758;

class Class_3_69A820402A05E6EB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByBehaviorFlagCount*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByBehaviorFlagCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByBehaviorFlagCount*))((::PBYTE)hIl2Cpp + CLASS_3_69A820402A05E6EB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69A820402A05E6EB_ONTASKBEGIN_OFFSET))(this);
	}
};
