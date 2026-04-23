#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_747CFCC889B15E2E_METHOD_1_3A3952C8B109D81F_OFFSET UNITYSDK_OFFSET(0x12A01870)
#define CLASS_1_747CFCC889B15E2E_METHOD_1_ADA0D21D8E7E8EC1_OFFSET UNITYSDK_OFFSET(0x12A019E0)
#define CLASS_1_747CFCC889B15E2E__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A01C20)
#define CLASS_1_747CFCC889B15E2E__CTOR_OFFSET UNITYSDK_OFFSET(0x12A01C10)

inline static constexpr unsigned int Class_1_747CFCC889B15E2E_TypeDefinitionIndex = 64369;

class Class_1_747CFCC889B15E2E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Material*>*>*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Material*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_747CFCC889B15E2E_TypeDefinitionIndex)->GetStaticField(0x8840);
	}
	static ::UnityEngine::MaterialPropertyBlock** StaticGet_Field_1_1()
	{
		return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(Class_1_747CFCC889B15E2E_TypeDefinitionIndex)->GetStaticField(0x8848);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_747CFCC889B15E2E_TypeDefinitionIndex)->GetStaticField(0x8850);
	}
	// static const ::System::Int32 Field_1_3 = 0x64; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_747CFCC889B15E2E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_747CFCC889B15E2E__CCTOR_OFFSET))();
	}

	static ::Il2CppArray<::UnityEngine::Material*>* Method_1_3A3952C8B109D81F(::System::Int32 a1)
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_747CFCC889B15E2E_METHOD_1_3A3952C8B109D81F_OFFSET))(a1);
	}

	static ::System::Void Method_1_ADA0D21D8E7E8EC1(::Il2CppArray<::UnityEngine::Material*>* a1)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_1_747CFCC889B15E2E_METHOD_1_ADA0D21D8E7E8EC1_OFFSET))(a1);
	}
};
