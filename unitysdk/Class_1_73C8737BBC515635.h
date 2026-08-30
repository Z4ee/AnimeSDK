#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Object; }

#define CLASS_1_73C8737BBC515635_METHOD_1_88FC2BD4BA0B1192_OFFSET UNITYSDK_OFFSET(0xB910470)
#define CLASS_1_73C8737BBC515635_METHOD_1_8B50C99A62E03A3E_OFFSET UNITYSDK_OFFSET(0xB910410)
#define CLASS_1_73C8737BBC515635_METHOD_1_E55199F4E71DB1AE_OFFSET UNITYSDK_OFFSET(0xB910390)
#define CLASS_1_73C8737BBC515635__CCTOR_OFFSET UNITYSDK_OFFSET(0xB910370)

inline static constexpr unsigned int Class_1_73C8737BBC515635_TypeDefinitionIndex = 73606;

class Class_1_73C8737BBC515635 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_LIPHEJCBPBD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_73C8737BBC515635_TypeDefinitionIndex)->GetStaticField(0xA770);
	}
	static ::System::Boolean* StaticGet_DFKKLPMLNGH()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_73C8737BBC515635_TypeDefinitionIndex)->GetStaticField(0xA774);
	}
	static ::System::Boolean* StaticGet_GKNCPKCLMPJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_73C8737BBC515635_TypeDefinitionIndex)->GetStaticField(0xA775);
	}
	// static const ::System::Single HEFNCMFOKLG; // 0x0
	// static const ::System::Single ABCJMLEBDMF; // 0x0
	// static const ::System::Int32 DIELFCLPFIM = 0x400; // 0x0
	// static const ::System::Int32 GOHMKFABOFC = 0x20; // 0x0
	// static const ::System::String* JECKIIMJHCM; // 0x0
	// static const ::System::String* ILMPMHJHELJ; // 0x0
	// static const ::System::String* DAPLHPKANIG; // 0x0
	// static const ::System::String* LFEGPKAFEBJ; // 0x0
	// static const ::System::String* PDGLBLKPEOM; // 0x0
	// static const ::System::String* INPAEJJLKNL; // 0x0
	// static const ::System::String* GDGMKFHNCHH; // 0x0
	// static const ::System::String* AAMLBKACGNJ; // 0x0

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
