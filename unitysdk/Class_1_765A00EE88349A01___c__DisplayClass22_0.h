#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class StencilDelegate; }
namespace UnityEngine { class Object; }

#define CLASS_1_765A00EE88349A01___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11D649B0)
#define CLASS_1_765A00EE88349A01___C__DISPLAYCLASS22_0___CREATESTENCILDELEGATE_B__0_OFFSET UNITYSDK_OFFSET(0x11D653E0)

inline static constexpr unsigned int Class_1_765A00EE88349A01___c__DisplayClass22_0_TypeDefinitionIndex = 45674;

class Class_1_765A00EE88349A01___c__DisplayClass22_0 : public ::System::Object
{
public:
	::RPG::CustomRP::StencilDelegate* stencil; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
	}

	::System::Void __CreateStencilDelegate_b__0(::UnityEngine::Object* m)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01___C__DISPLAYCLASS22_0___CREATESTENCILDELEGATE_B__0_OFFSET))(this, m);
	}
};
