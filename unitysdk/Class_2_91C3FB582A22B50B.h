#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_D8588B91FE1E2AC4;
class Class_2_1A39E1B51756BF41;
class Class_2_4D8739E272CE2D35;
class Class_2_B4378B46E0020E85;
class Class_2_E87F1D15F1D4AC72;
class Class_3_CFE95B82BD52EB3B;
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_91C3FB582A22B50B_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x12E64410)
#define CLASS_2_91C3FB582A22B50B_METHOD_2_6597F9D2D4A0542F_OFFSET UNITYSDK_OFFSET(0x12E64460)
#define CLASS_2_91C3FB582A22B50B_METHOD_2_AE28EB12CB70B929_OFFSET UNITYSDK_OFFSET(0x12E63A20)
#define CLASS_2_91C3FB582A22B50B_METHOD_2_C809AEB8773518BB_OFFSET UNITYSDK_OFFSET(0x12E644C0)
#define CLASS_2_91C3FB582A22B50B_METHOD_2_EDF4C4615B6803CD_OFFSET UNITYSDK_OFFSET(0x12E645D0)
#define CLASS_2_91C3FB582A22B50B_ONCLICK_OFFSET UNITYSDK_OFFSET(0x12E64010)
#define CLASS_2_91C3FB582A22B50B__CTOR_OFFSET UNITYSDK_OFFSET(0x12E643C0)

inline static constexpr unsigned int Class_2_91C3FB582A22B50B_TypeDefinitionIndex = 52423;

class Class_2_91C3FB582A22B50B : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x58
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x60
	::Class_2_4D8739E272CE2D35* Field_2_10; // 0x68
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x70
	::UnityEngine::RectTransform* Field_2_3; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x80
	::UnityEngine::RectTransform* Field_2_7; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x90
	::UnityEngine::RectTransform* Field_2_8; // 0x98
	::Class_1_D8588B91FE1E2AC4* Field_2_11; // 0xA0
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91C3FB582A22B50B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AE28EB12CB70B929(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_91C3FB582A22B50B_METHOD_2_AE28EB12CB70B929_OFFSET))(this, a1, a2);
	}

	::System::Void OnClick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91C3FB582A22B50B_ONCLICK_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_91C3FB582A22B50B_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_6597F9D2D4A0542F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91C3FB582A22B50B_METHOD_2_6597F9D2D4A0542F_OFFSET))(this);
	}

	::System::Void Method_2_C809AEB8773518BB(::System::Int32 a1, ::System::Object* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_91C3FB582A22B50B_METHOD_2_C809AEB8773518BB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EDF4C4615B6803CD(::Class_3_CFE95B82BD52EB3B* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_CFE95B82BD52EB3B*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_91C3FB582A22B50B_METHOD_2_EDF4C4615B6803CD_OFFSET))(this, a1, a2);
	}
};
