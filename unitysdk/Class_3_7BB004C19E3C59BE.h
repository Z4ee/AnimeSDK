#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerStanceCountDown; }

#define CLASS_3_7BB004C19E3C59BE_METHOD_3_187F4E2A526BC80E_OFFSET UNITYSDK_OFFSET(0x18005870)
#define CLASS_3_7BB004C19E3C59BE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x180056D0)
#define CLASS_3_7BB004C19E3C59BE__CTOR_OFFSET UNITYSDK_OFFSET(0x180056A0)

inline static constexpr unsigned int Class_3_7BB004C19E3C59BE_TypeDefinitionIndex = 55955;

class Class_3_7BB004C19E3C59BE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerStanceCountDown*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerStanceCountDown* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerStanceCountDown*))((::PBYTE)hIl2Cpp + CLASS_3_7BB004C19E3C59BE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BB004C19E3C59BE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_187F4E2A526BC80E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_7BB004C19E3C59BE_METHOD_3_187F4E2A526BC80E_OFFSET))(this, a1, a2);
	}
};
