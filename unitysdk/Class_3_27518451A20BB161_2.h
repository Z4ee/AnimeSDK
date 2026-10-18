#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7AA0663B46C8586F_21;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB65D330)
#define CLASS_3_27518451A20BB161_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB65D300)

inline static constexpr unsigned int Class_3_27518451A20BB161_2_TypeDefinitionIndex = 52312;

class Class_3_27518451A20BB161_2 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7AA0663B46C8586F_21*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7AA0663B46C8586F_21* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7AA0663B46C8586F_21*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_2_ONTASKBEGIN_OFFSET))(this);
	}
};
