#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_C1D584E9758BB4C6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_30_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA7414E0)
#define CLASS_3_4F91AE3B00DB7EFF_30__CTOR_OFFSET UNITYSDK_OFFSET(0xA7414B0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_30_TypeDefinitionIndex = 50610;

class Class_3_4F91AE3B00DB7EFF_30 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_C1D584E9758BB4C6*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_C1D584E9758BB4C6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_C1D584E9758BB4C6*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_30__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_30_EVALUATE_OFFSET))(this);
	}
};
