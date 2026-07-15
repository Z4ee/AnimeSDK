#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_DFFEF505E531BDCD_Class_1_C424DD286DB85E98_1;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_DFFEF505E531BDCD_METHOD_2_1352708442940A46_OFFSET UNITYSDK_OFFSET(0x15F11AD0)
#define CLASS_2_DFFEF505E531BDCD_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x15F119D0)
#define CLASS_2_DFFEF505E531BDCD_METHOD_2_776AD0D15E255D1D_OFFSET UNITYSDK_OFFSET(0x15F11D70)
#define CLASS_2_DFFEF505E531BDCD__CTOR_OFFSET UNITYSDK_OFFSET(0x15F12090)
#define CLASS_2_DFFEF505E531BDCD__ONBIND_OFFSET UNITYSDK_OFFSET(0x15F118E0)

inline static constexpr unsigned int Class_2_DFFEF505E531BDCD_TypeDefinitionIndex = 68391;

class Class_2_DFFEF505E531BDCD : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::UnityEngine::UI::Image* Field_2_3; // 0x60
	::UnityEngine::UI::Image* Field_2_4; // 0x68
	::UnityEngine::Animation* Field_2_5; // 0x70
	::Class_2_DFFEF505E531BDCD_Class_1_C424DD286DB85E98_1* Field_2_6; // 0x78
	::UnityEngine::UI::Image* Field_2_7; // 0x80
	::System::Single Field_2_8; // 0x88
	::System::Single Field_2_9; // 0x8C
	::System::Single Field_2_10; // 0x90
	::System::Nullable_1<::System::Boolean> Field_2_11; // 0x94

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
