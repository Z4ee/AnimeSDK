#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OpticalIllusionSwitchCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0390FC77042B398B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA5244C0)
#define CLASS_3_0390FC77042B398B__CTOR_OFFSET UNITYSDK_OFFSET(0xA524490)

inline static constexpr unsigned int Class_3_0390FC77042B398B_TypeDefinitionIndex = 49584;

class Class_3_0390FC77042B398B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OpticalIllusionSwitchCamera*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpticalIllusionSwitchCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpticalIllusionSwitchCamera*))((::PBYTE)hIl2Cpp + CLASS_3_0390FC77042B398B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0390FC77042B398B_ONTASKBEGIN_OFFSET))(this);
	}
};
