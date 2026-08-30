#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByGridFightCharacterIsPreset; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CB2ABD997FB23A8B_EVALUATE_OFFSET UNITYSDK_OFFSET(0x180AB020)
#define CLASS_3_CB2ABD997FB23A8B__CTOR_OFFSET UNITYSDK_OFFSET(0x180AAFF0)

inline static constexpr unsigned int Class_3_CB2ABD997FB23A8B_TypeDefinitionIndex = 54817;

class Class_3_CB2ABD997FB23A8B : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByGridFightCharacterIsPreset*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByGridFightCharacterIsPreset* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByGridFightCharacterIsPreset*))((::PBYTE)hIl2Cpp + CLASS_3_CB2ABD997FB23A8B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB2ABD997FB23A8B_EVALUATE_OFFSET))(this);
	}
};
