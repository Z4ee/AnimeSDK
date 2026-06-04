#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_DFFEF505E531BDCD_Class_1_C424DD286DB85E98_1;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_DFFEF505E531BDCD_METHOD_2_1352708442940A46_OFFSET UNITYSDK_OFFSET(0x13FFAFD0)
#define CLASS_2_DFFEF505E531BDCD_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13FFB660)
#define CLASS_2_DFFEF505E531BDCD_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x13FFB600)
#define CLASS_2_DFFEF505E531BDCD_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x13FFAED0)
#define CLASS_2_DFFEF505E531BDCD_METHOD_2_776AD0D15E255D1D_OFFSET UNITYSDK_OFFSET(0x13FFB260)
#define CLASS_2_DFFEF505E531BDCD__CTOR_OFFSET UNITYSDK_OFFSET(0x13FFB570)
#define CLASS_2_DFFEF505E531BDCD__ONBIND_OFFSET UNITYSDK_OFFSET(0x13FFADF0)
#define CLASS_2_DFFEF505E531BDCD___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x13FFB5A0)

inline static constexpr unsigned int Class_2_DFFEF505E531BDCD_TypeDefinitionIndex = 66947;

class Class_2_DFFEF505E531BDCD : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::UnityEngine::Animation* Field_2_3; // 0x60
	::UnityEngine::UI::Image* Field_2_4; // 0x68
	::UnityEngine::UI::Image* Field_2_5; // 0x70
	::UnityEngine::UI::Image* Field_2_6; // 0x78
	::Class_2_DFFEF505E531BDCD_Class_1_C424DD286DB85E98_1* Field_2_7; // 0x80
	::System::Nullable_1<::System::Boolean> Field_2_8; // 0x88
	::System::Single Field_2_9; // 0x8C
	::System::Single Field_2_10; // 0x90
	::System::Single Field_2_11; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFFEF505E531BDCD__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFFEF505E531BDCD__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_DFFEF505E531BDCD_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_1352708442940A46(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DFFEF505E531BDCD_METHOD_2_1352708442940A46_OFFSET))(this, a1);
	}

	::System::Void Method_2_776AD0D15E255D1D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFFEF505E531BDCD_METHOD_2_776AD0D15E255D1D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFFEF505E531BDCD___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_DFFEF505E531BDCD_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFFEF505E531BDCD_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
