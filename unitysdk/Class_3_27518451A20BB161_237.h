#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_B354DCBC65484CB3;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_237_METHOD_3_67A3F3A751C9BA2C_OFFSET UNITYSDK_OFFSET(0x187571F0)
#define CLASS_3_27518451A20BB161_237_METHOD_3_C8CE1FD4864D6F03_OFFSET UNITYSDK_OFFSET(0x18757160)
#define CLASS_3_27518451A20BB161_237_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18756F50)
#define CLASS_3_27518451A20BB161_237__CTOR_OFFSET UNITYSDK_OFFSET(0x18756F20)

inline static constexpr unsigned int Class_3_27518451A20BB161_237_TypeDefinitionIndex = 55794;

class Class_3_27518451A20BB161_237 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_B354DCBC65484CB3*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B354DCBC65484CB3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B354DCBC65484CB3*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_237__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_237_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_67A3F3A751C9BA2C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_237_METHOD_3_67A3F3A751C9BA2C_OFFSET))(this, a1);
	}

	::System::Void Method_3_C8CE1FD4864D6F03(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_237_METHOD_3_C8CE1FD4864D6F03_OFFSET))(this, a1);
	}
};
