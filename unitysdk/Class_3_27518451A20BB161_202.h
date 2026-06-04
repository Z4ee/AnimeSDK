#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_F93583A3108A809E;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_27518451A20BB161_202_METHOD_3_38415FC6FA5AFCDB_OFFSET UNITYSDK_OFFSET(0x134BAF30)
#define CLASS_3_27518451A20BB161_202_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x134BACB0)
#define CLASS_3_27518451A20BB161_202__CTOR_OFFSET UNITYSDK_OFFSET(0x134BAC80)

inline static constexpr unsigned int Class_3_27518451A20BB161_202_TypeDefinitionIndex = 54858;

class Class_3_27518451A20BB161_202 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_F93583A3108A809E*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F93583A3108A809E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F93583A3108A809E*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_202__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_202_ONTASKBEGIN_OFFSET))(this);
	}

	::System::String* Method_3_38415FC6FA5AFCDB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_202_METHOD_3_38415FC6FA5AFCDB_OFFSET))(this, a1);
	}
};
