#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHasCharacterRevived; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F3FD412772779BF6_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA65ED40)
#define CLASS_3_F3FD412772779BF6__CTOR_OFFSET UNITYSDK_OFFSET(0xA65ED10)

inline static constexpr unsigned int Class_3_F3FD412772779BF6_TypeDefinitionIndex = 51053;

class Class_3_F3FD412772779BF6 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHasCharacterRevived*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasCharacterRevived* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasCharacterRevived*))((::PBYTE)hIl2Cpp + CLASS_3_F3FD412772779BF6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3FD412772779BF6_EVALUATE_OFFSET))(this);
	}
};
