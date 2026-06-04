#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_7C38BD1AB441597F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_34_EVALUATE_OFFSET UNITYSDK_OFFSET(0x138F5610)
#define CLASS_3_4F91AE3B00DB7EFF_34__CTOR_OFFSET UNITYSDK_OFFSET(0x138F55E0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_34_TypeDefinitionIndex = 50939;

class Class_3_4F91AE3B00DB7EFF_34 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_7C38BD1AB441597F*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_7C38BD1AB441597F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_7C38BD1AB441597F*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_34__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_34_EVALUATE_OFFSET))(this);
	}
};
