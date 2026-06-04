#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckCustomValueBool; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_204977725A95030F_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12A950E0)
#define CLASS_3_204977725A95030F__CTOR_OFFSET UNITYSDK_OFFSET(0x12A950B0)

inline static constexpr unsigned int Class_3_204977725A95030F_TypeDefinitionIndex = 50938;

class Class_3_204977725A95030F : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckCustomValueBool*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckCustomValueBool* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckCustomValueBool*))((::PBYTE)hIl2Cpp + CLASS_3_204977725A95030F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_204977725A95030F_EVALUATE_OFFSET))(this);
	}
};
