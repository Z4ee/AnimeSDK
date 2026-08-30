#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_0F24EAFEC305197B;
class Class_3_D65E380120390B60;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_199_METHOD_3_4CFA30FA85BD5218_OFFSET UNITYSDK_OFFSET(0x1A7AA090)
#define CLASS_3_27518451A20BB161_199_METHOD_3_F73E10B4DB3FFC8E_OFFSET UNITYSDK_OFFSET(0x1A7AA2F0)
#define CLASS_3_27518451A20BB161_199_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A7A9BE0)
#define CLASS_3_27518451A20BB161_199__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7A9BB0)

inline static constexpr unsigned int Class_3_27518451A20BB161_199_TypeDefinitionIndex = 55420;

class Class_3_27518451A20BB161_199 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_D65E380120390B60*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D65E380120390B60* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D65E380120390B60*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_199__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_199_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_F73E10B4DB3FFC8E()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_199_METHOD_3_F73E10B4DB3FFC8E_OFFSET))(this);
	}

	::System::Void Method_3_4CFA30FA85BD5218(::Class_1_0F24EAFEC305197B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0F24EAFEC305197B*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_199_METHOD_3_4CFA30FA85BD5218_OFFSET))(this, a1);
	}
};
