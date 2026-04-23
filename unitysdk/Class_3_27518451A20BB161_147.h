#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_478887A2EA3BC634;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_147_METHOD_3_63693D0C6A632B97_OFFSET UNITYSDK_OFFSET(0x9069DD0)
#define CLASS_3_27518451A20BB161_147_METHOD_3_67EFB5573D8C81F5_OFFSET UNITYSDK_OFFSET(0x9069E80)
#define CLASS_3_27518451A20BB161_147_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9069BB0)
#define CLASS_3_27518451A20BB161_147__CTOR_OFFSET UNITYSDK_OFFSET(0x9069B80)

inline static constexpr unsigned int Class_3_27518451A20BB161_147_TypeDefinitionIndex = 51262;

class Class_3_27518451A20BB161_147 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_478887A2EA3BC634*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_478887A2EA3BC634* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_478887A2EA3BC634*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_147__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_147_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_67EFB5573D8C81F5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_147_METHOD_3_67EFB5573D8C81F5_OFFSET))(this, a1);
	}

	::System::Void Method_3_63693D0C6A632B97(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_147_METHOD_3_63693D0C6A632B97_OFFSET))(this, a1);
	}
};
