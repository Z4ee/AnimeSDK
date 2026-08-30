#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByCheckWindowPermCodes; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EAE2982F1219AEC8_EVALUATE_OFFSET UNITYSDK_OFFSET(0x172252A0)
#define CLASS_3_EAE2982F1219AEC8__CTOR_OFFSET UNITYSDK_OFFSET(0x17225270)

inline static constexpr unsigned int Class_3_EAE2982F1219AEC8_TypeDefinitionIndex = 53094;

class Class_3_EAE2982F1219AEC8 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByCheckWindowPermCodes*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCheckWindowPermCodes* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCheckWindowPermCodes*))((::PBYTE)hIl2Cpp + CLASS_3_EAE2982F1219AEC8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EAE2982F1219AEC8_EVALUATE_OFFSET))(this);
	}
};
