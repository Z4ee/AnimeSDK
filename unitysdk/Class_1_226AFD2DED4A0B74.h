#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Object; }

#define CLASS_1_226AFD2DED4A0B74_METHOD_1_5983C37099894977_OFFSET UNITYSDK_OFFSET(0x8DCC5C0)
#define CLASS_1_226AFD2DED4A0B74_METHOD_1_83C534D0141A7A9B_OFFSET UNITYSDK_OFFSET(0x8DCC620)
#define CLASS_1_226AFD2DED4A0B74_METHOD_1_E55199F4E71DB1AE_OFFSET UNITYSDK_OFFSET(0x8DCC540)
#define CLASS_1_226AFD2DED4A0B74__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DCC520)

inline static constexpr unsigned int Class_1_226AFD2DED4A0B74_TypeDefinitionIndex = 60425;

class Class_1_226AFD2DED4A0B74 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_226AFD2DED4A0B74_TypeDefinitionIndex)->GetStaticField(0x6B00);
	}
	static ::System::Boolean* StaticGet_Field_1_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_226AFD2DED4A0B74_TypeDefinitionIndex)->GetStaticField(0x6B04);
	}
	static ::System::Boolean* StaticGet_Field_1_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_226AFD2DED4A0B74_TypeDefinitionIndex)->GetStaticField(0x6B05);
	}
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x400; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x20; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::String* Field_1_10; // 0x0
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	// static const ::System::String* Field_1_13; // 0x0
	// static const ::System::String* Field_1_14; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_226AFD2DED4A0B74__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_E55199F4E71DB1AE(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_226AFD2DED4A0B74_METHOD_1_E55199F4E71DB1AE_OFFSET))(a1);
	}

	static ::UnityEngine::ComputeShader* Method_1_5983C37099894977(::System::String* a1)
	{
		return ((::UnityEngine::ComputeShader*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_226AFD2DED4A0B74_METHOD_1_5983C37099894977_OFFSET))(a1);
	}

	static ::System::Void Method_1_83C534D0141A7A9B(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_226AFD2DED4A0B74_METHOD_1_83C534D0141A7A9B_OFFSET))(a1);
	}
};
