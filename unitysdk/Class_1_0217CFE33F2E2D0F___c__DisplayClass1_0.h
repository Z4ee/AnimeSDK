#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LowLevel/PlayerLoopSystem.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine::LowLevel { class PlayerLoopSystem_UpdateFunction; }

#define CLASS_1_0217CFE33F2E2D0F___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18313D90)
#define CLASS_1_0217CFE33F2E2D0F___C__DISPLAYCLASS1_0__REMOVEINJECT_B__0_OFFSET UNITYSDK_OFFSET(0x18313EC0)
#define CLASS_1_0217CFE33F2E2D0F___C__DISPLAYCLASS1_0__REMOVEINJECT_B__1_OFFSET UNITYSDK_OFFSET(0x18313F20)

inline static constexpr unsigned int Class_1_0217CFE33F2E2D0F___c__DisplayClass1_0_TypeDefinitionIndex = 9409;

class Class_1_0217CFE33F2E2D0F___c__DisplayClass1_0 : public ::System::Object
{
public:
	::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* updateDelg; // 0x10
	::System::Type* type; // 0x18
	::System::String* mainSysName; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0217CFE33F2E2D0F___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RemoveInject_b__0(::UnityEngine::LowLevel::PlayerLoopSystem s)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::LowLevel::PlayerLoopSystem))((::PBYTE)hIl2Cpp + CLASS_1_0217CFE33F2E2D0F___C__DISPLAYCLASS1_0__REMOVEINJECT_B__0_OFFSET))(this, s);
	}

	::System::Boolean _RemoveInject_b__1(::UnityEngine::LowLevel::PlayerLoopSystem s)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::LowLevel::PlayerLoopSystem))((::PBYTE)hIl2Cpp + CLASS_1_0217CFE33F2E2D0F___C__DISPLAYCLASS1_0__REMOVEINJECT_B__1_OFFSET))(this, s);
	}
};
