#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_0B8A4D2432A64C99_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0xCEAFE80)
#define CLASS_2_0B8A4D2432A64C99_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xCEAFCE0)
#define CLASS_2_0B8A4D2432A64C99_METHOD_2_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0xCEAFD40)
#define CLASS_2_0B8A4D2432A64C99__CTOR_OFFSET UNITYSDK_OFFSET(0xCEAFDF0)
#define CLASS_2_0B8A4D2432A64C99__ONBIND_OFFSET UNITYSDK_OFFSET(0xCEAFC80)
#define CLASS_2_0B8A4D2432A64C99___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xCEAFE20)

inline static constexpr unsigned int Class_2_0B8A4D2432A64C99_TypeDefinitionIndex = 67431;

class Class_2_0B8A4D2432A64C99 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Text* Field_2_0; // 0x60
	::System::Int32 Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B8A4D2432A64C99__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B8A4D2432A64C99__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_0B8A4D2432A64C99_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0B8A4D2432A64C99_METHOD_2_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B8A4D2432A64C99___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_0B8A4D2432A64C99_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}
};
