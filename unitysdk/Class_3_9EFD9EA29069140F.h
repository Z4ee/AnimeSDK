#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByPamMovePhaseTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9EFD9EA29069140F_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18724490)
#define CLASS_3_9EFD9EA29069140F__CTOR_OFFSET UNITYSDK_OFFSET(0x18724460)

inline static constexpr unsigned int Class_3_9EFD9EA29069140F_TypeDefinitionIndex = 53415;

class Class_3_9EFD9EA29069140F : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByPamMovePhaseTalk*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPamMovePhaseTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPamMovePhaseTalk*))((::PBYTE)hIl2Cpp + CLASS_3_9EFD9EA29069140F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9EFD9EA29069140F_EVALUATE_OFFSET))(this);
	}
};
