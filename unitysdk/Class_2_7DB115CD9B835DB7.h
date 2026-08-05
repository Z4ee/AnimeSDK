#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_D28A6A5ABB447254;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Texture; }

#define CLASS_2_7DB115CD9B835DB7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17531CB0)
#define CLASS_2_7DB115CD9B835DB7_METHOD_2_0DF1A4D79FD81F37_OFFSET UNITYSDK_OFFSET(0x175320D0)
#define CLASS_2_7DB115CD9B835DB7_METHOD_2_3F9792EE3BD555DE_OFFSET UNITYSDK_OFFSET(0x17531FC0)
#define CLASS_2_7DB115CD9B835DB7_METHOD_2_471424FB15BC7901_OFFSET UNITYSDK_OFFSET(0x17532120)
#define CLASS_2_7DB115CD9B835DB7_METHOD_2_623D1D7038E4F53F_OFFSET UNITYSDK_OFFSET(0x17532780)
#define CLASS_2_7DB115CD9B835DB7_METHOD_2_6898F6B9ED89BFDE_OFFSET UNITYSDK_OFFSET(0x17532230)
#define CLASS_2_7DB115CD9B835DB7_METHOD_2_85A01E585728E955_OFFSET UNITYSDK_OFFSET(0x17532440)
#define CLASS_2_7DB115CD9B835DB7_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x17531D00)
#define CLASS_2_7DB115CD9B835DB7_METHOD_2_DCF0ADD6F24906B3_OFFSET UNITYSDK_OFFSET(0x17532970)
#define CLASS_2_7DB115CD9B835DB7_METHOD_2_EB4C43CE290B1BF5_OFFSET UNITYSDK_OFFSET(0x17532580)
#define CLASS_2_7DB115CD9B835DB7_ONCREATE_OFFSET UNITYSDK_OFFSET(0x17531F60)
#define CLASS_2_7DB115CD9B835DB7__CCTOR_OFFSET UNITYSDK_OFFSET(0x17531FA0)
#define CLASS_2_7DB115CD9B835DB7__CTOR_OFFSET UNITYSDK_OFFSET(0x17531C20)

inline static constexpr unsigned int Class_2_7DB115CD9B835DB7_TypeDefinitionIndex = 56668;

class Class_2_7DB115CD9B835DB7 : public ::Foundation::SingletonDisposable_1<::Class_2_7DB115CD9B835DB7*>
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7DB115CD9B835DB7_TypeDefinitionIndex)->GetStaticField(0xD6C0);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7DB115CD9B835DB7_TypeDefinitionIndex)->GetStaticField(0xD6C4);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_D28A6A5ABB447254*>* Field_2_7; // 0x10

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

	static ::System::Int32 Method_2_3F9792EE3BD555DE(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7_METHOD_2_3F9792EE3BD555DE_OFFSET))(a1);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_2_6898F6B9ED89BFDE(::System::String* a1)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7_METHOD_2_6898F6B9ED89BFDE_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_2_EB4C43CE290B1BF5(::UnityEngine::Texture* a1)
	{
		return ((::System::Int32(*)(::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7_METHOD_2_EB4C43CE290B1BF5_OFFSET))(a1);
	}

	::UnityEngine::Texture* Method_2_85A01E585728E955(::System::Int32 a1)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7_METHOD_2_85A01E585728E955_OFFSET))(this, a1);
	}

	::System::Void Method_2_623D1D7038E4F53F(::UnityEngine::Texture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7_METHOD_2_623D1D7038E4F53F_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_0DF1A4D79FD81F37(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7_METHOD_2_0DF1A4D79FD81F37_OFFSET))(a1);
	}

	::System::Boolean Method_2_DCF0ADD6F24906B3(::UnityEngine::Texture* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7_METHOD_2_DCF0ADD6F24906B3_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_2_471424FB15BC7901(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DB115CD9B835DB7_METHOD_2_471424FB15BC7901_OFFSET))(a1);
	}
};
