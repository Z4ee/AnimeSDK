#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/ModifierCustomEventSortType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_0_16E4307DCC419505_375;
class Class_1_5F51D4049EA87B7B;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifierCustomEventConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerModifierCustomEvent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_3_524C7B39734B3AFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD16FF50)
#define CLASS_3_524C7B39734B3AFD_METHOD_3_2576376AC7F6B15D_OFFSET UNITYSDK_OFFSET(0xD170E60)
#define CLASS_3_524C7B39734B3AFD_METHOD_3_DB915699370309DA_OFFSET UNITYSDK_OFFSET(0xD171120)
#define CLASS_3_524C7B39734B3AFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD16FFA0)
#define CLASS_3_524C7B39734B3AFD__CTOR_OFFSET UNITYSDK_OFFSET(0xD16FDF0)
#define CLASS_3_524C7B39734B3AFD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD171490)

inline static constexpr unsigned int Class_3_524C7B39734B3AFD_TypeDefinitionIndex = 44654;

class Class_3_524C7B39734B3AFD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerModifierCustomEvent*>
{
public:
	::Class_1_5F51D4049EA87B7B* Field_3_0; // 0x28
	::RPG::GameCore::ModifierCustomEventConfig* Field_3_6; // 0x30
	::RPG::PoolList_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_3_5; // 0x38
	::RPG::GameCore::GameEntity* Field_3_7; // 0x40
	::RPG::GameCore::GameEntity* Field_3_8; // 0x48
	::RPG::GameCore::ModifierCustomEventSortType Field_3_3; // 0x50
	::RPG::GameCore::StringHash Field_3_1; // 0x54
	::System::Int32 Field_3_4; // 0x58
	::System::Int32 Field_3_2; // 0x5C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerModifierCustomEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerModifierCustomEvent*))((::PBYTE)hIl2Cpp + CLASS_3_524C7B39734B3AFD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_524C7B39734B3AFD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_524C7B39734B3AFD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_2576376AC7F6B15D(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::ModifierCustomEventConfig* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::ModifierCustomEventConfig*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_524C7B39734B3AFD_METHOD_3_2576376AC7F6B15D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_DB915699370309DA(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_3_524C7B39734B3AFD_METHOD_3_DB915699370309DA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_524C7B39734B3AFD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
