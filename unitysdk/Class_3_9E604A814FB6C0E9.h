#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByPamActionPhaseTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9E604A814FB6C0E9_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1570B440)
#define CLASS_3_9E604A814FB6C0E9__CTOR_OFFSET UNITYSDK_OFFSET(0x1570B410)

inline static constexpr unsigned int Class_3_9E604A814FB6C0E9_TypeDefinitionIndex = 53412;

class Class_3_9E604A814FB6C0E9 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByPamActionPhaseTalk*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPamActionPhaseTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPamActionPhaseTalk*))((::PBYTE)hIl2Cpp + CLASS_3_9E604A814FB6C0E9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E604A814FB6C0E9_EVALUATE_OFFSET))(this);
	}
};
