#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3FBBAD1B1995BBB6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_152_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164B0DA0)
#define CLASS_3_27518451A20BB161_152__CTOR_OFFSET UNITYSDK_OFFSET(0x164B0D70)

inline static constexpr unsigned int Class_3_27518451A20BB161_152_TypeDefinitionIndex = 53940;

class Class_3_27518451A20BB161_152 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3FBBAD1B1995BBB6*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3FBBAD1B1995BBB6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3FBBAD1B1995BBB6*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_152__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_152_ONTASKBEGIN_OFFSET))(this);
	}
};
