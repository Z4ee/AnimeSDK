#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3ED49090AE0E3293;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_65_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D6BD90)
#define CLASS_3_27518451A20BB161_65__CTOR_OFFSET UNITYSDK_OFFSET(0x15D6BD60)

inline static constexpr unsigned int Class_3_27518451A20BB161_65_TypeDefinitionIndex = 52865;

class Class_3_27518451A20BB161_65 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3ED49090AE0E3293*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3ED49090AE0E3293* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3ED49090AE0E3293*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_65__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_65_ONTASKBEGIN_OFFSET))(this);
	}
};
