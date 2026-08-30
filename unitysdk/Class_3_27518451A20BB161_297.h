#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7AA0663B46C8586F_11;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_297_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16BF03A0)
#define CLASS_3_27518451A20BB161_297__CTOR_OFFSET UNITYSDK_OFFSET(0x16BF0370)

inline static constexpr unsigned int Class_3_27518451A20BB161_297_TypeDefinitionIndex = 58776;

class Class_3_27518451A20BB161_297 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7AA0663B46C8586F_11*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7AA0663B46C8586F_11* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7AA0663B46C8586F_11*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_297__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_297_ONTASKBEGIN_OFFSET))(this);
	}
};
