#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_7346DBE182E81BAF;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_30_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14A50AA0)
#define CLASS_3_4F91AE3B00DB7EFF_30__CTOR_OFFSET UNITYSDK_OFFSET(0x14A50A70)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_30_TypeDefinitionIndex = 51420;

class Class_3_4F91AE3B00DB7EFF_30 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_7346DBE182E81BAF*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_7346DBE182E81BAF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_7346DBE182E81BAF*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_30__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_30_EVALUATE_OFFSET))(this);
	}
};
