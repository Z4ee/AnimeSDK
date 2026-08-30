#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_962A171D9D578327_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_24_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1561F380)
#define CLASS_3_4F91AE3B00DB7EFF_24__CTOR_OFFSET UNITYSDK_OFFSET(0x1561F350)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_24_TypeDefinitionIndex = 54085;

class Class_3_4F91AE3B00DB7EFF_24 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_962A171D9D578327_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_962A171D9D578327_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_962A171D9D578327_1*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_24__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_24_EVALUATE_OFFSET))(this);
	}
};
