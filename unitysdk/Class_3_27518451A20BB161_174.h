#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_DB896EF8435160DD_3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_174_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11DEE2F0)
#define CLASS_3_27518451A20BB161_174__CTOR_OFFSET UNITYSDK_OFFSET(0x11DEE2C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_174_TypeDefinitionIndex = 53531;

class Class_3_27518451A20BB161_174 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DB896EF8435160DD_3*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DB896EF8435160DD_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DB896EF8435160DD_3*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_174__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_174_ONTASKBEGIN_OFFSET))(this);
	}
};
