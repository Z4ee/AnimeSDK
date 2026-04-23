#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_0BA17B48D88DCFE2_Class_1_C424DD286DB85E98_1;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_0BA17B48D88DCFE2_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x127EA140)
#define CLASS_2_0BA17B48D88DCFE2_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x127E9B60)
#define CLASS_2_0BA17B48D88DCFE2_METHOD_2_A323A7720C85F580_OFFSET UNITYSDK_OFFSET(0x127E9C60)
#define CLASS_2_0BA17B48D88DCFE2_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x127EA0D0)
#define CLASS_2_0BA17B48D88DCFE2_METHOD_2_D0EAB95EE152A65F_OFFSET UNITYSDK_OFFSET(0x127E9E70)
#define CLASS_2_0BA17B48D88DCFE2__CTOR_OFFSET UNITYSDK_OFFSET(0x127EA040)
#define CLASS_2_0BA17B48D88DCFE2__ONBIND_OFFSET UNITYSDK_OFFSET(0x127E9A70)
#define CLASS_2_0BA17B48D88DCFE2___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x127EA070)

inline static constexpr unsigned int Class_2_0BA17B48D88DCFE2_TypeDefinitionIndex = 66014;

class Class_2_0BA17B48D88DCFE2 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_10; // 0x0
	// static const ::System::String* Field_2_11; // 0x0
	::UnityEngine::Animation* Field_2_3; // 0x60
	::UnityEngine::UI::Image* Field_2_1; // 0x68
	::Class_2_0BA17B48D88DCFE2_Class_1_C424DD286DB85E98_1* Field_2_8; // 0x70
	::UnityEngine::UI::Image* Field_2_0; // 0x78
	::UnityEngine::UI::Image* Field_2_2; // 0x80
	::System::Single Field_2_7; // 0x88
	::System::Single Field_2_5; // 0x8C
	::System::Nullable_1<::System::Boolean> Field_2_9; // 0x90
	::System::Single Field_2_6; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BA17B48D88DCFE2__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BA17B48D88DCFE2__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_0BA17B48D88DCFE2_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_A323A7720C85F580(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0BA17B48D88DCFE2_METHOD_2_A323A7720C85F580_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0EAB95EE152A65F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BA17B48D88DCFE2_METHOD_2_D0EAB95EE152A65F_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BA17B48D88DCFE2___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_0BA17B48D88DCFE2_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BA17B48D88DCFE2_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
