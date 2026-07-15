#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_8A4C44B50F3E20F8;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_55_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x146DA6D0)
#define CLASS_3_27518451A20BB161_55__CTOR_OFFSET UNITYSDK_OFFSET(0x146DA6A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_55_TypeDefinitionIndex = 50470;

class Class_3_27518451A20BB161_55 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_8A4C44B50F3E20F8*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8A4C44B50F3E20F8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8A4C44B50F3E20F8*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_55__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_55_ONTASKBEGIN_OFFSET))(this);
	}
};
