#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_D8588B91FE1E2AC4;
class Class_2_1A39E1B51756BF41;
class Class_2_4D8739E272CE2D35;
class Class_2_B4378B46E0020E85;
class Class_2_E87F1D15F1D4AC72;
class Class_2_FDFE69FE7B72463B;
class Class_3_FAC8D0FE935227B1_Class_4_6F9AAF338CE0A6A9;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_E2828CA0AAE5C975;

#define CLASS_2_7335744AA77548BF_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x11C61620)
#define CLASS_2_7335744AA77548BF_METHOD_2_AE28EB12CB70B929_OFFSET UNITYSDK_OFFSET(0x11C600F0)
#define CLASS_2_7335744AA77548BF_METHOD_2_C7EE4F4D4C23F0BD_OFFSET UNITYSDK_OFFSET(0x11C60F10)
#define CLASS_2_7335744AA77548BF_METHOD_2_FC1480F8EEC2C4B4_OFFSET UNITYSDK_OFFSET(0x11C60A70)
#define CLASS_2_7335744AA77548BF_ONCLICK_OFFSET UNITYSDK_OFFSET(0x11C60910)
#define CLASS_2_7335744AA77548BF__CTOR_OFFSET UNITYSDK_OFFSET(0x11C60A20)

inline static constexpr unsigned int Class_2_7335744AA77548BF_TypeDefinitionIndex = 83054;

class Class_2_7335744AA77548BF : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_14; // 0x60
	::Class_2_1A39E1B51756BF41* Field_2_8; // 0x68
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x70
	::Class_1_D8588B91FE1E2AC4* Field_2_16; // 0x78
	::UnityEngine::RectTransform* Field_2_3; // 0x80
	::UnityEngine::RectTransform* Field_2_7; // 0x88
	::Class_2_4D8739E272CE2D35* Field_2_15; // 0x90
	::Class_2_1A39E1B51756BF41* Field_2_13; // 0x98
	::UnityEngine::RectTransform* Field_2_12; // 0xA0
	::System::Collections::Generic::List_1<::Class_3_E2828CA0AAE5C975<::Class_3_FAC8D0FE935227B1_Class_4_6F9AAF338CE0A6A9*>*>* Field_2_11; // 0xA8
	::System::Collections::Generic::List_1<::Class_2_FDFE69FE7B72463B*>* Field_2_4; // 0xB0
	::UnityEngine::RectTransform* Field_2_5; // 0xB8
	::Class_2_B4378B46E0020E85* Field_2_1; // 0xC0
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0xC8
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7335744AA77548BF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AE28EB12CB70B929(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_7335744AA77548BF_METHOD_2_AE28EB12CB70B929_OFFSET))(this, a1, a2);
	}

	::System::Void OnClick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7335744AA77548BF_ONCLICK_OFFSET))(this);
	}

	::System::Void Method_2_FC1480F8EEC2C4B4(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7335744AA77548BF_METHOD_2_FC1480F8EEC2C4B4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C7EE4F4D4C23F0BD(::System::Int32 a1, ::System::Object* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7335744AA77548BF_METHOD_2_C7EE4F4D4C23F0BD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7335744AA77548BF_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
