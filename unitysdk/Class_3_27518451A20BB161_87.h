#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7ED93EDF030C1F5D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_87_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17AA56D0)
#define CLASS_3_27518451A20BB161_87__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA56A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_87_TypeDefinitionIndex = 50790;

class Class_3_27518451A20BB161_87 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7ED93EDF030C1F5D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7ED93EDF030C1F5D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7ED93EDF030C1F5D*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_87__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_87_ONTASKBEGIN_OFFSET))(this);
	}
};
