#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BB620C4A1DC7FE3E;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_125_METHOD_3_F31401DB5DE95430_OFFSET UNITYSDK_OFFSET(0x11A821E0)
#define CLASS_3_27518451A20BB161_125_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11A81FD0)
#define CLASS_3_27518451A20BB161_125__CTOR_OFFSET UNITYSDK_OFFSET(0x11A81FA0)

inline static constexpr unsigned int Class_3_27518451A20BB161_125_TypeDefinitionIndex = 50912;

class Class_3_27518451A20BB161_125 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BB620C4A1DC7FE3E*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BB620C4A1DC7FE3E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BB620C4A1DC7FE3E*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_125__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_125_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_F31401DB5DE95430(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_125_METHOD_3_F31401DB5DE95430_OFFSET))(this, a1);
	}
};
