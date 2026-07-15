#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class MoveStageOnTargetForward; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4FCE46069780097C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14A1CC90)
#define CLASS_3_4FCE46069780097C__CTOR_OFFSET UNITYSDK_OFFSET(0x14A1CC60)

inline static constexpr unsigned int Class_3_4FCE46069780097C_TypeDefinitionIndex = 52726;

class Class_3_4FCE46069780097C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::MoveStageOnTargetForward*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MoveStageOnTargetForward* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MoveStageOnTargetForward*))((::PBYTE)hIl2Cpp + CLASS_3_4FCE46069780097C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4FCE46069780097C_ONTASKBEGIN_OFFSET))(this);
	}
};
