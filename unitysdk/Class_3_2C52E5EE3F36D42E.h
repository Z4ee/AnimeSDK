#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByAngle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2C52E5EE3F36D42E_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE654960)
#define CLASS_3_2C52E5EE3F36D42E__CTOR_OFFSET UNITYSDK_OFFSET(0xE654930)

inline static constexpr unsigned int Class_3_2C52E5EE3F36D42E_TypeDefinitionIndex = 50257;

class Class_3_2C52E5EE3F36D42E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByAngle*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAngle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAngle*))((::PBYTE)hIl2Cpp + CLASS_3_2C52E5EE3F36D42E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C52E5EE3F36D42E_EVALUATE_OFFSET))(this);
	}
};
