#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87854DF4F09D42E1.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_C5B0CDF390FE85FB_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x113C3AB0)
#define CLASS_2_C5B0CDF390FE85FB_1_DOONENTER_OFFSET UNITYSDK_OFFSET(0x113C3B00)
#define CLASS_2_C5B0CDF390FE85FB_1_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x113C3B90)
#define CLASS_2_C5B0CDF390FE85FB_1_DOONTICK_OFFSET UNITYSDK_OFFSET(0x113C3C20)
#define CLASS_2_C5B0CDF390FE85FB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x113C3A70)
#define CLASS_2_C5B0CDF390FE85FB_1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x113C3CC0)
#define CLASS_2_C5B0CDF390FE85FB_1___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x113C3CD0)
#define CLASS_2_C5B0CDF390FE85FB_1___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x113C3CE0)

inline static constexpr unsigned int Class_2_C5B0CDF390FE85FB_1_TypeDefinitionIndex = 46355;

class Class_2_C5B0CDF390FE85FB_1 : public ::Class_1_87854DF4F09D42E1
{
public:
	::System::Boolean Field_2_0; // 0x98

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_1_DISPOSE_OFFSET))(this);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_1_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_1_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void DoOnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_1_DOONTICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_1___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_1___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}
};
