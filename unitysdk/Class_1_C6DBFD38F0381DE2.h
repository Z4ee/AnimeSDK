#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_338;
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define CLASS_1_C6DBFD38F0381DE2_METHOD_1_12D5907B47EC4BD7_OFFSET UNITYSDK_OFFSET(0x17DA7AD0)
#define CLASS_1_C6DBFD38F0381DE2_METHOD_1_3E7771E09E2D7A92_OFFSET UNITYSDK_OFFSET(0x17DA7E20)
#define CLASS_1_C6DBFD38F0381DE2_METHOD_1_6C17062D5613F96D_OFFSET UNITYSDK_OFFSET(0x17DA79D0)
#define CLASS_1_C6DBFD38F0381DE2_METHOD_1_77AEE527F78C8D21_OFFSET UNITYSDK_OFFSET(0x17DA7DD0)
#define CLASS_1_C6DBFD38F0381DE2__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DA80B0)
#define CLASS_1_C6DBFD38F0381DE2__CTOR_OFFSET UNITYSDK_OFFSET(0x17DA80A0)

inline static constexpr unsigned int Class_1_C6DBFD38F0381DE2_TypeDefinitionIndex = 45931;

class Class_1_C6DBFD38F0381DE2 : public ::System::Object
{
public:
	static ::Class_1_C6DBFD38F0381DE2** StaticGet_Field_1_0()
	{
		return (::Class_1_C6DBFD38F0381DE2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6DBFD38F0381DE2_TypeDefinitionIndex)->GetStaticField(0x5A850);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6DBFD38F0381DE2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6DBFD38F0381DE2__CCTOR_OFFSET))();
	}

	::UnityEngine::Object* Method_1_6C17062D5613F96D(::System::String* a1, ::System::Type* a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_C6DBFD38F0381DE2_METHOD_1_6C17062D5613F96D_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_338* Method_1_12D5907B47EC4BD7(::System::String* a1, ::System::Type* a2)
	{
		return ((::Class_0_16E4307DCC419505_338*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_C6DBFD38F0381DE2_METHOD_1_12D5907B47EC4BD7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_77AEE527F78C8D21(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C6DBFD38F0381DE2_METHOD_1_77AEE527F78C8D21_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7771E09E2D7A92(::Class_0_16E4307DCC419505_338* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_338*))((::PBYTE)hIl2Cpp + CLASS_1_C6DBFD38F0381DE2_METHOD_1_3E7771E09E2D7A92_OFFSET))(this, a1);
	}
};
