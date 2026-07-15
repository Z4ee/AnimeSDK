#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvForceSetNpcAlertValue; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_047D513E534B3C13_METHOD_3_AB4948DA25C143DC_OFFSET UNITYSDK_OFFSET(0x169D33E0)
#define CLASS_3_047D513E534B3C13_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x169D2CB0)
#define CLASS_3_047D513E534B3C13__CTOR_OFFSET UNITYSDK_OFFSET(0x169D2C80)

inline static constexpr unsigned int Class_3_047D513E534B3C13_TypeDefinitionIndex = 49990;

class Class_3_047D513E534B3C13 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvForceSetNpcAlertValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvForceSetNpcAlertValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvForceSetNpcAlertValue*))((::PBYTE)hIl2Cpp + CLASS_3_047D513E534B3C13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_047D513E534B3C13_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_AB4948DA25C143DC(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_047D513E534B3C13_METHOD_3_AB4948DA25C143DC_OFFSET))(this, a1, a2);
	}
};
