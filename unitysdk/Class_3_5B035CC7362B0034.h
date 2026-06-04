#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsDamageLuckCritical; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5B035CC7362B0034_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA44BF50)
#define CLASS_3_5B035CC7362B0034__CTOR_OFFSET UNITYSDK_OFFSET(0xA44BF20)

inline static constexpr unsigned int Class_3_5B035CC7362B0034_TypeDefinitionIndex = 51088;

class Class_3_5B035CC7362B0034 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsDamageLuckCritical*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsDamageLuckCritical* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsDamageLuckCritical*))((::PBYTE)hIl2Cpp + CLASS_3_5B035CC7362B0034__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B035CC7362B0034_EVALUATE_OFFSET))(this);
	}
};
