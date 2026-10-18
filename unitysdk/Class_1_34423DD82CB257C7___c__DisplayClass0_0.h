#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LowLevel/PlayerLoopSystem.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine::LowLevel { class PlayerLoopSystem_UpdateFunction; }

#define CLASS_1_34423DD82CB257C7___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC07190)
#define CLASS_1_34423DD82CB257C7___C__DISPLAYCLASS0_0__INJECT_B__0_OFFSET UNITYSDK_OFFSET(0x1EC07540)
#define CLASS_1_34423DD82CB257C7___C__DISPLAYCLASS0_0__INJECT_B__1_OFFSET UNITYSDK_OFFSET(0x1EC07600)
#define CLASS_1_34423DD82CB257C7___C__DISPLAYCLASS0_0__INJECT_B__2_OFFSET UNITYSDK_OFFSET(0x1EC07760)

inline static constexpr unsigned int Class_1_34423DD82CB257C7___c__DisplayClass0_0_TypeDefinitionIndex = 35175;

class Class_1_34423DD82CB257C7___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::String* mainSysName; // 0x10
	::System::String* subSysName; // 0x18
	::System::Type* type; // 0x20
	::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* updateDelg; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34423DD82CB257C7___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Inject_b__0(::UnityEngine::LowLevel::PlayerLoopSystem a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::LowLevel::PlayerLoopSystem))((::PBYTE)hIl2Cpp + CLASS_1_34423DD82CB257C7___C__DISPLAYCLASS0_0__INJECT_B__0_OFFSET))(this, a1);
	}

	::System::Boolean _Inject_b__1(::UnityEngine::LowLevel::PlayerLoopSystem a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::LowLevel::PlayerLoopSystem))((::PBYTE)hIl2Cpp + CLASS_1_34423DD82CB257C7___C__DISPLAYCLASS0_0__INJECT_B__1_OFFSET))(this, a1);
	}

	::System::Boolean _Inject_b__2(::UnityEngine::LowLevel::PlayerLoopSystem a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::LowLevel::PlayerLoopSystem))((::PBYTE)hIl2Cpp + CLASS_1_34423DD82CB257C7___C__DISPLAYCLASS0_0__INJECT_B__2_OFFSET))(this, a1);
	}
};
