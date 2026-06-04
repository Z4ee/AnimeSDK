#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_232F1518392E1F66;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_31_EVALUATE_OFFSET UNITYSDK_OFFSET(0x112ABF50)
#define CLASS_3_4F91AE3B00DB7EFF_31__CTOR_OFFSET UNITYSDK_OFFSET(0x112ABF20)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_31_TypeDefinitionIndex = 50611;

class Class_3_4F91AE3B00DB7EFF_31 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_232F1518392E1F66*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_232F1518392E1F66* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_232F1518392E1F66*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_31__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_31_EVALUATE_OFFSET))(this);
	}
};
