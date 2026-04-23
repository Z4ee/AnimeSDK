#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_542BEF5BAE725811_Struct_2_D4CC03C57BD3134D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"

class Class_2_DBE826764FAA7E43;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_542BEF5BAE725811_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91C6220)
#define CLASS_1_542BEF5BAE725811_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x91C6A50)
#define CLASS_1_542BEF5BAE725811_METHOD_1_1A4E0FFCF3F7E082_OFFSET UNITYSDK_OFFSET(0x91C6F20)
#define CLASS_1_542BEF5BAE725811_METHOD_1_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x91C7220)
#define CLASS_1_542BEF5BAE725811_METHOD_1_230B95E4F4DD7BDC_OFFSET UNITYSDK_OFFSET(0x91C7A50)
#define CLASS_1_542BEF5BAE725811_METHOD_1_27A7A836B45390B2_OFFSET UNITYSDK_OFFSET(0x91C64E0)
#define CLASS_1_542BEF5BAE725811_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x91C64F0)
#define CLASS_1_542BEF5BAE725811_METHOD_1_7B07DACE608A0EE3_OFFSET UNITYSDK_OFFSET(0x91C6B00)
#define CLASS_1_542BEF5BAE725811_METHOD_1_7C5833C04DA1B77C_OFFSET UNITYSDK_OFFSET(0x91C70A0)
#define CLASS_1_542BEF5BAE725811_METHOD_1_9A34582197D203A0_OFFSET UNITYSDK_OFFSET(0x91C64D0)
#define CLASS_1_542BEF5BAE725811_METHOD_1_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x91C6700)
#define CLASS_1_542BEF5BAE725811_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x91C71C0)
#define CLASS_1_542BEF5BAE725811_METHOD_1_FEB8BDECEB197E6A_OFFSET UNITYSDK_OFFSET(0x91C6D40)
#define CLASS_1_542BEF5BAE725811__CCTOR_OFFSET UNITYSDK_OFFSET(0x91C7E60)
#define CLASS_1_542BEF5BAE725811__CTOR_OFFSET UNITYSDK_OFFSET(0x91C6500)

inline static constexpr unsigned int Class_1_542BEF5BAE725811_TypeDefinitionIndex = 46139;

class Class_1_542BEF5BAE725811 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_542BEF5BAE725811_Struct_2_D4CC03C57BD3134D>** StaticGet_Field_1_14()
	{
		return (::System::Collections::Generic::List_1<::Class_1_542BEF5BAE725811_Struct_2_D4CC03C57BD3134D>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_542BEF5BAE725811_TypeDefinitionIndex)->GetStaticField(0x67BF0);
	}
	static ::Il2CppArray<::UnityEngine::Color32>** StaticGet_Field_1_15()
	{
		return (::Il2CppArray<::UnityEngine::Color32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_542BEF5BAE725811_TypeDefinitionIndex)->GetStaticField(0x67BF8);
	}
	static ::System::Int32* StaticGet_Field_1_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_542BEF5BAE725811_TypeDefinitionIndex)->GetStaticField(0x11440);
	}
	static ::System::Int32* StaticGet_Field_1_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_542BEF5BAE725811_TypeDefinitionIndex)->GetStaticField(0x11444);
	}
	static ::System::Int32* StaticGet_Field_1_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_542BEF5BAE725811_TypeDefinitionIndex)->GetStaticField(0x11448);
	}
	static ::System::Int32* StaticGet_Field_1_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_542BEF5BAE725811_TypeDefinitionIndex)->GetStaticField(0x1144C);
	}
	static ::System::Int32* StaticGet_Field_1_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_542BEF5BAE725811_TypeDefinitionIndex)->GetStaticField(0x11450);
	}
	static ::System::Int32* StaticGet_Field_1_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_542BEF5BAE725811_TypeDefinitionIndex)->GetStaticField(0x11454);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_542BEF5BAE725811_TypeDefinitionIndex)->GetStaticField(0x11458);
	}
	static ::System::Int32* StaticGet_Field_1_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_542BEF5BAE725811_TypeDefinitionIndex)->GetStaticField(0x1145C);
	}
	static ::System::Int32* StaticGet_Field_1_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_542BEF5BAE725811_TypeDefinitionIndex)->GetStaticField(0x11460);
	}
	::UnityEngine::ComputeBuffer* Field_1_11; // 0x10
	::UnityEngine::RenderTexture* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x20
	::System::Collections::Generic::List_1<::Class_1_542BEF5BAE725811_Struct_2_D4CC03C57BD3134D>* Field_1_13; // 0x28
	::UnityEngine::Texture2D* Field_1_2; // 0x30
	::UnityEngine::RenderTexture* Field_1_4; // 0x38
	::System::Collections::Generic::List_1<::Class_2_DBE826764FAA7E43*>* Field_1_6; // 0x40
	::System::Int32 Field_1_9; // 0x48
	::System::Single Field_1_8; // 0x4C
	::System::Boolean Field_1_7; // 0x50
	::System::Int32 Field_1_10; // 0x54
	::System::Int32 Field_1_0; // 0x58

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Texture2D* Method_1_9A34582197D203A0()
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_9A34582197D203A0_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_27A7A836B45390B2()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_27A7A836B45390B2_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_7B07DACE608A0EE3()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_7B07DACE608A0EE3_OFFSET))(this);
	}

	::System::Void Method_1_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_FEB8BDECEB197E6A(::Class_2_DBE826764FAA7E43* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DBE826764FAA7E43*))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_FEB8BDECEB197E6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A4E0FFCF3F7E082(::Class_2_DBE826764FAA7E43* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DBE826764FAA7E43*))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_1A4E0FFCF3F7E082_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C5833C04DA1B77C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_7C5833C04DA1B77C_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_2157CED3CDDF8996_OFFSET))(this);
	}

	::System::Void Method_1_230B95E4F4DD7BDC(::System::Collections::Generic::List_1<::Class_1_542BEF5BAE725811_Struct_2_D4CC03C57BD3134D>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_542BEF5BAE725811_Struct_2_D4CC03C57BD3134D>*))((::PBYTE)hIl2Cpp + CLASS_1_542BEF5BAE725811_METHOD_1_230B95E4F4DD7BDC_OFFSET))(this, a1);
	}
};
