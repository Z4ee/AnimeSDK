#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_6CC4C222AC7A77A0_METHOD_2_C5D11BE2748B8FC9_OFFSET UNITYSDK_OFFSET(0x1470A9E0)
#define CLASS_2_6CC4C222AC7A77A0__CTOR_OFFSET UNITYSDK_OFFSET(0x1470AA90)
#define CLASS_2_6CC4C222AC7A77A0__ONBIND_OFFSET UNITYSDK_OFFSET(0x1470A940)

inline static constexpr unsigned int Class_2_6CC4C222AC7A77A0_TypeDefinitionIndex = 69018;

class Class_2_6CC4C222AC7A77A0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Image* Field_2_0; // 0x60
	::UnityEngine::UI::Text* Field_2_1; // 0x68

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
