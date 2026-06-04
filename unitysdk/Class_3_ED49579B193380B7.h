#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareChangeValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_ED49579B193380B7_EVALUATE_OFFSET UNITYSDK_OFFSET(0x141D07E0)
#define CLASS_3_ED49579B193380B7__CTOR_OFFSET UNITYSDK_OFFSET(0x141D07B0)

inline static constexpr unsigned int Class_3_ED49579B193380B7_TypeDefinitionIndex = 50962;

class Class_3_ED49579B193380B7 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareChangeValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareChangeValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareChangeValue*))((::PBYTE)hIl2Cpp + CLASS_3_ED49579B193380B7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ED49579B193380B7_EVALUATE_OFFSET))(this);
	}
};
