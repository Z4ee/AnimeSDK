#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_C52396BE76BDF2EA;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_35_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8FC25B0)
#define CLASS_3_4F91AE3B00DB7EFF_35__CTOR_OFFSET UNITYSDK_OFFSET(0x8FC2580)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_35_TypeDefinitionIndex = 50314;

class Class_3_4F91AE3B00DB7EFF_35 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_C52396BE76BDF2EA*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_C52396BE76BDF2EA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_C52396BE76BDF2EA*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_35_EVALUATE_OFFSET))(this);
	}
};
