#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine::LowLevel { class PlayerLoopSystem_UpdateFunction; }

#define CLASS_1_34423DD82CB257C7_METHOD_1_0C6A2A9E9118A01E_OFFSET UNITYSDK_OFFSET(0x1EC06C00)
#define CLASS_1_34423DD82CB257C7_METHOD_1_CABA399FD63530C6_OFFSET UNITYSDK_OFFSET(0x1EC071A0)
#define CLASS_1_34423DD82CB257C7__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC07530)

inline static constexpr unsigned int Class_1_34423DD82CB257C7_TypeDefinitionIndex = 35174;

class Class_1_34423DD82CB257C7 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34423DD82CB257C7__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_0C6A2A9E9118A01E(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Type* a4, ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* a5)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Type*, ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*))((::PBYTE)hIl2Cpp + CLASS_1_34423DD82CB257C7_METHOD_1_0C6A2A9E9118A01E_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_CABA399FD63530C6(::System::String* a1, ::System::Type* a2, ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Type*, ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*))((::PBYTE)hIl2Cpp + CLASS_1_34423DD82CB257C7_METHOD_1_CABA399FD63530C6_OFFSET))(a1, a2, a3);
	}
};
