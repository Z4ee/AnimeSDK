#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Enum_3_D6CF5AFC914C2B63.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_1A39E1B51756BF41;
class Class_2_B4378B46E0020E85;
class Class_2_E87F1D15F1D4AC72;
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_84D9307529457C38_METHOD_2_1F43312548BC725C_OFFSET UNITYSDK_OFFSET(0xD498FD0)
#define CLASS_2_84D9307529457C38_METHOD_2_417714345BDBCCA2_OFFSET UNITYSDK_OFFSET(0xD499140)
#define CLASS_2_84D9307529457C38_METHOD_2_98731A8D0085C0C4_OFFSET UNITYSDK_OFFSET(0xD499420)
#define CLASS_2_84D9307529457C38_METHOD_2_A4BEEC2B136BCC36_OFFSET UNITYSDK_OFFSET(0xD4995B0)
#define CLASS_2_84D9307529457C38_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xD4993D0)
#define CLASS_2_84D9307529457C38_METHOD_2_AE28EB12CB70B929_OFFSET UNITYSDK_OFFSET(0xD498820)
#define CLASS_2_84D9307529457C38_METHOD_2_BFA0E98A659CC04D_OFFSET UNITYSDK_OFFSET(0xD499650)
#define CLASS_2_84D9307529457C38_METHOD_2_CF90C6D75F3F1C67_OFFSET UNITYSDK_OFFSET(0xD4997A0)
#define CLASS_2_84D9307529457C38__CTOR_OFFSET UNITYSDK_OFFSET(0xD498F80)

inline static constexpr unsigned int Class_2_84D9307529457C38_TypeDefinitionIndex = 80071;

class Class_2_84D9307529457C38 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::UnityEngine::RectTransform* Field_2_4; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x58
	::UnityEngine::RectTransform* Field_2_5; // 0x60
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x68
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x70
	::UnityEngine::RectTransform* Field_2_0; // 0x78
	::UnityEngine::UI::Extension::UITabButton* Field_2_7; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84D9307529457C38__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AE28EB12CB70B929(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_84D9307529457C38_METHOD_2_AE28EB12CB70B929_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1F43312548BC725C(::Foundation::AssetPath a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_84D9307529457C38_METHOD_2_1F43312548BC725C_OFFSET))(this, a1);
	}

	::System::Void Method_2_417714345BDBCCA2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_84D9307529457C38_METHOD_2_417714345BDBCCA2_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_84D9307529457C38_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_98731A8D0085C0C4(::Enum_3_D6CF5AFC914C2B63 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_D6CF5AFC914C2B63))((::PBYTE)hIl2Cpp + CLASS_2_84D9307529457C38_METHOD_2_98731A8D0085C0C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_A4BEEC2B136BCC36(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_84D9307529457C38_METHOD_2_A4BEEC2B136BCC36_OFFSET))(this, a1);
	}

	::UnityEngine::UI::Extension::UITabButton* Method_2_BFA0E98A659CC04D()
	{
		return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84D9307529457C38_METHOD_2_BFA0E98A659CC04D_OFFSET))(this);
	}

	::System::Void Method_2_CF90C6D75F3F1C67(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_84D9307529457C38_METHOD_2_CF90C6D75F3F1C67_OFFSET))(this, a1);
	}
};
