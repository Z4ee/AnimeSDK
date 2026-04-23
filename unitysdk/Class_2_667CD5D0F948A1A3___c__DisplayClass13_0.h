#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_667CD5D0F948A1A3;
class Class_2_9DD8A46984F1AFFD;
namespace RPG::GameCore { class FiveDimTriggerEventEmitterConfig; }
namespace UnityEngine { class Collider; }

#define CLASS_2_667CD5D0F948A1A3___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x99730E0)
#define CLASS_2_667CD5D0F948A1A3___C__DISPLAYCLASS13_0___CREATEONTRIGGERENTERCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x99740B0)

inline static constexpr unsigned int Class_2_667CD5D0F948A1A3___c__DisplayClass13_0_TypeDefinitionIndex = 70799;

class Class_2_667CD5D0F948A1A3___c__DisplayClass13_0 : public ::System::Object
{
public:
	::System::ValueTuple_2<::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*> ctx; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void __CreateOnTriggerEnterCallback_b__0(::Class_2_667CD5D0F948A1A3* self, ::System::ValueTuple_2<::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*> _, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_667CD5D0F948A1A3*, ::System::ValueTuple_2<::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*>, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___C__DISPLAYCLASS13_0___CREATEONTRIGGERENTERCALLBACK_B__0_OFFSET))(this, self, _, other);
	}
};
