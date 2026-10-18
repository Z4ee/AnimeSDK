#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6BA10DC46C47290E_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_318_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE35EE0)
#define CLASS_3_27518451A20BB161_318__CTOR_OFFSET UNITYSDK_OFFSET(0xBE35EB0)

inline static constexpr unsigned int Class_3_27518451A20BB161_318_TypeDefinitionIndex = 58629;

class Class_3_27518451A20BB161_318 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6BA10DC46C47290E_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6BA10DC46C47290E_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6BA10DC46C47290E_1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_318__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_318_ONTASKBEGIN_OFFSET))(this);
	}
};
