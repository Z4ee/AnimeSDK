#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_E96CE06DD2A46EC2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_22_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA66AEF0)
#define CLASS_3_4F91AE3B00DB7EFF_22__CTOR_OFFSET UNITYSDK_OFFSET(0xA66AEC0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_22_TypeDefinitionIndex = 50335;

class Class_3_4F91AE3B00DB7EFF_22 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_E96CE06DD2A46EC2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_E96CE06DD2A46EC2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_E96CE06DD2A46EC2*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_22__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_22_EVALUATE_OFFSET))(this);
	}
};
