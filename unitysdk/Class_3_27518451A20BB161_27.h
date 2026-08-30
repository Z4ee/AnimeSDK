#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7AA0663B46C8586F_8;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_27_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16EF7290)
#define CLASS_3_27518451A20BB161_27__CTOR_OFFSET UNITYSDK_OFFSET(0x16EF7260)

inline static constexpr unsigned int Class_3_27518451A20BB161_27_TypeDefinitionIndex = 53079;

class Class_3_27518451A20BB161_27 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7AA0663B46C8586F_8*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7AA0663B46C8586F_8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7AA0663B46C8586F_8*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_27__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_27_ONTASKBEGIN_OFFSET))(this);
	}
};
