#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_1EEC7A202DD770F0_Class_1_C424DD286DB85E98;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_1EEC7A202DD770F0_METHOD_2_2E1989BE44FB5F3F_OFFSET UNITYSDK_OFFSET(0x17AAA6B0)
#define CLASS_2_1EEC7A202DD770F0_METHOD_2_428BD246F5FAAA99_OFFSET UNITYSDK_OFFSET(0x17AAAA90)
#define CLASS_2_1EEC7A202DD770F0_METHOD_2_5B94350BBAC6A35E_OFFSET UNITYSDK_OFFSET(0x17AAA430)
#define CLASS_2_1EEC7A202DD770F0_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x17AAA300)
#define CLASS_2_1EEC7A202DD770F0__CTOR_OFFSET UNITYSDK_OFFSET(0x17AAB380)
#define CLASS_2_1EEC7A202DD770F0__ONBIND_OFFSET UNITYSDK_OFFSET(0x17AAA210)

inline static constexpr unsigned int Class_2_1EEC7A202DD770F0_TypeDefinitionIndex = 68188;

class Class_2_1EEC7A202DD770F0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::UnityEngine::UI::Image* Field_2_3; // 0x60
	::UnityEngine::UI::Image* Field_2_4; // 0x68
	::Class_2_1EEC7A202DD770F0_Class_1_C424DD286DB85E98* Field_2_5; // 0x70
	::UnityEngine::Animation* Field_2_6; // 0x78
	::UnityEngine::UI::Image* Field_2_7; // 0x80
	::System::Nullable_1<::System::Boolean> Field_2_8; // 0x88
	::System::Nullable_1<::UnityEngine::Color> Field_2_9; // 0x8C
	::System::Single Field_2_10; // 0xA0
	::System::Single Field_2_11; // 0xA4
	::System::Single Field_2_12; // 0xA8
	::System::Single Field_2_13; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EEC7A202DD770F0__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EEC7A202DD770F0__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_1EEC7A202DD770F0_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B94350BBAC6A35E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1EEC7A202DD770F0_METHOD_2_5B94350BBAC6A35E_OFFSET))(this, a1);
	}

	::System::Void Method_2_2E1989BE44FB5F3F(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_1EEC7A202DD770F0_METHOD_2_2E1989BE44FB5F3F_OFFSET))(this, a1);
	}

	::System::Void Method_2_428BD246F5FAAA99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EEC7A202DD770F0_METHOD_2_428BD246F5FAAA99_OFFSET))(this);
	}
};
