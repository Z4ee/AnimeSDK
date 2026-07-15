#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7AA0663B46C8586F_14;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_31_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18725400)
#define CLASS_3_27518451A20BB161_31__CTOR_OFFSET UNITYSDK_OFFSET(0x187253D0)

inline static constexpr unsigned int Class_3_27518451A20BB161_31_TypeDefinitionIndex = 50433;

class Class_3_27518451A20BB161_31 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7AA0663B46C8586F_14*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7AA0663B46C8586F_14* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7AA0663B46C8586F_14*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_31__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_31_ONTASKBEGIN_OFFSET))(this);
	}
};
