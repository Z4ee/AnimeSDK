#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SwitchMascotSetSectionVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_38B43B942353F253_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8FA0700)
#define CLASS_3_38B43B942353F253__CTOR_OFFSET UNITYSDK_OFFSET(0x8FA06D0)

inline static constexpr unsigned int Class_3_38B43B942353F253_TypeDefinitionIndex = 54165;

class Class_3_38B43B942353F253 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchMascotSetSectionVisible*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchMascotSetSectionVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchMascotSetSectionVisible*))((::PBYTE)hIl2Cpp + CLASS_3_38B43B942353F253__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38B43B942353F253_ONTASKBEGIN_OFFSET))(this);
	}
};
