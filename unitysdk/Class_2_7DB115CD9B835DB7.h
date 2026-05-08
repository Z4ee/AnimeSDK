#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_D28A6A5ABB447254;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Texture; }

#define CLASS_2_7DB115CD9B835DB7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x114C97E0)
#define CLASS_2_7DB115CD9B835DB7_METHOD_2_0DF1A4D79FD81F37_OFFSET UNITYSDK_OFFSET(0x114CA0E0)
#define CLASS_2_7DB115CD9B835DB7_METHOD_2_30BC830EFE300715_OFFSET UNITYSDK_OFFSET(0x114CA130)
#define CLASS_2_7DB115CD9B835DB7_METHOD_2_45C00F076E65CC36_OFFSET UNITYSDK_OFFSET(0x114C9AE0)
#define CLASS_2_7DB115CD9B835DB7_METHOD_2_623D1D7038E4F53F_OFFSET UNITYSDK_OFFSET(0x114C9DE0)
#define CLASS_2_7DB115CD9B835DB7_METHOD_2_85A01E585728E955_OFFSET UNITYSDK_OFFSET(0x114CA340)
#define CLASS_2_7DB115CD9B835DB7_METHOD_2_A9A93CCE2CA6312C_OFFSET UNITYSDK_OFFSET(0x114CA480)
#define CLASS_2_7DB115CD9B835DB7_METHOD_2_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x114C9830)
#define CLASS_2_7DB115CD9B835DB7_METHOD_2_CAD4A06D8E172AF1_OFFSET UNITYSDK_OFFSET(0x114C9FD0)
#define CLASS_2_7DB115CD9B835DB7_METHOD_2_EC03BF13D7F40502_OFFSET UNITYSDK_OFFSET(0x114C9CE0)
#define CLASS_2_7DB115CD9B835DB7_ONCREATE_OFFSET UNITYSDK_OFFSET(0x114C9A90)
#define CLASS_2_7DB115CD9B835DB7__CCTOR_OFFSET UNITYSDK_OFFSET(0x114C9AD0)
#define CLASS_2_7DB115CD9B835DB7__CTOR_OFFSET UNITYSDK_OFFSET(0x114C9750)

inline static constexpr unsigned int Class_2_7DB115CD9B835DB7_TypeDefinitionIndex = 58200;

class Class_2_7DB115CD9B835DB7 : public ::Foundation::SingletonDisposable_1<::Class_2_7DB115CD9B835DB7*>
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7DB115CD9B835DB7_TypeDefinitionIndex)->GetStaticField(0xF0F0);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7DB115CD9B835DB7_TypeDefinitionIndex)->GetStaticField(0xF0F4);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_D28A6A5ABB447254*>* Field_2_2; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7_ONCREATE_OFFSET))(this);
	}

	static ::System::Int32 Method_2_45C00F076E65CC36(::UnityEngine::Texture* a1)
	{
		return ((::System::Int32(*)(::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7_METHOD_2_45C00F076E65CC36_OFFSET))(a1);
	}

	static ::System::Int32 Method_2_EC03BF13D7F40502(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7_METHOD_2_EC03BF13D7F40502_OFFSET))(a1);
	}

	::System::Void Method_2_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7_METHOD_2_B235E757922104A8_OFFSET))(this);
	}

	::System::Void Method_2_623D1D7038E4F53F(::UnityEngine::Texture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7_METHOD_2_623D1D7038E4F53F_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_2_CAD4A06D8E172AF1(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7_METHOD_2_CAD4A06D8E172AF1_OFFSET))(a1);
	}

	::UnityEngine::Texture* Method_2_30BC830EFE300715(::System::String* a1)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7_METHOD_2_30BC830EFE300715_OFFSET))(this, a1);
	}

	::UnityEngine::Texture* Method_2_85A01E585728E955(::System::Int32 a1)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7_METHOD_2_85A01E585728E955_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A9A93CCE2CA6312C(::UnityEngine::Texture* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7_METHOD_2_A9A93CCE2CA6312C_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_0DF1A4D79FD81F37(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7_METHOD_2_0DF1A4D79FD81F37_OFFSET))(a1);
	}
};
