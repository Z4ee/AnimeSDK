#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_E96CE06DD2A46EC2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_21_EVALUATE_OFFSET UNITYSDK_OFFSET(0xECA66B0)
#define CLASS_3_4F91AE3B00DB7EFF_21__CTOR_OFFSET UNITYSDK_OFFSET(0xECA6680)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_21_TypeDefinitionIndex = 49668;

class Class_3_4F91AE3B00DB7EFF_21 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_E96CE06DD2A46EC2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_E96CE06DD2A46EC2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_E96CE06DD2A46EC2*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_21__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_21_EVALUATE_OFFSET))(this);
	}
};
