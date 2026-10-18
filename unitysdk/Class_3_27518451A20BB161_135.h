#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3184742B87D05B9A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_135_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CD4CF0)
#define CLASS_3_27518451A20BB161_135__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD4CC0)

inline static constexpr unsigned int Class_3_27518451A20BB161_135_TypeDefinitionIndex = 53863;

class Class_3_27518451A20BB161_135 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3184742B87D05B9A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3184742B87D05B9A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3184742B87D05B9A*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_135__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_135_ONTASKBEGIN_OFFSET))(this);
	}
};
