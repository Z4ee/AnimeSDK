#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_2C6327E657DA8BCC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_21_EVALUATE_OFFSET UNITYSDK_OFFSET(0x152DCFB0)
#define CLASS_3_4F91AE3B00DB7EFF_21__CTOR_OFFSET UNITYSDK_OFFSET(0x152DCF80)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_21_TypeDefinitionIndex = 51372;

class Class_3_4F91AE3B00DB7EFF_21 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_2C6327E657DA8BCC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_2C6327E657DA8BCC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_2C6327E657DA8BCC*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_21__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_21_EVALUATE_OFFSET))(this);
	}
};
