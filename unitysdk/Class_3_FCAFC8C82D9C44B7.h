#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvOnTargetLost; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FCAFC8C82D9C44B7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10685750)
#define CLASS_3_FCAFC8C82D9C44B7__CTOR_OFFSET UNITYSDK_OFFSET(0x10685720)

inline static constexpr unsigned int Class_3_FCAFC8C82D9C44B7_TypeDefinitionIndex = 42473;

class Class_3_FCAFC8C82D9C44B7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvOnTargetLost*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvOnTargetLost* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvOnTargetLost*))((::PBYTE)hIl2Cpp + CLASS_3_FCAFC8C82D9C44B7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FCAFC8C82D9C44B7_ONTASKBEGIN_OFFSET))(this);
	}
};
