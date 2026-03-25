#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3FDFE25701E5CF81;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11651CB0)
#define CLASS_3_27518451A20BB161_6__CTOR_OFFSET UNITYSDK_OFFSET(0x11651C80)

inline static constexpr unsigned int Class_3_27518451A20BB161_6_TypeDefinitionIndex = 42742;

class Class_3_27518451A20BB161_6 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3FDFE25701E5CF81*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3FDFE25701E5CF81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3FDFE25701E5CF81*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_6_ONTASKBEGIN_OFFSET))(this);
	}
};
