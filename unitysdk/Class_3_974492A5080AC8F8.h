#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SwitchMascotSetPickupCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_974492A5080AC8F8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11452500)
#define CLASS_3_974492A5080AC8F8__CTOR_OFFSET UNITYSDK_OFFSET(0x114524D0)

inline static constexpr unsigned int Class_3_974492A5080AC8F8_TypeDefinitionIndex = 47429;

class Class_3_974492A5080AC8F8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchMascotSetPickupCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchMascotSetPickupCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchMascotSetPickupCount*))((::PBYTE)hIl2Cpp + CLASS_3_974492A5080AC8F8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_974492A5080AC8F8_ONTASKBEGIN_OFFSET))(this);
	}
};
