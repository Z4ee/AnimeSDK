#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9B2CFEFA156739B5;
namespace System { class String; }

#define CLASS_1_CB17D3BFCECFBFE3_METHOD_1_46DA83116A1D3411_OFFSET UNITYSDK_OFFSET(0xDE4AF20)
#define CLASS_1_CB17D3BFCECFBFE3_METHOD_1_A75D7A9C1392E81B_OFFSET UNITYSDK_OFFSET(0xDE4A670)
#define CLASS_1_CB17D3BFCECFBFE3_METHOD_1_AA55ED8BF849DA71_OFFSET UNITYSDK_OFFSET(0xDE4AC90)
#define CLASS_1_CB17D3BFCECFBFE3_METHOD_1_E1AA72CD77EB42E0_OFFSET UNITYSDK_OFFSET(0xDE4AA20)
#define CLASS_1_CB17D3BFCECFBFE3__CTOR_OFFSET UNITYSDK_OFFSET(0xDE4B1D0)

inline static constexpr unsigned int Class_1_CB17D3BFCECFBFE3_TypeDefinitionIndex = 48663;

class Class_1_CB17D3BFCECFBFE3 : public ::System::Object
{
public:
	::Class_1_9B2CFEFA156739B5* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB17D3BFCECFBFE3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A75D7A9C1392E81B(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB17D3BFCECFBFE3_METHOD_1_A75D7A9C1392E81B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E1AA72CD77EB42E0(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB17D3BFCECFBFE3_METHOD_1_E1AA72CD77EB42E0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AA55ED8BF849DA71(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB17D3BFCECFBFE3_METHOD_1_AA55ED8BF849DA71_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_46DA83116A1D3411(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB17D3BFCECFBFE3_METHOD_1_46DA83116A1D3411_OFFSET))(this, a1);
	}
};
