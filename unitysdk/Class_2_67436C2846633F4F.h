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
class Class_3_7CE821A6E58DE7D4_Class_4_6F9AAF338CE0A6A9_5;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_E2828CA0AAE5C975;

#define CLASS_2_67436C2846633F4F_METHOD_2_3502394722DB4753_OFFSET UNITYSDK_OFFSET(0x181E8480)
#define CLASS_2_67436C2846633F4F_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x181E8430)
#define CLASS_2_67436C2846633F4F_METHOD_2_AE28EB12CB70B929_OFFSET UNITYSDK_OFFSET(0x181E7AB0)
#define CLASS_2_67436C2846633F4F_METHOD_2_FC1480F8EEC2C4B4_OFFSET UNITYSDK_OFFSET(0x181E8B90)
#define CLASS_2_67436C2846633F4F_ONCLICK_OFFSET UNITYSDK_OFFSET(0x181E82D0)
#define CLASS_2_67436C2846633F4F__CTOR_OFFSET UNITYSDK_OFFSET(0x181E83E0)

inline static constexpr unsigned int Class_2_67436C2846633F4F_TypeDefinitionIndex = 55292;

class Class_2_67436C2846633F4F : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_1_D8588B91FE1E2AC4* Field_2_17; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x58
	::UnityEngine::RectTransform* Field_2_10; // 0x60
	::UnityEngine::RectTransform* Field_2_4; // 0x68
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x78
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_19; // 0x88
	::UnityEngine::RectTransform* Field_2_6; // 0x90
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x98
	::UnityEngine::RectTransform* Field_2_13; // 0xA0
	::Class_2_1A39E1B51756BF41* Field_2_12; // 0xA8
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0xB0
	::System::Collections::Generic::List_1<::Class_3_E2828CA0AAE5C975<::Class_3_7CE821A6E58DE7D4_Class_4_6F9AAF338CE0A6A9_5*>*>* Field_2_14; // 0xB8
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_15; // 0xC0
	::Class_2_4D8739E272CE2D35* Field_2_18; // 0xC8
	::System::Collections::Generic::List_1<::Class_2_FDFE69FE7B72463B*>* Field_2_5; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67436C2846633F4F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AE28EB12CB70B929(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_67436C2846633F4F_METHOD_2_AE28EB12CB70B929_OFFSET))(this, a1, a2);
	}

	::System::Void OnClick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67436C2846633F4F_ONCLICK_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67436C2846633F4F_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_3502394722DB4753(::System::Int32 a1, ::System::Object* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67436C2846633F4F_METHOD_2_3502394722DB4753_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FC1480F8EEC2C4B4(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_67436C2846633F4F_METHOD_2_FC1480F8EEC2C4B4_OFFSET))(this, a1);
	}
};
