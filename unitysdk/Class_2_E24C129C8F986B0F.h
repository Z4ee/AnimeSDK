#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerModifierEnterBattle; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E24C129C8F986B0F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13CAA5B0)
#define CLASS_2_E24C129C8F986B0F_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x13CAADF0)
#define CLASS_2_E24C129C8F986B0F_METHOD_2_83F3488F646038A3_OFFSET UNITYSDK_OFFSET(0x13CAAFA0)
#define CLASS_2_E24C129C8F986B0F_METHOD_2_D4405B1C2CBD9D8F_OFFSET UNITYSDK_OFFSET(0x13CAB560)
#define CLASS_2_E24C129C8F986B0F_METHOD_2_EEB04BF960D675D2_OFFSET UNITYSDK_OFFSET(0x13CAAD70)
#define CLASS_2_E24C129C8F986B0F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13CAA5F0)
#define CLASS_2_E24C129C8F986B0F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13CAB510)
#define CLASS_2_E24C129C8F986B0F_TICK_OFFSET UNITYSDK_OFFSET(0x13CAB310)
#define CLASS_2_E24C129C8F986B0F__CTOR_OFFSET UNITYSDK_OFFSET(0x13CAA4A0)
#define CLASS_2_E24C129C8F986B0F__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0x13CAB640)

inline static constexpr unsigned int Class_2_E24C129C8F986B0F_TypeDefinitionIndex = 52065;

class Class_2_E24C129C8F986B0F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::TriggerModifierEnterBattle* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_2; // 0x28
	::Class_1_5F51D4049EA87B7B* Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x39
	::System::Int32 Field_2_6; // 0x3C
	::System::Int32 Field_2_7; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerModifierEnterBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerModifierEnterBattle*))((::PBYTE)hIl2Cpp + CLASS_2_E24C129C8F986B0F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24C129C8F986B0F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24C129C8F986B0F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24C129C8F986B0F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E24C129C8F986B0F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_83F3488F646038A3(::RPG::GameCore::TurnBasedModifierInstance* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E24C129C8F986B0F_METHOD_2_83F3488F646038A3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24C129C8F986B0F_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_EEB04BF960D675D2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E24C129C8F986B0F_METHOD_2_EEB04BF960D675D2_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_D4405B1C2CBD9D8F(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E24C129C8F986B0F_METHOD_2_D4405B1C2CBD9D8F_OFFSET))(this, a1);
	}

	::System::Int32 _OnTaskBegin_b__3_0(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E24C129C8F986B0F__ONTASKBEGIN_B__3_0_OFFSET))(this, a1, a2);
	}
};
