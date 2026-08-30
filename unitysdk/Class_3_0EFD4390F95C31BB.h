#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetBattleTargetDialogOffset; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0EFD4390F95C31BB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154982A0)
#define CLASS_3_0EFD4390F95C31BB__CTOR_OFFSET UNITYSDK_OFFSET(0x15498270)

inline static constexpr unsigned int Class_3_0EFD4390F95C31BB_TypeDefinitionIndex = 48068;

class Class_3_0EFD4390F95C31BB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetBattleTargetDialogOffset*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleTargetDialogOffset* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleTargetDialogOffset*))((::PBYTE)hIl2Cpp + CLASS_3_0EFD4390F95C31BB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0EFD4390F95C31BB_ONTASKBEGIN_OFFSET))(this);
	}
};
