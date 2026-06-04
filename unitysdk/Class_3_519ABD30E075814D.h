#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareHP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_519ABD30E075814D_EVALUATE_OFFSET UNITYSDK_OFFSET(0xABDBAF0)
#define CLASS_3_519ABD30E075814D__CTOR_OFFSET UNITYSDK_OFFSET(0xABDBAC0)

inline static constexpr unsigned int Class_3_519ABD30E075814D_TypeDefinitionIndex = 50978;

class Class_3_519ABD30E075814D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareHP*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareHP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareHP*))((::PBYTE)hIl2Cpp + CLASS_3_519ABD30E075814D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_519ABD30E075814D_EVALUATE_OFFSET))(this);
	}
};
