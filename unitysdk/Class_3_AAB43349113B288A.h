#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerStanceCountDown; }

#define CLASS_3_AAB43349113B288A_METHOD_3_61290482E7C29D27_OFFSET UNITYSDK_OFFSET(0x11906A00)
#define CLASS_3_AAB43349113B288A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x119067E0)
#define CLASS_3_AAB43349113B288A__CTOR_OFFSET UNITYSDK_OFFSET(0x119067B0)

inline static constexpr unsigned int Class_3_AAB43349113B288A_TypeDefinitionIndex = 44674;

class Class_3_AAB43349113B288A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerStanceCountDown*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerStanceCountDown* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerStanceCountDown*))((::PBYTE)hIl2Cpp + CLASS_3_AAB43349113B288A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAB43349113B288A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_61290482E7C29D27(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_AAB43349113B288A_METHOD_3_61290482E7C29D27_OFFSET))(this, a1, a2);
	}
};
