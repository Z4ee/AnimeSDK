#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCanPlayIdleShow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5D1446376540B19E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15546A30)
#define CLASS_3_5D1446376540B19E__CTOR_OFFSET UNITYSDK_OFFSET(0x15546A00)

inline static constexpr unsigned int Class_3_5D1446376540B19E_TypeDefinitionIndex = 53127;

class Class_3_5D1446376540B19E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCanPlayIdleShow*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCanPlayIdleShow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCanPlayIdleShow*))((::PBYTE)hIl2Cpp + CLASS_3_5D1446376540B19E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D1446376540B19E_EVALUATE_OFFSET))(this);
	}
};
