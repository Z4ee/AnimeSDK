#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifyProperty; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_3_F844CD27AE1743D6_METHOD_3_06C144C9CF430650_OFFSET UNITYSDK_OFFSET(0xAB8C1F0)
#define CLASS_3_F844CD27AE1743D6_METHOD_3_340ACF9C2C5D8467_OFFSET UNITYSDK_OFFSET(0xAB8BFB0)
#define CLASS_3_F844CD27AE1743D6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAB8BD20)
#define CLASS_3_F844CD27AE1743D6__CTOR_OFFSET UNITYSDK_OFFSET(0xAB8BCF0)

inline static constexpr unsigned int Class_3_F844CD27AE1743D6_TypeDefinitionIndex = 51567;

class Class_3_F844CD27AE1743D6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyProperty*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyProperty*))((::PBYTE)hIl2Cpp + CLASS_3_F844CD27AE1743D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F844CD27AE1743D6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_340ACF9C2C5D8467(::RPG::GameCore::AbilityProperty a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_3_F844CD27AE1743D6_METHOD_3_340ACF9C2C5D8467_OFFSET))(this, a1);
	}

	::System::Void Method_3_06C144C9CF430650(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_3_F844CD27AE1743D6_METHOD_3_06C144C9CF430650_OFFSET))(this, a1, a2);
	}
};
