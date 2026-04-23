#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByTargetVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6FB544A4FADA2AF3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x91591D0)
#define CLASS_3_6FB544A4FADA2AF3__CTOR_OFFSET UNITYSDK_OFFSET(0x91591A0)

inline static constexpr unsigned int Class_3_6FB544A4FADA2AF3_TypeDefinitionIndex = 51993;

class Class_3_6FB544A4FADA2AF3 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTargetVisible*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetVisible*))((::PBYTE)hIl2Cpp + CLASS_3_6FB544A4FADA2AF3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6FB544A4FADA2AF3_EVALUATE_OFFSET))(this);
	}
};
