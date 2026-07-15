#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerModifierLeaveBattle; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E930342F516A312E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14CFFD50)
#define CLASS_2_E930342F516A312E_METHOD_2_EEB04BF960D675D2_OFFSET UNITYSDK_OFFSET(0x14D00200)
#define CLASS_2_E930342F516A312E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14CFFDF0)
#define CLASS_2_E930342F516A312E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14D00280)
#define CLASS_2_E930342F516A312E_TICK_OFFSET UNITYSDK_OFFSET(0x14CFFD90)
#define CLASS_2_E930342F516A312E__CTOR_OFFSET UNITYSDK_OFFSET(0x14CFFD00)

inline static constexpr unsigned int Class_2_E930342F516A312E_TypeDefinitionIndex = 53225;

class Class_2_E930342F516A312E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerModifierLeaveBattle* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28

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
