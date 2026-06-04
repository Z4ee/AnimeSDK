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

#define CLASS_1_E43FAD8039115851_DISPOSE_OFFSET UNITYSDK_OFFSET(0x139F9860)
#define CLASS_1_E43FAD8039115851_METHOD_1_40B99B0417038C81_OFFSET UNITYSDK_OFFSET(0x139F99B0)
#define CLASS_1_E43FAD8039115851_METHOD_1_41031820D4967D24_OFFSET UNITYSDK_OFFSET(0x139F9E90)
#define CLASS_1_E43FAD8039115851_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x139F9BB0)
#define CLASS_1_E43FAD8039115851_METHOD_1_640514F2FC7A7607_OFFSET UNITYSDK_OFFSET(0x139F9BE0)
#define CLASS_1_E43FAD8039115851_METHOD_1_7E876EE9E5D4C0FD_OFFSET UNITYSDK_OFFSET(0x139F9540)
#define CLASS_1_E43FAD8039115851_METHOD_1_9A34582197D203A0_OFFSET UNITYSDK_OFFSET(0x139F9BA0)
#define CLASS_1_E43FAD8039115851_METHOD_1_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x139F9680)
#define CLASS_1_E43FAD8039115851_METHOD_1_C4297EFF013E4E78_OFFSET UNITYSDK_OFFSET(0x139FA090)
#define CLASS_1_E43FAD8039115851_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x139F9BD0)
#define CLASS_1_E43FAD8039115851_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x139F9BC0)
#define CLASS_1_E43FAD8039115851_METHOD_1_EC624B997F81DDAD_OFFSET UNITYSDK_OFFSET(0x139F9CC0)
#define CLASS_1_E43FAD8039115851__CCTOR_OFFSET UNITYSDK_OFFSET(0x139FA120)
#define CLASS_1_E43FAD8039115851__CTOR_OFFSET UNITYSDK_OFFSET(0x139F93E0)

inline static constexpr unsigned int Class_1_E43FAD8039115851_TypeDefinitionIndex = 46721;

class Class_1_E43FAD8039115851 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Color32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::UnityEngine::Color32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E43FAD8039115851_TypeDefinitionIndex)->GetStaticField(0x47560);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E43FAD8039115851_TypeDefinitionIndex)->GetStaticField(0xCFB0);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E43FAD8039115851_TypeDefinitionIndex)->GetStaticField(0xCFB4);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E43FAD8039115851_TypeDefinitionIndex)->GetStaticField(0xCFB8);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E43FAD8039115851_TypeDefinitionIndex)->GetStaticField(0xCFBC);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E43FAD8039115851_TypeDefinitionIndex)->GetStaticField(0xCFC0);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E43FAD8039115851_TypeDefinitionIndex)->GetStaticField(0xCFC4);
	}
	::System::Collections::Generic::List_1<::Class_1_542BEF5BAE725811_Struct_2_D4CC03C57BD3134D>* Field_1_7; // 0x10
	::UnityEngine::Texture2D* Field_1_8; // 0x18
	::System::Collections::Generic::List_1<::Class_2_DBE826764FAA7E43*>* Field_1_9; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_10; // 0x28
	::System::Int32 Field_1_11; // 0x30
	::System::Int32 Field_1_12; // 0x34
	::System::Int32 Field_1_13; // 0x38
	::System::Single Field_1_14; // 0x3C
	::System::Boolean Field_1_15; // 0x40

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

	::System::Void Method_1_7E876EE9E5D4C0FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E43FAD8039115851_METHOD_1_7E876EE9E5D4C0FD_OFFSET))(this);
	}

	::System::Void Method_1_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E43FAD8039115851_METHOD_1_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Void Method_1_640514F2FC7A7607(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E43FAD8039115851_METHOD_1_640514F2FC7A7607_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_EC624B997F81DDAD(::Class_2_DBE826764FAA7E43* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_DBE826764FAA7E43*))((::PBYTE)hIl2Cpp + CLASS_1_E43FAD8039115851_METHOD_1_EC624B997F81DDAD_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_41031820D4967D24(::Class_2_DBE826764FAA7E43* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_DBE826764FAA7E43*))((::PBYTE)hIl2Cpp + CLASS_1_E43FAD8039115851_METHOD_1_41031820D4967D24_OFFSET))(this, a1);
	}

	::Class_2_DBE826764FAA7E43* Method_1_C4297EFF013E4E78(::System::Int32 a1)
	{
		return ((::Class_2_DBE826764FAA7E43*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E43FAD8039115851_METHOD_1_C4297EFF013E4E78_OFFSET))(this, a1);
	}
};
