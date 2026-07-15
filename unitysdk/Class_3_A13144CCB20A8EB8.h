#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PauseTimeRewindTargetInRange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A13144CCB20A8EB8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17650FC0)
#define CLASS_3_A13144CCB20A8EB8__CTOR_OFFSET UNITYSDK_OFFSET(0x17650F90)

inline static constexpr unsigned int Class_3_A13144CCB20A8EB8_TypeDefinitionIndex = 50954;

class Class_3_A13144CCB20A8EB8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PauseTimeRewindTargetInRange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PauseTimeRewindTargetInRange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PauseTimeRewindTargetInRange*))((::PBYTE)hIl2Cpp + CLASS_3_A13144CCB20A8EB8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A13144CCB20A8EB8_ONTASKBEGIN_OFFSET))(this);
	}
};
