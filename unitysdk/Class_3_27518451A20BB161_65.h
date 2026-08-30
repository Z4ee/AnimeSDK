#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_2743E377166CF934;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_65_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159D1620)
#define CLASS_3_27518451A20BB161_65__CTOR_OFFSET UNITYSDK_OFFSET(0x159D15F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_65_TypeDefinitionIndex = 53144;

class Class_3_27518451A20BB161_65 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_2743E377166CF934*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2743E377166CF934* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2743E377166CF934*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_65__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_65_ONTASKBEGIN_OFFSET))(this);
	}
};
