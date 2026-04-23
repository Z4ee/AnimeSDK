#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_4DB89EBAD1A1F6DD;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_26_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1254D830)
#define CLASS_3_4F91AE3B00DB7EFF_26__CTOR_OFFSET UNITYSDK_OFFSET(0x1254D800)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_26_TypeDefinitionIndex = 49700;

class Class_3_4F91AE3B00DB7EFF_26 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_4DB89EBAD1A1F6DD*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_4DB89EBAD1A1F6DD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_4DB89EBAD1A1F6DD*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_26__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_26_EVALUATE_OFFSET))(this);
	}
};
