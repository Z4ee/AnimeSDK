#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A696AB4980B3D7B5.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_817CB2D9277BE68D_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAFF4AD0)
#define CLASS_2_817CB2D9277BE68D_1_DOONENTER_OFFSET UNITYSDK_OFFSET(0xAFF4B20)
#define CLASS_2_817CB2D9277BE68D_1_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xAFF4BB0)
#define CLASS_2_817CB2D9277BE68D_1_DOONTICK_OFFSET UNITYSDK_OFFSET(0xAFF4C40)
#define CLASS_2_817CB2D9277BE68D_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAFF4A90)
#define CLASS_2_817CB2D9277BE68D_1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAFF4CE0)
#define CLASS_2_817CB2D9277BE68D_1___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0xAFF4CF0)
#define CLASS_2_817CB2D9277BE68D_1___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xAFF4D00)

inline static constexpr unsigned int Class_2_817CB2D9277BE68D_1_TypeDefinitionIndex = 53740;

class Class_2_817CB2D9277BE68D_1 : public ::Class_1_A696AB4980B3D7B5
{
public:
	::System::Boolean Field_2_0; // 0x98

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D_1_DISPOSE_OFFSET))(this);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D_1_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D_1_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void DoOnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D_1_DOONTICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D_1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D_1___IFIXBASEPROXY_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D_1___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, a1, a2);
	}
};
