#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_1EEC7A202DD770F0_Class_1_C424DD286DB85E98;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_1EEC7A202DD770F0_METHOD_2_2E1989BE44FB5F3F_OFFSET UNITYSDK_OFFSET(0xB48F590)
#define CLASS_2_1EEC7A202DD770F0_METHOD_2_428BD246F5FAAA99_OFFSET UNITYSDK_OFFSET(0xB48F970)
#define CLASS_2_1EEC7A202DD770F0_METHOD_2_5B94350BBAC6A35E_OFFSET UNITYSDK_OFFSET(0xB48F310)
#define CLASS_2_1EEC7A202DD770F0_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0xB48F1E0)
#define CLASS_2_1EEC7A202DD770F0__CTOR_OFFSET UNITYSDK_OFFSET(0xB490250)
#define CLASS_2_1EEC7A202DD770F0__ONBIND_OFFSET UNITYSDK_OFFSET(0xB48F0F0)

inline static constexpr unsigned int Class_2_1EEC7A202DD770F0_TypeDefinitionIndex = 71367;

class Class_2_1EEC7A202DD770F0 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* FOJHBNDBANG; // 0x0
	// static const ::System::String* KGNMFJAMICO; // 0x0
	::Class_2_1EEC7A202DD770F0_Class_1_C424DD286DB85E98* MOFHGHGKAFP; // 0x60
	::UnityEngine::UI::Image* LGIDLJJEPMN; // 0x68
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x70
	::UnityEngine::UI::Image* LKAOENJHMHA; // 0x78
	::UnityEngine::UI::Image* PLPHEFCFGBG; // 0x80
	::System::Single PGFKAOFFKHD; // 0x88
	::System::Single JBDOICCALDN; // 0x8C
	::System::Single HPGLNFKJKIJ; // 0x90
	::System::Nullable_1<::System::Boolean> JKJAIJONJNN; // 0x94
	::System::Nullable_1<::UnityEngine::Color> NHFPGLCLOMO; // 0x98
	::System::Single EMCBFBGJBJI; // 0xAC

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
