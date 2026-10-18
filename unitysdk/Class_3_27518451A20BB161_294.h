#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_C314F99F5738E2B4;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_294_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9B3E70)
#define CLASS_3_27518451A20BB161_294__CTOR_OFFSET UNITYSDK_OFFSET(0xB9B3E40)

inline static constexpr unsigned int Class_3_27518451A20BB161_294_TypeDefinitionIndex = 57942;

class Class_3_27518451A20BB161_294 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_C314F99F5738E2B4*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C314F99F5738E2B4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C314F99F5738E2B4*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_294__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_294_ONTASKBEGIN_OFFSET))(this);
	}
};
