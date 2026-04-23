#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3FDFE25701E5CF81;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xECA1540)
#define CLASS_3_27518451A20BB161_9__CTOR_OFFSET UNITYSDK_OFFSET(0xECA1510)

inline static constexpr unsigned int Class_3_27518451A20BB161_9_TypeDefinitionIndex = 48722;

class Class_3_27518451A20BB161_9 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3FDFE25701E5CF81*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3FDFE25701E5CF81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3FDFE25701E5CF81*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_9_ONTASKBEGIN_OFFSET))(this);
	}
};
