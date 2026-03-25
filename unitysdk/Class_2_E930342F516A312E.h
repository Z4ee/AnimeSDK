#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerModifierLeaveBattle; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E930342F516A312E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1C60C0)
#define CLASS_2_E930342F516A312E_METHOD_2_790BBED27FA7A2E4_OFFSET UNITYSDK_OFFSET(0xA1C6510)
#define CLASS_2_E930342F516A312E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA1C6160)
#define CLASS_2_E930342F516A312E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA1C6590)
#define CLASS_2_E930342F516A312E_TICK_OFFSET UNITYSDK_OFFSET(0xA1C6100)
#define CLASS_2_E930342F516A312E__CTOR_OFFSET UNITYSDK_OFFSET(0xA1C6070)

inline static constexpr unsigned int Class_2_E930342F516A312E_TypeDefinitionIndex = 44658;

class Class_2_E930342F516A312E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_2; // 0x18
	::RPG::GameCore::TriggerModifierLeaveBattle* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_0; // 0x28

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

	::System::Void Method_2_790BBED27FA7A2E4(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E930342F516A312E_METHOD_2_790BBED27FA7A2E4_OFFSET))(this, a1);
	}
};
