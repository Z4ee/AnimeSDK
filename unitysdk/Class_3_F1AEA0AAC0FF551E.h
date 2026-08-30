#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SwitchMascotSetHudActive; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F1AEA0AAC0FF551E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x189766C0)
#define CLASS_3_F1AEA0AAC0FF551E__CTOR_OFFSET UNITYSDK_OFFSET(0x18976690)

inline static constexpr unsigned int Class_3_F1AEA0AAC0FF551E_TypeDefinitionIndex = 58897;

class Class_3_F1AEA0AAC0FF551E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchMascotSetHudActive*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchMascotSetHudActive* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchMascotSetHudActive*))((::PBYTE)hIl2Cpp + CLASS_3_F1AEA0AAC0FF551E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F1AEA0AAC0FF551E_ONTASKBEGIN_OFFSET))(this);
	}
};
