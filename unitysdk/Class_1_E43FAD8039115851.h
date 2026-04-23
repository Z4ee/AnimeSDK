#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_542BEF5BAE725811_Struct_2_D4CC03C57BD3134D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"

class Class_2_DBE826764FAA7E43;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define CLASS_1_E43FAD8039115851_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90E9F00)
#define CLASS_1_E43FAD8039115851_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x90E9CA0)
#define CLASS_1_E43FAD8039115851_METHOD_1_20D684252BFAB267_OFFSET UNITYSDK_OFFSET(0x90EA540)
#define CLASS_1_E43FAD8039115851_METHOD_1_40B99B0417038C81_OFFSET UNITYSDK_OFFSET(0x90EA040)
#define CLASS_1_E43FAD8039115851_METHOD_1_41031820D4967D24_OFFSET UNITYSDK_OFFSET(0x90EA350)
#define CLASS_1_E43FAD8039115851_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x90EA240)
#define CLASS_1_E43FAD8039115851_METHOD_1_640514F2FC7A7607_OFFSET UNITYSDK_OFFSET(0x90EA270)
#define CLASS_1_E43FAD8039115851_METHOD_1_9A34582197D203A0_OFFSET UNITYSDK_OFFSET(0x90EA230)
#define CLASS_1_E43FAD8039115851_METHOD_1_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x90E9D50)
#define CLASS_1_E43FAD8039115851_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x90EA260)
#define CLASS_1_E43FAD8039115851_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x90EA250)
#define CLASS_1_E43FAD8039115851_METHOD_1_E53B61EC61217936_OFFSET UNITYSDK_OFFSET(0x90EA710)
#define CLASS_1_E43FAD8039115851__CCTOR_OFFSET UNITYSDK_OFFSET(0x90EA790)
#define CLASS_1_E43FAD8039115851__CTOR_OFFSET UNITYSDK_OFFSET(0x90E9B40)

inline static constexpr unsigned int Class_1_E43FAD8039115851_TypeDefinitionIndex = 46138;

class Class_1_E43FAD8039115851 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Color32>** StaticGet_Field_1_15()
	{
		return (::Il2CppArray<::UnityEngine::Color32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E43FAD8039115851_TypeDefinitionIndex)->GetStaticField(0x153E0);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E43FAD8039115851_TypeDefinitionIndex)->GetStaticField(0x60A0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E43FAD8039115851_TypeDefinitionIndex)->GetStaticField(0x60A4);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E43FAD8039115851_TypeDefinitionIndex)->GetStaticField(0x60A8);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E43FAD8039115851_TypeDefinitionIndex)->GetStaticField(0x60AC);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E43FAD8039115851_TypeDefinitionIndex)->GetStaticField(0x60B0);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E43FAD8039115851_TypeDefinitionIndex)->GetStaticField(0x60B4);
	}
	::UnityEngine::Texture2D* Field_1_7; // 0x10
	::System::Collections::Generic::List_1<::Class_1_542BEF5BAE725811_Struct_2_D4CC03C57BD3134D>* Field_1_14; // 0x18
	::System::Collections::Generic::List_1<::Class_2_DBE826764FAA7E43*>* Field_1_9; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_8; // 0x28
	::System::Int32 Field_1_12; // 0x30
	::System::Int32 Field_1_5; // 0x34
	::System::Boolean Field_1_10; // 0x38
	::System::Single Field_1_11; // 0x3C
	::System::Int32 Field_1_13; // 0x40

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E43FAD8039115851__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E43FAD8039115851__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E43FAD8039115851_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_40B99B0417038C81(::UnityEngine::RenderTexture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_E43FAD8039115851_METHOD_1_40B99B0417038C81_OFFSET))(this, a1);
	}

	::UnityEngine::Texture2D* Method_1_9A34582197D203A0()
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E43FAD8039115851_METHOD_1_9A34582197D203A0_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E43FAD8039115851_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E43FAD8039115851_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E43FAD8039115851_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E43FAD8039115851_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E43FAD8039115851_METHOD_1_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Void Method_1_640514F2FC7A7607(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E43FAD8039115851_METHOD_1_640514F2FC7A7607_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_41031820D4967D24(::Class_2_DBE826764FAA7E43* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_DBE826764FAA7E43*))((::PBYTE)hIl2Cpp + CLASS_1_E43FAD8039115851_METHOD_1_41031820D4967D24_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_20D684252BFAB267(::Class_2_DBE826764FAA7E43* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_DBE826764FAA7E43*))((::PBYTE)hIl2Cpp + CLASS_1_E43FAD8039115851_METHOD_1_20D684252BFAB267_OFFSET))(this, a1);
	}

	::Class_2_DBE826764FAA7E43* Method_1_E53B61EC61217936(::System::Int32 a1)
	{
		return ((::Class_2_DBE826764FAA7E43*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E43FAD8039115851_METHOD_1_E53B61EC61217936_OFFSET))(this, a1);
	}
};
