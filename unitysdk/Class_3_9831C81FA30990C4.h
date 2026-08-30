#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ManualTriggerAnimEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9831C81FA30990C4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15623480)
#define CLASS_3_9831C81FA30990C4__CTOR_OFFSET UNITYSDK_OFFSET(0x15623450)

inline static constexpr unsigned int Class_3_9831C81FA30990C4_TypeDefinitionIndex = 55371;

class Class_3_9831C81FA30990C4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ManualTriggerAnimEvent*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ManualTriggerAnimEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ManualTriggerAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_3_9831C81FA30990C4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9831C81FA30990C4_ONTASKBEGIN_OFFSET))(this);
	}
};
