#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareSpecialSPRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C7AB00BA2FDE4A14_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A037EC0)
#define CLASS_3_C7AB00BA2FDE4A14__CTOR_OFFSET UNITYSDK_OFFSET(0x1A037E90)

inline static constexpr unsigned int Class_3_C7AB00BA2FDE4A14_TypeDefinitionIndex = 54782;

class Class_3_C7AB00BA2FDE4A14 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareSpecialSPRatio*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSpecialSPRatio* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSpecialSPRatio*))((::PBYTE)hIl2Cpp + CLASS_3_C7AB00BA2FDE4A14__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7AB00BA2FDE4A14_EVALUATE_OFFSET))(this);
	}
};
