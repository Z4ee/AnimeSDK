#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_81F3F771E22D0900;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_29_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAECB650)
#define CLASS_3_4F91AE3B00DB7EFF_29__CTOR_OFFSET UNITYSDK_OFFSET(0xAECB620)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_29_TypeDefinitionIndex = 50609;

class Class_3_4F91AE3B00DB7EFF_29 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_81F3F771E22D0900*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_81F3F771E22D0900* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_81F3F771E22D0900*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_29__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_29_EVALUATE_OFFSET))(this);
	}
};
