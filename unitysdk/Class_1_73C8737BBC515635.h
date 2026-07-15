#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Object; }

#define CLASS_1_73C8737BBC515635_METHOD_1_88FC2BD4BA0B1192_OFFSET UNITYSDK_OFFSET(0x18F17CC0)
#define CLASS_1_73C8737BBC515635_METHOD_1_8B50C99A62E03A3E_OFFSET UNITYSDK_OFFSET(0x18F17C60)
#define CLASS_1_73C8737BBC515635_METHOD_1_E55199F4E71DB1AE_OFFSET UNITYSDK_OFFSET(0x18F17BE0)
#define CLASS_1_73C8737BBC515635__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F17BC0)

inline static constexpr unsigned int Class_1_73C8737BBC515635_TypeDefinitionIndex = 70305;

class Class_1_73C8737BBC515635 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_73C8737BBC515635_TypeDefinitionIndex)->GetStaticField(0x6F80);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_73C8737BBC515635_TypeDefinitionIndex)->GetStaticField(0x6F81);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_73C8737BBC515635_TypeDefinitionIndex)->GetStaticField(0x6F84);
	}
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::Single Field_1_4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x400; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x20; // 0x0
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
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_73C8737BBC515635__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_E55199F4E71DB1AE(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_73C8737BBC515635_METHOD_1_E55199F4E71DB1AE_OFFSET))(a1);
	}

	static ::UnityEngine::ComputeShader* Method_1_8B50C99A62E03A3E(::System::String* a1)
	{
		return ((::UnityEngine::ComputeShader*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_73C8737BBC515635_METHOD_1_8B50C99A62E03A3E_OFFSET))(a1);
	}

	static ::System::Void Method_1_88FC2BD4BA0B1192(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_73C8737BBC515635_METHOD_1_88FC2BD4BA0B1192_OFFSET))(a1);
	}
};
