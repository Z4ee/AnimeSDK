#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SwitchMascotResetSection; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4D8FEC5C4995E2E8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1F6980)
#define CLASS_3_4D8FEC5C4995E2E8__CTOR_OFFSET UNITYSDK_OFFSET(0xB1F6950)

inline static constexpr unsigned int Class_3_4D8FEC5C4995E2E8_TypeDefinitionIndex = 54162;

class Class_3_4D8FEC5C4995E2E8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchMascotResetSection*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchMascotResetSection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchMascotResetSection*))((::PBYTE)hIl2Cpp + CLASS_3_4D8FEC5C4995E2E8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D8FEC5C4995E2E8_ONTASKBEGIN_OFFSET))(this);
	}
};
