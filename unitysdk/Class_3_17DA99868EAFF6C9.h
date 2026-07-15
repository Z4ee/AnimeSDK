#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class AddStageAbilityByName; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }

#define CLASS_3_17DA99868EAFF6C9_METHOD_3_40802934F9A451E7_OFFSET UNITYSDK_OFFSET(0x183E1970)
#define CLASS_3_17DA99868EAFF6C9_METHOD_3_4384D4E1D98F4564_OFFSET UNITYSDK_OFFSET(0x183E1B40)
#define CLASS_3_17DA99868EAFF6C9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x183E1740)
#define CLASS_3_17DA99868EAFF6C9__CTOR_OFFSET UNITYSDK_OFFSET(0x183E1710)

inline static constexpr unsigned int Class_3_17DA99868EAFF6C9_TypeDefinitionIndex = 52342;

class Class_3_17DA99868EAFF6C9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddStageAbilityByName*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddStageAbilityByName* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddStageAbilityByName*))((::PBYTE)hIl2Cpp + CLASS_3_17DA99868EAFF6C9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17DA99868EAFF6C9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_40802934F9A451E7(::RPG::GameCore::TurnBasedAbilityComponent*& a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*&, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_17DA99868EAFF6C9_METHOD_3_40802934F9A451E7_OFFSET))(this, a1, a2);
	}

	::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* Method_3_4384D4E1D98F4564()
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17DA99868EAFF6C9_METHOD_3_4384D4E1D98F4564_OFFSET))(this);
	}
};
