#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_D8588B91FE1E2AC4;
class Class_2_1A39E1B51756BF41;
class Class_2_214A08D8A91F32A6;
class Class_2_B4378B46E0020E85;
class Class_2_E87F1D15F1D4AC72;
class Class_3_234BA31A5613637F_Class_4_6F9AAF338CE0A6A9;
class Class_3_CFE95B82BD52EB3B;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_E2828CA0AAE5C975;

#define CLASS_2_481ADD301F286C9F_METHOD_2_17508C33EC3620C4_OFFSET UNITYSDK_OFFSET(0x11EFB790)
#define CLASS_2_481ADD301F286C9F_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x11EFC070)
#define CLASS_2_481ADD301F286C9F_METHOD_2_4919F93F1EBB4B5A_OFFSET UNITYSDK_OFFSET(0x11EFC0C0)
#define CLASS_2_481ADD301F286C9F_METHOD_2_DC2308172999D12F_OFFSET UNITYSDK_OFFSET(0x11EFCAC0)
#define CLASS_2_481ADD301F286C9F_METHOD_2_FC1480F8EEC2C4B4_OFFSET UNITYSDK_OFFSET(0x11EFC630)
#define CLASS_2_481ADD301F286C9F_ONCLICK_OFFSET UNITYSDK_OFFSET(0x11EFBF10)
#define CLASS_2_481ADD301F286C9F__CTOR_OFFSET UNITYSDK_OFFSET(0x11EFC020)

inline static constexpr unsigned int Class_2_481ADD301F286C9F_TypeDefinitionIndex = 52964;

class Class_2_481ADD301F286C9F : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x50
	::Class_2_214A08D8A91F32A6* Field_2_12; // 0x58
	::UnityEngine::RectTransform* Field_2_4; // 0x60
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x68
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x78
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x80
	::UnityEngine::RectTransform* Field_2_1; // 0x88
	::UnityEngine::RectTransform* Field_2_9; // 0x90
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x98
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0xA0
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0xA8
	::Class_1_D8588B91FE1E2AC4* Field_2_13; // 0xB0
	::System::Collections::Generic::List_1<::Class_3_E2828CA0AAE5C975<::Class_3_234BA31A5613637F_Class_4_6F9AAF338CE0A6A9*>*>* Field_2_8; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_481ADD301F286C9F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_17508C33EC3620C4(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_481ADD301F286C9F_METHOD_2_17508C33EC3620C4_OFFSET))(this, a1, a2);
	}

	::System::Void OnClick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_481ADD301F286C9F_ONCLICK_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_481ADD301F286C9F_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_4919F93F1EBB4B5A(::Class_3_CFE95B82BD52EB3B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_CFE95B82BD52EB3B*))((::PBYTE)hIl2Cpp + CLASS_2_481ADD301F286C9F_METHOD_2_4919F93F1EBB4B5A_OFFSET))(this, a1);
	}

	::System::Void Method_2_DC2308172999D12F(::System::Int32 a1, ::System::Object* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_481ADD301F286C9F_METHOD_2_DC2308172999D12F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FC1480F8EEC2C4B4(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_481ADD301F286C9F_METHOD_2_FC1480F8EEC2C4B4_OFFSET))(this, a1);
	}
};
