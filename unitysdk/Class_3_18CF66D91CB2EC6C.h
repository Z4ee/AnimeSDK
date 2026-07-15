#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnableIsometricTeleport; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_18CF66D91CB2EC6C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDD8B590)
#define CLASS_3_18CF66D91CB2EC6C__CTOR_OFFSET UNITYSDK_OFFSET(0xDD8B560)

inline static constexpr unsigned int Class_3_18CF66D91CB2EC6C_TypeDefinitionIndex = 50355;

class Class_3_18CF66D91CB2EC6C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableIsometricTeleport*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableIsometricTeleport* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableIsometricTeleport*))((::PBYTE)hIl2Cpp + CLASS_3_18CF66D91CB2EC6C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18CF66D91CB2EC6C_ONTASKBEGIN_OFFSET))(this);
	}
};
