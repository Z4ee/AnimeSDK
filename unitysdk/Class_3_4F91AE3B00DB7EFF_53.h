#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_2F8B9B00BFAF5839;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_53_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15BD2460)
#define CLASS_3_4F91AE3B00DB7EFF_53__CTOR_OFFSET UNITYSDK_OFFSET(0x15BD2430)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_53_TypeDefinitionIndex = 54908;

class Class_3_4F91AE3B00DB7EFF_53 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_2F8B9B00BFAF5839*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_2F8B9B00BFAF5839* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_2F8B9B00BFAF5839*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_53__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_53_EVALUATE_OFFSET))(this);
	}
};
