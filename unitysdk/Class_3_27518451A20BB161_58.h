#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7AA0663B46C8586F_16;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_58_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17116F50)
#define CLASS_3_27518451A20BB161_58__CTOR_OFFSET UNITYSDK_OFFSET(0x17116F20)

inline static constexpr unsigned int Class_3_27518451A20BB161_58_TypeDefinitionIndex = 53137;

class Class_3_27518451A20BB161_58 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7AA0663B46C8586F_16*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7AA0663B46C8586F_16* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7AA0663B46C8586F_16*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_58__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_58_ONTASKBEGIN_OFFSET))(this);
	}
};
