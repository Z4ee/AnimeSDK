#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_95EEF67A826E14FF;
namespace RPG::Client { class BattleBuffToastNotify; }
namespace RPG::GameCore { class StatusRow; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_6659C5C004EC1381_METHOD_1_1C1CFD4227920833_OFFSET UNITYSDK_OFFSET(0x1A7661B0)
#define CLASS_1_6659C5C004EC1381_METHOD_1_51623D21FF30FAC0_OFFSET UNITYSDK_OFFSET(0x1A765BE0)
#define CLASS_1_6659C5C004EC1381_METHOD_1_A9394A74D8235113_OFFSET UNITYSDK_OFFSET(0x1A765990)
#define CLASS_1_6659C5C004EC1381_METHOD_1_E572A84574CA3775_OFFSET UNITYSDK_OFFSET(0x1A766270)
#define CLASS_1_6659C5C004EC1381__CTOR_OFFSET UNITYSDK_OFFSET(0x1A766300)

inline static constexpr unsigned int Class_1_6659C5C004EC1381_TypeDefinitionIndex = 71498;

class Class_1_6659C5C004EC1381 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6659C5C004EC1381__CTOR_OFFSET))(this);
	}

	::Class_1_95EEF67A826E14FF* Method_1_A9394A74D8235113(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_1_95EEF67A826E14FF*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_6659C5C004EC1381_METHOD_1_A9394A74D8235113_OFFSET))(this, a1);
	}

	::Class_1_95EEF67A826E14FF* Method_1_E572A84574CA3775(::RPG::Client::BattleBuffToastNotify* a1)
	{
		return ((::Class_1_95EEF67A826E14FF*(*)(::PVOID, ::RPG::Client::BattleBuffToastNotify*))((::PBYTE)hIl2Cpp + CLASS_1_6659C5C004EC1381_METHOD_1_E572A84574CA3775_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1C1CFD4227920833(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_6659C5C004EC1381_METHOD_1_1C1CFD4227920833_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Object*>* Method_1_51623D21FF30FAC0(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::StatusRow* a2)
	{
		return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + CLASS_1_6659C5C004EC1381_METHOD_1_51623D21FF30FAC0_OFFSET))(this, a1, a2);
	}
};
