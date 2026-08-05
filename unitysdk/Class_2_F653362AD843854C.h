#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
class MonoUITableScrollV2;
class UIWidgetGroup;
namespace System { class String; }

#define CLASS_2_F653362AD843854C_METHOD_2_041C98781CDD4E10_OFFSET UNITYSDK_OFFSET(0x11B0DB50)
#define CLASS_2_F653362AD843854C_METHOD_2_3EF33FD8BF224359_OFFSET UNITYSDK_OFFSET(0x11B0D9B0)
#define CLASS_2_F653362AD843854C_METHOD_2_7846640FC097AB89_OFFSET UNITYSDK_OFFSET(0x11B0D400)
#define CLASS_2_F653362AD843854C__CTOR_OFFSET UNITYSDK_OFFSET(0x11B0D950)

inline static constexpr unsigned int Class_2_F653362AD843854C_TypeDefinitionIndex = 63044;

class Class_2_F653362AD843854C : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::System::String* Field_2_2; // 0x50
	::System::Int32 Field_2_1; // 0x58
	::System::Int32 Field_2_0; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F653362AD843854C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7846640FC097AB89(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_F653362AD843854C_METHOD_2_7846640FC097AB89_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3EF33FD8BF224359(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F653362AD843854C_METHOD_2_3EF33FD8BF224359_OFFSET))(this, a1);
	}

	::UIWidgetGroup* Method_2_041C98781CDD4E10(::MonoUITableScrollV2* a1)
	{
		return ((::UIWidgetGroup*(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CLASS_2_F653362AD843854C_METHOD_2_041C98781CDD4E10_OFFSET))(this, a1);
	}
};
