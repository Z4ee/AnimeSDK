#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_667CD5D0F948A1A3;
class Class_2_B9E8C2EEAA5C96EC;
namespace RPG::GameCore { class FiveDimTriggerEventEmitterConfig; }
namespace UnityEngine { class Collider; }

#define CLASS_2_667CD5D0F948A1A3___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x134B7270)
#define CLASS_2_667CD5D0F948A1A3___C__DISPLAYCLASS14_0___CREATEONTRIGGERENTERCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x134B7E10)

inline static constexpr unsigned int Class_2_667CD5D0F948A1A3___c__DisplayClass14_0_TypeDefinitionIndex = 76621;

class Class_2_667CD5D0F948A1A3___c__DisplayClass14_0 : public ::System::Object
{
public:
	::System::ValueTuple_2<::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*> ctx; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::System::Void __CreateOnTriggerEnterCallback_b__0(::Class_2_667CD5D0F948A1A3* a1, ::System::ValueTuple_2<::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*> a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_667CD5D0F948A1A3*, ::System::ValueTuple_2<::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*>, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___C__DISPLAYCLASS14_0___CREATEONTRIGGERENTERCALLBACK_B__0_OFFSET))(this, a1, a2, a3);
	}
};
