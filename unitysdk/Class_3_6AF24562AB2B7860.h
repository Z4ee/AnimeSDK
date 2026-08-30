#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsDamageType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6AF24562AB2B7860_EVALUATE_OFFSET UNITYSDK_OFFSET(0x165B1E60)
#define CLASS_3_6AF24562AB2B7860__CTOR_OFFSET UNITYSDK_OFFSET(0x165B1E30)

inline static constexpr unsigned int Class_3_6AF24562AB2B7860_TypeDefinitionIndex = 54861;

class Class_3_6AF24562AB2B7860 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsDamageType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsDamageType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsDamageType*))((::PBYTE)hIl2Cpp + CLASS_3_6AF24562AB2B7860__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6AF24562AB2B7860_EVALUATE_OFFSET))(this);
	}
};
