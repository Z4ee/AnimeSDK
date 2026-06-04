#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_DB896EF8435160DD_6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_103_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1447EE90)
#define CLASS_3_27518451A20BB161_103__CTOR_OFFSET UNITYSDK_OFFSET(0x1447EE60)

inline static constexpr unsigned int Class_3_27518451A20BB161_103_TypeDefinitionIndex = 50615;

class Class_3_27518451A20BB161_103 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DB896EF8435160DD_6*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DB896EF8435160DD_6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DB896EF8435160DD_6*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_103__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_103_ONTASKBEGIN_OFFSET))(this);
	}
};
