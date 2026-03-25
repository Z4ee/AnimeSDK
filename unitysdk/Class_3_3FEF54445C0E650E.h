#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareEnvProfilePath; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3FEF54445C0E650E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11544E50)
#define CLASS_3_3FEF54445C0E650E__CTOR_OFFSET UNITYSDK_OFFSET(0x11544E20)

inline static constexpr unsigned int Class_3_3FEF54445C0E650E_TypeDefinitionIndex = 43002;

class Class_3_3FEF54445C0E650E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareEnvProfilePath*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareEnvProfilePath* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareEnvProfilePath*))((::PBYTE)hIl2Cpp + CLASS_3_3FEF54445C0E650E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FEF54445C0E650E_EVALUATE_OFFSET))(this);
	}
};
