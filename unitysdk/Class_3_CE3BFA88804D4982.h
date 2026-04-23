#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerHitProp; }

#define CLASS_3_CE3BFA88804D4982_METHOD_3_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x973B470)
#define CLASS_3_CE3BFA88804D4982_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x973B420)
#define CLASS_3_CE3BFA88804D4982__CTOR_OFFSET UNITYSDK_OFFSET(0x973B3F0)

inline static constexpr unsigned int Class_3_CE3BFA88804D4982_TypeDefinitionIndex = 54200;

class Class_3_CE3BFA88804D4982 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerHitProp*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerHitProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerHitProp*))((::PBYTE)hIl2Cpp + CLASS_3_CE3BFA88804D4982__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE3BFA88804D4982_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE3BFA88804D4982_METHOD_3_B43C848B078B3C34_OFFSET))(this);
	}
};
