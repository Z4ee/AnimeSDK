#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7AA0663B46C8586F_17;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_38_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB90ADC0)
#define CLASS_3_27518451A20BB161_38__CTOR_OFFSET UNITYSDK_OFFSET(0xB90AB30)

inline static constexpr unsigned int Class_3_27518451A20BB161_38_TypeDefinitionIndex = 52825;

class Class_3_27518451A20BB161_38 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7AA0663B46C8586F_17*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7AA0663B46C8586F_17* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7AA0663B46C8586F_17*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_38__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_38_ONTASKBEGIN_OFFSET))(this);
	}
};
