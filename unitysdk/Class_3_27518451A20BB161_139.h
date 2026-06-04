#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_85AC304C554D1558_16;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_139_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A78D00)
#define CLASS_3_27518451A20BB161_139__CTOR_OFFSET UNITYSDK_OFFSET(0x13A78CD0)

inline static constexpr unsigned int Class_3_27518451A20BB161_139_TypeDefinitionIndex = 51613;

class Class_3_27518451A20BB161_139 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_85AC304C554D1558_16*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_85AC304C554D1558_16* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_85AC304C554D1558_16*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_139__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_139_ONTASKBEGIN_OFFSET))(this);
	}
};
