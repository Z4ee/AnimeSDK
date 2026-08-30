#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

class Class_2_5AC0D8B32AD9BFBE;
namespace RPG::Client { class MonoEffect; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_5AC0D8B32AD9BFBE___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x155A19F0)
#define CLASS_2_5AC0D8B32AD9BFBE___C__DISPLAYCLASS22_0___FIRETRAILEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x155A1FA0)

inline static constexpr unsigned int Class_2_5AC0D8B32AD9BFBE___c__DisplayClass22_0_TypeDefinitionIndex = 60709;

class Class_2_5AC0D8B32AD9BFBE___c__DisplayClass22_0 : public ::System::Object
{
public:
	::RPG::Client::MonoEffect* energyEffect; // 0x10
	::UnityEngine::GameObject* transitGo; // 0x18
	::UnityEngine::GameObject* targetGo; // 0x20
	::Class_2_5AC0D8B32AD9BFBE* __4__this; // 0x28
	::System::Int32 energyNum; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
	}

	::System::Void __FireTrailEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE___C__DISPLAYCLASS22_0___FIRETRAILEFFECT_B__0_OFFSET))(this, a1, a2);
	}
};
