#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_DB896EF8435160DD_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_173_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x998D0F0)
#define CLASS_3_27518451A20BB161_173__CTOR_OFFSET UNITYSDK_OFFSET(0x998D0C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_173_TypeDefinitionIndex = 53530;

class Class_3_27518451A20BB161_173 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DB896EF8435160DD_2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DB896EF8435160DD_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DB896EF8435160DD_2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_173__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_173_ONTASKBEGIN_OFFSET))(this);
	}
};
