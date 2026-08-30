#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_E96CE06DD2A46EC2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_29_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB9928B0)
#define CLASS_3_4F91AE3B00DB7EFF_29__CTOR_OFFSET UNITYSDK_OFFSET(0xB992880)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_29_TypeDefinitionIndex = 54101;

class Class_3_4F91AE3B00DB7EFF_29 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_E96CE06DD2A46EC2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_E96CE06DD2A46EC2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_E96CE06DD2A46EC2*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_29__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_29_EVALUATE_OFFSET))(this);
	}
};
