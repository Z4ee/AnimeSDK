#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A696AB4980B3D7B5.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_817CB2D9277BE68D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13BEB460)
#define CLASS_2_817CB2D9277BE68D_DOONENTER_OFFSET UNITYSDK_OFFSET(0x13BEB4B0)
#define CLASS_2_817CB2D9277BE68D_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x13BEB540)
#define CLASS_2_817CB2D9277BE68D__CTOR_OFFSET UNITYSDK_OFFSET(0x13BEB420)
#define CLASS_2_817CB2D9277BE68D___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13BEB5D0)
#define CLASS_2_817CB2D9277BE68D___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x13BEB5E0)
#define CLASS_2_817CB2D9277BE68D___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x13BEB5F0)

inline static constexpr unsigned int Class_2_817CB2D9277BE68D_TypeDefinitionIndex = 53719;

class Class_2_817CB2D9277BE68D : public ::Class_1_A696AB4980B3D7B5
{
public:
	::System::Boolean Field_2_0; // 0x98

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D_DISPOSE_OFFSET))(this);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D___IFIXBASEPROXY_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_817CB2D9277BE68D___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, a1, a2);
	}
};
