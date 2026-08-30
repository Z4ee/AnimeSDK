#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OverrideEntityModifierPhaseCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8FF89E8D54C6B4D7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1587BFE0)
#define CLASS_3_8FF89E8D54C6B4D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1587BFB0)

inline static constexpr unsigned int Class_3_8FF89E8D54C6B4D7_TypeDefinitionIndex = 55440;

class Class_3_8FF89E8D54C6B4D7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OverrideEntityModifierPhaseCamera*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideEntityModifierPhaseCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideEntityModifierPhaseCamera*))((::PBYTE)hIl2Cpp + CLASS_3_8FF89E8D54C6B4D7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FF89E8D54C6B4D7_ONTASKBEGIN_OFFSET))(this);
	}
};
