#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_85A134E85BB8A408_Class_1_C424DD286DB85E98;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_85A134E85BB8A408_METHOD_2_0A0A8830B02C5A4B_OFFSET UNITYSDK_OFFSET(0xA1FC670)
#define CLASS_2_85A134E85BB8A408_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA1FCE50)
#define CLASS_2_85A134E85BB8A408_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0xA1FC040)
#define CLASS_2_85A134E85BB8A408_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0xA1FCDE0)
#define CLASS_2_85A134E85BB8A408_METHOD_2_D0B68C1DD4B91F49_OFFSET UNITYSDK_OFFSET(0xA1FC180)
#define CLASS_2_85A134E85BB8A408_METHOD_2_F94763144FCDCC61_OFFSET UNITYSDK_OFFSET(0xA1FC360)
#define CLASS_2_85A134E85BB8A408__CTOR_OFFSET UNITYSDK_OFFSET(0xA1FCD50)
#define CLASS_2_85A134E85BB8A408__ONBIND_OFFSET UNITYSDK_OFFSET(0xA1FBDE0)
#define CLASS_2_85A134E85BB8A408___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA1FCD80)

inline static constexpr unsigned int Class_2_85A134E85BB8A408_TypeDefinitionIndex = 58522;

class Class_2_85A134E85BB8A408 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_12; // 0x0
	// static const ::System::String* Field_2_13; // 0x0
	::UnityEngine::UI::Image* Field_2_1; // 0x60
	::UnityEngine::Animation* Field_2_3; // 0x68
	::UnityEngine::UI::Image* Field_2_2; // 0x70
	::UnityEngine::UI::Image* Field_2_0; // 0x78
	::Class_2_85A134E85BB8A408_Class_1_C424DD286DB85E98* Field_2_10; // 0x80
	::System::Single Field_2_8; // 0x88
	::System::Nullable_1<::UnityEngine::Color> Field_2_9; // 0x8C
	::System::Nullable_1<::System::Boolean> Field_2_11; // 0xA0
	::System::Single Field_2_6; // 0xA4
	::System::Single Field_2_5; // 0xA8
	::System::Single Field_2_7; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85A134E85BB8A408__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85A134E85BB8A408__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_85A134E85BB8A408_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0B68C1DD4B91F49(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_85A134E85BB8A408_METHOD_2_D0B68C1DD4B91F49_OFFSET))(this, a1);
	}

	::System::Void Method_2_F94763144FCDCC61(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_85A134E85BB8A408_METHOD_2_F94763144FCDCC61_OFFSET))(this, a1);
	}

	::System::Void Method_2_0A0A8830B02C5A4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85A134E85BB8A408_METHOD_2_0A0A8830B02C5A4B_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85A134E85BB8A408___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_85A134E85BB8A408_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85A134E85BB8A408_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
