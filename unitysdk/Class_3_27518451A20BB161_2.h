#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_2DA524FDD0853410;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x146F1EB0)
#define CLASS_3_27518451A20BB161_2__CTOR_OFFSET UNITYSDK_OFFSET(0x146F1E80)

inline static constexpr unsigned int Class_3_27518451A20BB161_2_TypeDefinitionIndex = 50089;

class Class_3_27518451A20BB161_2 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_2DA524FDD0853410*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2DA524FDD0853410* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2DA524FDD0853410*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_2_ONTASKBEGIN_OFFSET))(this);
	}
};
