#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_6C451618FA553762_6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_43_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA62A6A0)
#define CLASS_3_4F91AE3B00DB7EFF_43__CTOR_OFFSET UNITYSDK_OFFSET(0xA62A670)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_43_TypeDefinitionIndex = 54185;

class Class_3_4F91AE3B00DB7EFF_43 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_6C451618FA553762_6*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_6C451618FA553762_6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_6C451618FA553762_6*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_43__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_43_EVALUATE_OFFSET))(this);
	}
};
