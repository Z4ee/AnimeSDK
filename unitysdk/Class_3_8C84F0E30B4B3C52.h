#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareAlertValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8C84F0E30B4B3C52_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB858260)
#define CLASS_3_8C84F0E30B4B3C52__CTOR_OFFSET UNITYSDK_OFFSET(0xB858230)

inline static constexpr unsigned int Class_3_8C84F0E30B4B3C52_TypeDefinitionIndex = 54673;

class Class_3_8C84F0E30B4B3C52 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareAlertValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareAlertValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareAlertValue*))((::PBYTE)hIl2Cpp + CLASS_3_8C84F0E30B4B3C52__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C84F0E30B4B3C52_EVALUATE_OFFSET))(this);
	}
};
