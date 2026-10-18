#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_632AF6743E81CBF7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_62_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB61C090)
#define CLASS_3_4F91AE3B00DB7EFF_62__CTOR_OFFSET UNITYSDK_OFFSET(0xB61C060)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_62_TypeDefinitionIndex = 55398;

class Class_3_4F91AE3B00DB7EFF_62 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_632AF6743E81CBF7*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_632AF6743E81CBF7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_632AF6743E81CBF7*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_62__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_62_EVALUATE_OFFSET))(this);
	}
};
