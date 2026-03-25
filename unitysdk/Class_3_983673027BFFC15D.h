#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareStoryLineID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_983673027BFFC15D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11647B80)
#define CLASS_3_983673027BFFC15D__CTOR_OFFSET UNITYSDK_OFFSET(0x11647B50)

inline static constexpr unsigned int Class_3_983673027BFFC15D_TypeDefinitionIndex = 43931;

class Class_3_983673027BFFC15D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareStoryLineID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareStoryLineID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareStoryLineID*))((::PBYTE)hIl2Cpp + CLASS_3_983673027BFFC15D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_983673027BFFC15D_EVALUATE_OFFSET))(this);
	}
};
