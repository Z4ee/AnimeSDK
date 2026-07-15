#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class ByTargetContainerRatioInRect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_19C11554C812FDD3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17DBD210)
#define CLASS_3_19C11554C812FDD3__CTOR_OFFSET UNITYSDK_OFFSET(0x17DBD130)

inline static constexpr unsigned int Class_3_19C11554C812FDD3_TypeDefinitionIndex = 50741;

class Class_3_19C11554C812FDD3 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTargetContainerRatioInRect*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetContainerRatioInRect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetContainerRatioInRect*))((::PBYTE)hIl2Cpp + CLASS_3_19C11554C812FDD3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_19C11554C812FDD3_EVALUATE_OFFSET))(this);
	}
};
