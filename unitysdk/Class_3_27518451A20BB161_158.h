#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_478887A2EA3BC634;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_158_METHOD_3_42A121C686C73935_OFFSET UNITYSDK_OFFSET(0xA5F3050)
#define CLASS_3_27518451A20BB161_158_METHOD_3_67EFB5573D8C81F5_OFFSET UNITYSDK_OFFSET(0xA5F3100)
#define CLASS_3_27518451A20BB161_158_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA5F2E40)
#define CLASS_3_27518451A20BB161_158__CTOR_OFFSET UNITYSDK_OFFSET(0xA5F2E10)

inline static constexpr unsigned int Class_3_27518451A20BB161_158_TypeDefinitionIndex = 51934;

class Class_3_27518451A20BB161_158 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_478887A2EA3BC634*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_478887A2EA3BC634* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_478887A2EA3BC634*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_158__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_158_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_67EFB5573D8C81F5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_158_METHOD_3_67EFB5573D8C81F5_OFFSET))(this, a1);
	}

	::System::Void Method_3_42A121C686C73935(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_158_METHOD_3_42A121C686C73935_OFFSET))(this, a1);
	}
};
