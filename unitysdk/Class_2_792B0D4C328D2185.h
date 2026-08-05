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

#define CLASS_2_792B0D4C328D2185_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x12AD3070)
#define CLASS_2_792B0D4C328D2185_METHOD_2_6597F9D2D4A0542F_OFFSET UNITYSDK_OFFSET(0x12AD30C0)
#define CLASS_2_792B0D4C328D2185_METHOD_2_8E0386403DFAC6D2_OFFSET UNITYSDK_OFFSET(0x12AD2F60)
#define CLASS_2_792B0D4C328D2185_METHOD_2_9B00168F1EABB964_OFFSET UNITYSDK_OFFSET(0x12AD2850)
#define CLASS_2_792B0D4C328D2185_METHOD_2_AE28EB12CB70B929_OFFSET UNITYSDK_OFFSET(0x12AD1E50)
#define CLASS_2_792B0D4C328D2185_ONCLICK_OFFSET UNITYSDK_OFFSET(0x12AD2440)
#define CLASS_2_792B0D4C328D2185__CTOR_OFFSET UNITYSDK_OFFSET(0x12AD2800)

inline static constexpr unsigned int Class_2_792B0D4C328D2185_TypeDefinitionIndex = 60762;

class Class_2_792B0D4C328D2185 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x58
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x60
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x68
	::Class_2_4D8739E272CE2D35* Field_2_9; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x78
	::UnityEngine::RectTransform* Field_2_11; // 0x80
	::UnityEngine::RectTransform* Field_2_0; // 0x88
	::Class_1_D8588B91FE1E2AC4* Field_2_8; // 0x90
	::UnityEngine::RectTransform* Field_2_4; // 0x98
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0xA0
	::Class_2_B4378B46E0020E85* Field_2_3; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_792B0D4C328D2185__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AE28EB12CB70B929(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_792B0D4C328D2185_METHOD_2_AE28EB12CB70B929_OFFSET))(this, a1, a2);
	}

	::System::Void OnClick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_792B0D4C328D2185_ONCLICK_OFFSET))(this);
	}

	::System::Void Method_2_9B00168F1EABB964(::Class_3_CFE95B82BD52EB3B* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_CFE95B82BD52EB3B*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_792B0D4C328D2185_METHOD_2_9B00168F1EABB964_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8E0386403DFAC6D2(::System::Int32 a1, ::System::Object* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_792B0D4C328D2185_METHOD_2_8E0386403DFAC6D2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_792B0D4C328D2185_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_6597F9D2D4A0542F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_792B0D4C328D2185_METHOD_2_6597F9D2D4A0542F_OFFSET))(this);
	}
};
