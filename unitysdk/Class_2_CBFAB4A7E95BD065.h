#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_EE0106BAC68200BB_Struct_2_813E40854E4D2E88.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System { class String; }

#define CLASS_2_CBFAB4A7E95BD065_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x12203160)
#define CLASS_2_CBFAB4A7E95BD065_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x122031B0)
#define CLASS_2_CBFAB4A7E95BD065_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x122031C0)
#define CLASS_2_CBFAB4A7E95BD065_METHOD_2_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x122031D0)
#define CLASS_2_CBFAB4A7E95BD065_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12203150)
#define CLASS_2_CBFAB4A7E95BD065_ONATTACH_OFFSET UNITYSDK_OFFSET(0x12202BF0)
#define CLASS_2_CBFAB4A7E95BD065_ONDETACH_OFFSET UNITYSDK_OFFSET(0x122030A0)
#define CLASS_2_CBFAB4A7E95BD065_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12202F70)
#define CLASS_2_CBFAB4A7E95BD065_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12202D70)
#define CLASS_2_CBFAB4A7E95BD065__CCTOR_OFFSET UNITYSDK_OFFSET(0x122030F0)
#define CLASS_2_CBFAB4A7E95BD065__CTOR_OFFSET UNITYSDK_OFFSET(0x122030E0)

inline static constexpr unsigned int Class_2_CBFAB4A7E95BD065_TypeDefinitionIndex = 58345;

class Class_2_CBFAB4A7E95BD065 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_CBFAB4A7E95BD065*>
{
public:
	static ::System::String** StaticGet_Field_2_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CBFAB4A7E95BD065_TypeDefinitionIndex)->GetStaticField(0x42D00);
	}
	static ::System::String** StaticGet_Field_2_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CBFAB4A7E95BD065_TypeDefinitionIndex)->GetStaticField(0x42D08);
	}
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CBFAB4A7E95BD065_TypeDefinitionIndex)->GetStaticField(0x42D10);
	}
	::System::String* Field_2_4; // 0x20
	::Class_2_EE0106BAC68200BB_Struct_2_813E40854E4D2E88 Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBFAB4A7E95BD065__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CBFAB4A7E95BD065__CCTOR_OFFSET))();
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBFAB4A7E95BD065_ONATTACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBFAB4A7E95BD065_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBFAB4A7E95BD065_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBFAB4A7E95BD065_ONDETACH_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBFAB4A7E95BD065_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CBFAB4A7E95BD065_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBFAB4A7E95BD065_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBFAB4A7E95BD065_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBFAB4A7E95BD065_METHOD_2_832295EC279E5994_3_OFFSET))(this);
	}
};
