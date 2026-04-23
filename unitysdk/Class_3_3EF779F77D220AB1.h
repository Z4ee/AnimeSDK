#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvEnableEntityLinkCable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3EF779F77D220AB1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x92249C0)
#define CLASS_3_3EF779F77D220AB1__CTOR_OFFSET UNITYSDK_OFFSET(0x9224990)

inline static constexpr unsigned int Class_3_3EF779F77D220AB1_TypeDefinitionIndex = 48327;

class Class_3_3EF779F77D220AB1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvEnableEntityLinkCable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEnableEntityLinkCable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEnableEntityLinkCable*))((::PBYTE)hIl2Cpp + CLASS_3_3EF779F77D220AB1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3EF779F77D220AB1_ONTASKBEGIN_OFFSET))(this);
	}
};
