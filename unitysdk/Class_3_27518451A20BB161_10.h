#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_4C233120E1AC8A99;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_10_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x149E6A80)
#define CLASS_3_27518451A20BB161_10__CTOR_OFFSET UNITYSDK_OFFSET(0x149E6A50)

inline static constexpr unsigned int Class_3_27518451A20BB161_10_TypeDefinitionIndex = 50395;

class Class_3_27518451A20BB161_10 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_4C233120E1AC8A99*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_4C233120E1AC8A99* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_4C233120E1AC8A99*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_10__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_10_ONTASKBEGIN_OFFSET))(this);
	}
};
