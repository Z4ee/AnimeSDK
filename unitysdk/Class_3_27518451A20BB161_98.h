#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_13A6ECCECECEE852;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_98_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x97EED20)
#define CLASS_3_27518451A20BB161_98__CTOR_OFFSET UNITYSDK_OFFSET(0x97EECF0)

inline static constexpr unsigned int Class_3_27518451A20BB161_98_TypeDefinitionIndex = 49945;

class Class_3_27518451A20BB161_98 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_13A6ECCECECEE852*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_13A6ECCECECEE852* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_13A6ECCECECEE852*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_98__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_98_ONTASKBEGIN_OFFSET))(this);
	}
};
