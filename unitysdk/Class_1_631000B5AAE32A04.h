#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_631000B5AAE32A04_METHOD_1_56C243520A6A6A4C_OFFSET UNITYSDK_OFFSET(0x108F5C20)
#define CLASS_1_631000B5AAE32A04_METHOD_1_71F0872EB31B61BD_OFFSET UNITYSDK_OFFSET(0x108F5F90)
#define CLASS_1_631000B5AAE32A04_METHOD_1_7BE812B945CF0498_OFFSET UNITYSDK_OFFSET(0x108F5DE0)
#define CLASS_1_631000B5AAE32A04__CCTOR_OFFSET UNITYSDK_OFFSET(0x108F6010)

inline static constexpr unsigned int Class_1_631000B5AAE32A04_TypeDefinitionIndex = 49760;

class Class_1_631000B5AAE32A04 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631000B5AAE32A04_TypeDefinitionIndex)->GetStaticField(0x37470);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631000B5AAE32A04_TypeDefinitionIndex)->GetStaticField(0x37478);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631000B5AAE32A04_TypeDefinitionIndex)->GetStaticField(0x37480);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631000B5AAE32A04_TypeDefinitionIndex)->GetStaticField(0x37488);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631000B5AAE32A04__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_56C243520A6A6A4C()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_631000B5AAE32A04_METHOD_1_56C243520A6A6A4C_OFFSET))();
	}

	static ::System::String* Method_1_71F0872EB31B61BD()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_631000B5AAE32A04_METHOD_1_71F0872EB31B61BD_OFFSET))();
	}

	static ::System::String* Method_1_7BE812B945CF0498(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_631000B5AAE32A04_METHOD_1_7BE812B945CF0498_OFFSET))(a1);
	}
};
