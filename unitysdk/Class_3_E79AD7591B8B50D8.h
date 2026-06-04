#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByStatusCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E79AD7591B8B50D8_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC94A260)
#define CLASS_3_E79AD7591B8B50D8__CTOR_OFFSET UNITYSDK_OFFSET(0xC94A230)

inline static constexpr unsigned int Class_3_E79AD7591B8B50D8_TypeDefinitionIndex = 51149;

class Class_3_E79AD7591B8B50D8 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByStatusCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByStatusCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByStatusCount*))((::PBYTE)hIl2Cpp + CLASS_3_E79AD7591B8B50D8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E79AD7591B8B50D8_EVALUATE_OFFSET))(this);
	}
};
