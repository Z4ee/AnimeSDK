#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_85AC304C554D1558_11;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_84_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10615C90)
#define CLASS_3_27518451A20BB161_84__CTOR_OFFSET UNITYSDK_OFFSET(0x10615C60)

inline static constexpr unsigned int Class_3_27518451A20BB161_84_TypeDefinitionIndex = 44605;

class Class_3_27518451A20BB161_84 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_85AC304C554D1558_11*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_85AC304C554D1558_11* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_85AC304C554D1558_11*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_84__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_84_ONTASKBEGIN_OFFSET))(this);
	}
};
