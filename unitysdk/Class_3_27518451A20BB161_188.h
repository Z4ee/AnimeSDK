#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_DB896EF8435160DD_5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_188_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA8425D0)
#define CLASS_3_27518451A20BB161_188__CTOR_OFFSET UNITYSDK_OFFSET(0xA8425A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_188_TypeDefinitionIndex = 54568;

class Class_3_27518451A20BB161_188 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DB896EF8435160DD_5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DB896EF8435160DD_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DB896EF8435160DD_5*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_188__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_188_ONTASKBEGIN_OFFSET))(this);
	}
};
