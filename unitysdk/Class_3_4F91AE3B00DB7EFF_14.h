#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_6F740814D9094F5F_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_14_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1798CC30)
#define CLASS_3_4F91AE3B00DB7EFF_14__CTOR_OFFSET UNITYSDK_OFFSET(0x1798CC00)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_14_TypeDefinitionIndex = 51173;

class Class_3_4F91AE3B00DB7EFF_14 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_6F740814D9094F5F_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_6F740814D9094F5F_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_6F740814D9094F5F_1*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_14__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_14_EVALUATE_OFFSET))(this);
	}
};
