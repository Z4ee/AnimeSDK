#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvLogisticsRobotTriggerLoad; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6BE5A8CFF24C3869_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x896F230)
#define CLASS_3_6BE5A8CFF24C3869__CTOR_OFFSET UNITYSDK_OFFSET(0x896F200)

inline static constexpr unsigned int Class_3_6BE5A8CFF24C3869_TypeDefinitionIndex = 42410;

class Class_3_6BE5A8CFF24C3869 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvLogisticsRobotTriggerLoad*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvLogisticsRobotTriggerLoad* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvLogisticsRobotTriggerLoad*))((::PBYTE)hIl2Cpp + CLASS_3_6BE5A8CFF24C3869__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BE5A8CFF24C3869_ONTASKBEGIN_OFFSET))(this);
	}
};
