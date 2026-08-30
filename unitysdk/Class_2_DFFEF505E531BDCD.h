#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_DFFEF505E531BDCD_Class_1_C424DD286DB85E98_1;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_DFFEF505E531BDCD_METHOD_2_1352708442940A46_OFFSET UNITYSDK_OFFSET(0x18A68E70)
#define CLASS_2_DFFEF505E531BDCD_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x18A68D70)
#define CLASS_2_DFFEF505E531BDCD_METHOD_2_776AD0D15E255D1D_OFFSET UNITYSDK_OFFSET(0x18A69110)
#define CLASS_2_DFFEF505E531BDCD__CTOR_OFFSET UNITYSDK_OFFSET(0x18A69430)
#define CLASS_2_DFFEF505E531BDCD__ONBIND_OFFSET UNITYSDK_OFFSET(0x18A68C80)

inline static constexpr unsigned int Class_2_DFFEF505E531BDCD_TypeDefinitionIndex = 71572;

class Class_2_DFFEF505E531BDCD : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* FOJHBNDBANG; // 0x0
	// static const ::System::String* KGNMFJAMICO; // 0x0
	::Class_2_DFFEF505E531BDCD_Class_1_C424DD286DB85E98_1* MOFHGHGKAFP; // 0x60
	::UnityEngine::UI::Image* LGIDLJJEPMN; // 0x68
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x70
	::UnityEngine::UI::Image* PLPHEFCFGBG; // 0x78
	::UnityEngine::UI::Image* LKAOENJHMHA; // 0x80
	::System::Nullable_1<::System::Boolean> JKJAIJONJNN; // 0x88
	::System::Single JJOACHEJAAE; // 0x8C
	::System::Single JBDOICCALDN; // 0x90
	::System::Single PGFKAOFFKHD; // 0x94

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
};
