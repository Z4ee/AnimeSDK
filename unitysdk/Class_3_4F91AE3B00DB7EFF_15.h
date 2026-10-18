#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_327F75E212567CB8;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_15_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15DB41A0)
#define CLASS_3_4F91AE3B00DB7EFF_15__CTOR_OFFSET UNITYSDK_OFFSET(0x15DB4170)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_15_TypeDefinitionIndex = 53336;

class Class_3_4F91AE3B00DB7EFF_15 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_327F75E212567CB8*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_327F75E212567CB8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_327F75E212567CB8*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_15__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_15_EVALUATE_OFFSET))(this);
	}
};
