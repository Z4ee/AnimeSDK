#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_E26064C540C50C92;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_163_METHOD_3_1AD130F02A2D20FD_OFFSET UNITYSDK_OFFSET(0xE635D60)
#define CLASS_3_27518451A20BB161_163_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE635B10)
#define CLASS_3_27518451A20BB161_163__CTOR_OFFSET UNITYSDK_OFFSET(0xE635AE0)

inline static constexpr unsigned int Class_3_27518451A20BB161_163_TypeDefinitionIndex = 51430;

class Class_3_27518451A20BB161_163 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_E26064C540C50C92*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_E26064C540C50C92* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_E26064C540C50C92*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_163__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_163_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_1AD130F02A2D20FD(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_163_METHOD_3_1AD130F02A2D20FD_OFFSET))(this, a1);
	}
};
