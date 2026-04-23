#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdventureForbidAttackTriggerBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D306281F75D51336_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x91E6060)
#define CLASS_3_D306281F75D51336__CTOR_OFFSET UNITYSDK_OFFSET(0x91E6030)

inline static constexpr unsigned int Class_3_D306281F75D51336_TypeDefinitionIndex = 53392;

class Class_3_D306281F75D51336 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureForbidAttackTriggerBattle*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureForbidAttackTriggerBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureForbidAttackTriggerBattle*))((::PBYTE)hIl2Cpp + CLASS_3_D306281F75D51336__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D306281F75D51336_ONTASKBEGIN_OFFSET))(this);
	}
};
