#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LowLevel/PlayerLoopSystem.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine::LowLevel { class PlayerLoopSystem_UpdateFunction; }

#define CLASS_1_34423DD82CB257C7___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBD9B00)
#define CLASS_1_34423DD82CB257C7___C__DISPLAYCLASS0_0__INJECT_B__0_OFFSET UNITYSDK_OFFSET(0x1EBD9EB0)
#define CLASS_1_34423DD82CB257C7___C__DISPLAYCLASS0_0__INJECT_B__1_OFFSET UNITYSDK_OFFSET(0x1EBD9F70)
#define CLASS_1_34423DD82CB257C7___C__DISPLAYCLASS0_0__INJECT_B__2_OFFSET UNITYSDK_OFFSET(0x1EBDA0D0)

inline static constexpr unsigned int Class_1_34423DD82CB257C7___c__DisplayClass0_0_TypeDefinitionIndex = 35175;

class Class_1_34423DD82CB257C7___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::String* subSysName; // 0x10
	::System::String* mainSysName; // 0x18
	::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* updateDelg; // 0x20
	::System::Type* type; // 0x28

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
