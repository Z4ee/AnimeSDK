#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class MuteTargetTimeSlow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EAA7C9811CC4546E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x130A8040)
#define CLASS_3_EAA7C9811CC4546E__CTOR_OFFSET UNITYSDK_OFFSET(0x130A8010)

inline static constexpr unsigned int Class_3_EAA7C9811CC4546E_TypeDefinitionIndex = 55431;

class Class_3_EAA7C9811CC4546E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::MuteTargetTimeSlow*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MuteTargetTimeSlow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MuteTargetTimeSlow*))((::PBYTE)hIl2Cpp + CLASS_3_EAA7C9811CC4546E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EAA7C9811CC4546E_ONTASKBEGIN_OFFSET))(this);
	}
};
