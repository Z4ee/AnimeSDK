#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_85AC304C554D1558_15;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_160_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x139CF4A0)
#define CLASS_3_27518451A20BB161_160__CTOR_OFFSET UNITYSDK_OFFSET(0x139CF470)

inline static constexpr unsigned int Class_3_27518451A20BB161_160_TypeDefinitionIndex = 51946;

class Class_3_27518451A20BB161_160 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_85AC304C554D1558_15*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_85AC304C554D1558_15* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_85AC304C554D1558_15*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_160__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_160_ONTASKBEGIN_OFFSET))(this);
	}
};
