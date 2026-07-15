#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5182AF478169B5D7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_180_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14E8FE80)
#define CLASS_3_27518451A20BB161_180__CTOR_OFFSET UNITYSDK_OFFSET(0x14E8FE50)

inline static constexpr unsigned int Class_3_27518451A20BB161_180_TypeDefinitionIndex = 52600;

class Class_3_27518451A20BB161_180 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5182AF478169B5D7*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5182AF478169B5D7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5182AF478169B5D7*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_180__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_180_ONTASKBEGIN_OFFSET))(this);
	}
};
