#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_B354DCBC65484CB3;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_251_METHOD_3_67EFB5573D8C81F5_OFFSET UNITYSDK_OFFSET(0xB77C7D0)
#define CLASS_3_27518451A20BB161_251_METHOD_3_C8CE1FD4864D6F03_OFFSET UNITYSDK_OFFSET(0xB77C740)
#define CLASS_3_27518451A20BB161_251_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB77C530)
#define CLASS_3_27518451A20BB161_251__CTOR_OFFSET UNITYSDK_OFFSET(0xB77C500)

inline static constexpr unsigned int Class_3_27518451A20BB161_251_TypeDefinitionIndex = 55602;

class Class_3_27518451A20BB161_251 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_B354DCBC65484CB3*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B354DCBC65484CB3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B354DCBC65484CB3*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_251__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_251_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_67EFB5573D8C81F5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_251_METHOD_3_67EFB5573D8C81F5_OFFSET))(this, a1);
	}

	::System::Void Method_3_C8CE1FD4864D6F03(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_251_METHOD_3_C8CE1FD4864D6F03_OFFSET))(this, a1);
	}
};
