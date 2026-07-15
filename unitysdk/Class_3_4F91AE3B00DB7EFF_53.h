#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_DB9508DE847AEC59;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_53_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15247860)
#define CLASS_3_4F91AE3B00DB7EFF_53__CTOR_OFFSET UNITYSDK_OFFSET(0x15247830)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_53_TypeDefinitionIndex = 52585;

class Class_3_4F91AE3B00DB7EFF_53 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_DB9508DE847AEC59*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_DB9508DE847AEC59* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_DB9508DE847AEC59*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_53__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_53_EVALUATE_OFFSET))(this);
	}
};
