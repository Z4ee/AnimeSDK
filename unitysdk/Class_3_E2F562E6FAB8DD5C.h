#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_8AFC13302DAA04F7;
namespace RPG::GameCore { class LockActionDelayChange; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }

#define CLASS_3_E2F562E6FAB8DD5C_METHOD_3_1ADB339809159D22_OFFSET UNITYSDK_OFFSET(0xEA782B0)
#define CLASS_3_E2F562E6FAB8DD5C_METHOD_3_28F70786A9EB86A7_OFFSET UNITYSDK_OFFSET(0xEA77FE0)
#define CLASS_3_E2F562E6FAB8DD5C_METHOD_3_ED5FD1855FD10F33_OFFSET UNITYSDK_OFFSET(0xEA78160)
#define CLASS_3_E2F562E6FAB8DD5C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEA77A60)
#define CLASS_3_E2F562E6FAB8DD5C__CTOR_OFFSET UNITYSDK_OFFSET(0xEA77A30)

inline static constexpr unsigned int Class_3_E2F562E6FAB8DD5C_TypeDefinitionIndex = 44132;

class Class_3_E2F562E6FAB8DD5C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LockActionDelayChange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockActionDelayChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockActionDelayChange*))((::PBYTE)hIl2Cpp + CLASS_3_E2F562E6FAB8DD5C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2F562E6FAB8DD5C_ONTASKBEGIN_OFFSET))(this);
	}

	::Class_1_8AFC13302DAA04F7* Method_3_1ADB339809159D22(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::System::String* a2)
	{
		return ((::Class_1_8AFC13302DAA04F7*(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E2F562E6FAB8DD5C_METHOD_3_1ADB339809159D22_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_28F70786A9EB86A7(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::Class_1_8AFC13302DAA04F7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_8AFC13302DAA04F7*))((::PBYTE)hIl2Cpp + CLASS_3_E2F562E6FAB8DD5C_METHOD_3_28F70786A9EB86A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_ED5FD1855FD10F33(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E2F562E6FAB8DD5C_METHOD_3_ED5FD1855FD10F33_OFFSET))(this, a1, a2);
	}
};
