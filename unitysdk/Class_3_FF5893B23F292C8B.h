#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LockTargetShield; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FF5893B23F292C8B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15646270)
#define CLASS_3_FF5893B23F292C8B__CTOR_OFFSET UNITYSDK_OFFSET(0x15646240)

inline static constexpr unsigned int Class_3_FF5893B23F292C8B_TypeDefinitionIndex = 52658;

class Class_3_FF5893B23F292C8B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LockTargetShield*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockTargetShield* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockTargetShield*))((::PBYTE)hIl2Cpp + CLASS_3_FF5893B23F292C8B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF5893B23F292C8B_ONTASKBEGIN_OFFSET))(this);
	}
};
