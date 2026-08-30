#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerModifierLeaveBattle; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E930342F516A312E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFEAB20)
#define CLASS_2_E930342F516A312E_METHOD_2_EEB04BF960D675D2_OFFSET UNITYSDK_OFFSET(0xBFEAFD0)
#define CLASS_2_E930342F516A312E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFEABC0)
#define CLASS_2_E930342F516A312E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBFEB050)
#define CLASS_2_E930342F516A312E_TICK_OFFSET UNITYSDK_OFFSET(0xBFEAB60)
#define CLASS_2_E930342F516A312E__CTOR_OFFSET UNITYSDK_OFFSET(0xBFEAAD0)

inline static constexpr unsigned int Class_2_E930342F516A312E_TypeDefinitionIndex = 55939;

class Class_2_E930342F516A312E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::TriggerModifierLeaveBattle* OFKGLJOAMLD; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* AFFKHDBKGOJ; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerModifierLeaveBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerModifierLeaveBattle*))((::PBYTE)hIl2Cpp + CLASS_2_E930342F516A312E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E930342F516A312E_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E930342F516A312E_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E930342F516A312E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E930342F516A312E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_EEB04BF960D675D2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E930342F516A312E_METHOD_2_EEB04BF960D675D2_OFFSET))(this, a1);
	}
};
