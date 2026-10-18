#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifyProperty; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_3_CA24D1E2C7207D1F_METHOD_3_340ACF9C2C5D8467_OFFSET UNITYSDK_OFFSET(0xBE4E640)
#define CLASS_3_CA24D1E2C7207D1F_METHOD_3_635844D4DC0B764F_OFFSET UNITYSDK_OFFSET(0xBE4E880)
#define CLASS_3_CA24D1E2C7207D1F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE4E3B0)
#define CLASS_3_CA24D1E2C7207D1F__CTOR_OFFSET UNITYSDK_OFFSET(0xBE4E380)

inline static constexpr unsigned int Class_3_CA24D1E2C7207D1F_TypeDefinitionIndex = 55206;

class Class_3_CA24D1E2C7207D1F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyProperty*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyProperty*))((::PBYTE)hIl2Cpp + CLASS_3_CA24D1E2C7207D1F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA24D1E2C7207D1F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_340ACF9C2C5D8467(::RPG::GameCore::AbilityProperty a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_3_CA24D1E2C7207D1F_METHOD_3_340ACF9C2C5D8467_OFFSET))(this, a1);
	}

	::System::Void Method_3_635844D4DC0B764F(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_3_CA24D1E2C7207D1F_METHOD_3_635844D4DC0B764F_OFFSET))(this, a1, a2);
	}
};
