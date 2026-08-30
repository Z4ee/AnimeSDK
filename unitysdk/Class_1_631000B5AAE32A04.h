#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_631000B5AAE32A04_METHOD_1_019433AA5F044915_OFFSET UNITYSDK_OFFSET(0x1A087800)
#define CLASS_1_631000B5AAE32A04_METHOD_1_71F0872EB31B61BD_OFFSET UNITYSDK_OFFSET(0x1A087BA0)
#define CLASS_1_631000B5AAE32A04_METHOD_1_7BE812B945CF0498_OFFSET UNITYSDK_OFFSET(0x1A087A00)
#define CLASS_1_631000B5AAE32A04__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A087C20)

inline static constexpr unsigned int Class_1_631000B5AAE32A04_TypeDefinitionIndex = 61450;

class Class_1_631000B5AAE32A04 : public ::System::Object
{
public:
	static ::System::String** StaticGet_ACLDOADLKGE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631000B5AAE32A04_TypeDefinitionIndex)->GetStaticField(0x604C0);
	}
	static ::System::String** StaticGet_HKODCLIDLAI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631000B5AAE32A04_TypeDefinitionIndex)->GetStaticField(0x604C8);
	}
	static ::System::String** StaticGet_EDMGDJLAOLP()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631000B5AAE32A04_TypeDefinitionIndex)->GetStaticField(0x604D0);
	}
	static ::System::String** StaticGet_NJBINOCOCED()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631000B5AAE32A04_TypeDefinitionIndex)->GetStaticField(0x604D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631000B5AAE32A04__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_019433AA5F044915()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_631000B5AAE32A04_METHOD_1_019433AA5F044915_OFFSET))();
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
