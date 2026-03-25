#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SwitchOverrideController; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_93FC0C4A34700175_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10957780)
#define CLASS_3_93FC0C4A34700175__CTOR_OFFSET UNITYSDK_OFFSET(0x10957750)

inline static constexpr unsigned int Class_3_93FC0C4A34700175_TypeDefinitionIndex = 44609;

class Class_3_93FC0C4A34700175 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchOverrideController*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchOverrideController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchOverrideController*))((::PBYTE)hIl2Cpp + CLASS_3_93FC0C4A34700175__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_93FC0C4A34700175_ONTASKBEGIN_OFFSET))(this);
	}
};
