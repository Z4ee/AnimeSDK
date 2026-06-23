#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Enum_3_D6CF5AFC914C2B63_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_1A39E1B51756BF41;
class Class_2_B4378B46E0020E85;
class Class_2_E87F1D15F1D4AC72;
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_D0EBD25115C1D3DA_METHOD_2_1F43312548BC725C_OFFSET UNITYSDK_OFFSET(0x1861A3E0)
#define CLASS_2_D0EBD25115C1D3DA_METHOD_2_417714345BDBCCA2_OFFSET UNITYSDK_OFFSET(0x18619C10)
#define CLASS_2_D0EBD25115C1D3DA_METHOD_2_669CABF5293E2465_OFFSET UNITYSDK_OFFSET(0x18619500)
#define CLASS_2_D0EBD25115C1D3DA_METHOD_2_69A2791D80CF0480_OFFSET UNITYSDK_OFFSET(0x1861A100)
#define CLASS_2_D0EBD25115C1D3DA_METHOD_2_8FF354B64B657510_OFFSET UNITYSDK_OFFSET(0x18619E90)
#define CLASS_2_D0EBD25115C1D3DA_METHOD_2_98731A8D0085C0C4_OFFSET UNITYSDK_OFFSET(0x1861A250)
#define CLASS_2_D0EBD25115C1D3DA_METHOD_2_A4BEEC2B136BCC36_OFFSET UNITYSDK_OFFSET(0x1861A550)
#define CLASS_2_D0EBD25115C1D3DA_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x1861A0B0)
#define CLASS_2_D0EBD25115C1D3DA__CTOR_OFFSET UNITYSDK_OFFSET(0x18619BC0)

inline static constexpr unsigned int Class_2_D0EBD25115C1D3DA_TypeDefinitionIndex = 85652;

class Class_2_D0EBD25115C1D3DA : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::UnityEngine::RectTransform* Field_2_5; // 0x50
	::UnityEngine::UI::Extension::UITabButton* Field_2_7; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x60
	::UnityEngine::RectTransform* Field_2_0; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x70
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x78
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x80
	::UnityEngine::RectTransform* Field_2_4; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D0EBD25115C1D3DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_669CABF5293E2465(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_D0EBD25115C1D3DA_METHOD_2_669CABF5293E2465_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_417714345BDBCCA2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D0EBD25115C1D3DA_METHOD_2_417714345BDBCCA2_OFFSET))(this, a1);
	}

	::System::Void Method_2_8FF354B64B657510(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D0EBD25115C1D3DA_METHOD_2_8FF354B64B657510_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D0EBD25115C1D3DA_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::UnityEngine::UI::Extension::UITabButton* Method_2_69A2791D80CF0480()
	{
		return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D0EBD25115C1D3DA_METHOD_2_69A2791D80CF0480_OFFSET))(this);
	}

	::System::Void Method_2_98731A8D0085C0C4(::Enum_3_D6CF5AFC914C2B63_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_D6CF5AFC914C2B63_1))((::PBYTE)hIl2Cpp + CLASS_2_D0EBD25115C1D3DA_METHOD_2_98731A8D0085C0C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_1F43312548BC725C(::Foundation::AssetPath a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_D0EBD25115C1D3DA_METHOD_2_1F43312548BC725C_OFFSET))(this, a1);
	}

	::System::Void Method_2_A4BEEC2B136BCC36(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D0EBD25115C1D3DA_METHOD_2_A4BEEC2B136BCC36_OFFSET))(this, a1);
	}
};
