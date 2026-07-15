#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_422FB73ADFAD14F8_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_80_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18B13510)
#define CLASS_3_27518451A20BB161_80__CTOR_OFFSET UNITYSDK_OFFSET(0x18B134E0)

inline static constexpr unsigned int Class_3_27518451A20BB161_80_TypeDefinitionIndex = 50563;

class Class_3_27518451A20BB161_80 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_422FB73ADFAD14F8_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_422FB73ADFAD14F8_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_422FB73ADFAD14F8_1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_80__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_80_ONTASKBEGIN_OFFSET))(this);
	}
};
