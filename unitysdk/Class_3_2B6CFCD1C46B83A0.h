#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RA_TriggerInstantAbility; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2B6CFCD1C46B83A0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12B3B730)
#define CLASS_3_2B6CFCD1C46B83A0__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3B700)

inline static constexpr unsigned int Class_3_2B6CFCD1C46B83A0_TypeDefinitionIndex = 48100;

class Class_3_2B6CFCD1C46B83A0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RA_TriggerInstantAbility*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RA_TriggerInstantAbility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RA_TriggerInstantAbility*))((::PBYTE)hIl2Cpp + CLASS_3_2B6CFCD1C46B83A0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B6CFCD1C46B83A0_ONTASKBEGIN_OFFSET))(this);
	}
};
