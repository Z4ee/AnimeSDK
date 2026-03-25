#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetBattleTargetMultiTargetSwitch; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F42F1E7D11A9306A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8E18480)
#define CLASS_3_F42F1E7D11A9306A__CTOR_OFFSET UNITYSDK_OFFSET(0x8E18450)

inline static constexpr unsigned int Class_3_F42F1E7D11A9306A_TypeDefinitionIndex = 47220;

class Class_3_F42F1E7D11A9306A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetBattleTargetMultiTargetSwitch*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleTargetMultiTargetSwitch* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleTargetMultiTargetSwitch*))((::PBYTE)hIl2Cpp + CLASS_3_F42F1E7D11A9306A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F42F1E7D11A9306A_ONTASKBEGIN_OFFSET))(this);
	}
};
