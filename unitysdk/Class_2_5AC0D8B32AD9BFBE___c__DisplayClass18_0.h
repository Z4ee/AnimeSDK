#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

class Class_2_5AC0D8B32AD9BFBE;
namespace RPG::Client { class MonoEffect; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_5AC0D8B32AD9BFBE___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1117AC50)
#define CLASS_2_5AC0D8B32AD9BFBE___C__DISPLAYCLASS18_0___FIRETRAILEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1117B500)

inline static constexpr unsigned int Class_2_5AC0D8B32AD9BFBE___c__DisplayClass18_0_TypeDefinitionIndex = 55887;

class Class_2_5AC0D8B32AD9BFBE___c__DisplayClass18_0 : public ::System::Object
{
public:
	::UnityEngine::GameObject* transitGo; // 0x10
	::Class_2_5AC0D8B32AD9BFBE* __4__this; // 0x18
	::RPG::Client::MonoEffect* energyEffect; // 0x20
	::UnityEngine::GameObject* targetGo; // 0x28
	::System::Int32 energyNum; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
	}

	::System::Void __FireTrailEffect_b__0(::RPG::Client::MonoEffect* monoEffect, ::RPG::Client::TriggerEffectCallbackParams extraParams)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE___C__DISPLAYCLASS18_0___FIRETRAILEFFECT_B__0_OFFSET))(this, monoEffect, extraParams);
	}
};
