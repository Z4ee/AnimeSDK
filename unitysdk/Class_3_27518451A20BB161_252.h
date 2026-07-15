#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_AEB473993EF0DACB_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_252_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162EFDF0)
#define CLASS_3_27518451A20BB161_252__CTOR_OFFSET UNITYSDK_OFFSET(0x162EFDC0)

inline static constexpr unsigned int Class_3_27518451A20BB161_252_TypeDefinitionIndex = 53891;

class Class_3_27518451A20BB161_252 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_AEB473993EF0DACB_2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_AEB473993EF0DACB_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_AEB473993EF0DACB_2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_252__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_252_ONTASKBEGIN_OFFSET))(this);
	}
};
