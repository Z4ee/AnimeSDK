#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_DC0D8BD1F55299D5;
namespace RPG::GameCore { class LockActionDelayChange; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }

#define CLASS_3_8AD3D02D495CD5BD_METHOD_3_0F031CA88A7A2777_OFFSET UNITYSDK_OFFSET(0xBE9D1A0)
#define CLASS_3_8AD3D02D495CD5BD_METHOD_3_10A109298F54A8C1_OFFSET UNITYSDK_OFFSET(0xBE9D3A0)
#define CLASS_3_8AD3D02D495CD5BD_METHOD_3_B40C1E7667D81C4E_OFFSET UNITYSDK_OFFSET(0xBE9D500)
#define CLASS_3_8AD3D02D495CD5BD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE9CB30)
#define CLASS_3_8AD3D02D495CD5BD__CTOR_OFFSET UNITYSDK_OFFSET(0xBE9CB00)

inline static constexpr unsigned int Class_3_8AD3D02D495CD5BD_TypeDefinitionIndex = 55145;

class Class_3_8AD3D02D495CD5BD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LockActionDelayChange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockActionDelayChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockActionDelayChange*))((::PBYTE)hIl2Cpp + CLASS_3_8AD3D02D495CD5BD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8AD3D02D495CD5BD_ONTASKBEGIN_OFFSET))(this);
	}

	::Class_1_DC0D8BD1F55299D5* Method_3_B40C1E7667D81C4E(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::System::String* a2)
	{
		return ((::Class_1_DC0D8BD1F55299D5*(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_8AD3D02D495CD5BD_METHOD_3_B40C1E7667D81C4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0F031CA88A7A2777(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::Class_1_DC0D8BD1F55299D5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_DC0D8BD1F55299D5*))((::PBYTE)hIl2Cpp + CLASS_3_8AD3D02D495CD5BD_METHOD_3_0F031CA88A7A2777_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_10A109298F54A8C1(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_8AD3D02D495CD5BD_METHOD_3_10A109298F54A8C1_OFFSET))(this, a1, a2);
	}
};
