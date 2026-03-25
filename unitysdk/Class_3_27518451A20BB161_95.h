#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_379CEDD103BBB4ED_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_95_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1150D5E0)
#define CLASS_3_27518451A20BB161_95__CTOR_OFFSET UNITYSDK_OFFSET(0x1150D5B0)

inline static constexpr unsigned int Class_3_27518451A20BB161_95_TypeDefinitionIndex = 47229;

class Class_3_27518451A20BB161_95 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_379CEDD103BBB4ED_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_379CEDD103BBB4ED_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_379CEDD103BBB4ED_1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_95__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_95_ONTASKBEGIN_OFFSET))(this);
	}
};
