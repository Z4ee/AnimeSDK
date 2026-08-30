#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace System { class String; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_6CC4C222AC7A77A0_METHOD_2_C5D11BE2748B8FC9_OFFSET UNITYSDK_OFFSET(0x16260C00)
#define CLASS_2_6CC4C222AC7A77A0__CTOR_OFFSET UNITYSDK_OFFSET(0x16260CB0)
#define CLASS_2_6CC4C222AC7A77A0__ONBIND_OFFSET UNITYSDK_OFFSET(0x16260B60)

inline static constexpr unsigned int Class_2_6CC4C222AC7A77A0_TypeDefinitionIndex = 72218;

class Class_2_6CC4C222AC7A77A0 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::UI::Text* CALNLFBNMPM; // 0x60
	::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CC4C222AC7A77A0__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CC4C222AC7A77A0__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C5D11BE2748B8FC9(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CC4C222AC7A77A0_METHOD_2_C5D11BE2748B8FC9_OFFSET))(this, a1, a2);
	}
};
