#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_42D34C054D3A28C4;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_60_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB8C7430)
#define CLASS_3_4F91AE3B00DB7EFF_60__CTOR_OFFSET UNITYSDK_OFFSET(0xB8C7400)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_60_TypeDefinitionIndex = 55060;

class Class_3_4F91AE3B00DB7EFF_60 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_42D34C054D3A28C4*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_42D34C054D3A28C4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_42D34C054D3A28C4*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_60__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_60_EVALUATE_OFFSET))(this);
	}
};
