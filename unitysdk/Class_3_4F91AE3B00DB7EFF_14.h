#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_327F75E212567CB8;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_14_EVALUATE_OFFSET UNITYSDK_OFFSET(0x180025C0)
#define CLASS_3_4F91AE3B00DB7EFF_14__CTOR_OFFSET UNITYSDK_OFFSET(0x18002590)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_14_TypeDefinitionIndex = 53593;

class Class_3_4F91AE3B00DB7EFF_14 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_327F75E212567CB8*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_327F75E212567CB8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_327F75E212567CB8*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_14__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_14_EVALUATE_OFFSET))(this);
	}
};
