#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BlendMode.h"

class Class_1_3B8D4E8FE7E2216A_Class_1_511D36723E750451;
namespace System::Collections { class Hashtable; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_1_3B8D4E8FE7E2216A_METHOD_1_C0DBF719D15AB9AA_OFFSET UNITYSDK_OFFSET(0x179D5A80)
#define CLASS_1_3B8D4E8FE7E2216A_METHOD_1_D1C09720CA5B1F1E_OFFSET UNITYSDK_OFFSET(0x179D5C10)
#define CLASS_1_3B8D4E8FE7E2216A__CCTOR_OFFSET UNITYSDK_OFFSET(0x179D64E0)

inline static constexpr unsigned int Class_1_3B8D4E8FE7E2216A_TypeDefinitionIndex = 47158;

class Class_1_3B8D4E8FE7E2216A : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Rendering::BlendMode>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::UnityEngine::Rendering::BlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B8D4E8FE7E2216A_TypeDefinitionIndex)->GetStaticField(0xD2C0);
	}
	static ::System::Collections::Hashtable** StaticGet_Field_1_1()
	{
		return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B8D4E8FE7E2216A_TypeDefinitionIndex)->GetStaticField(0xD2C8);
	}
	static ::UnityEngine::MaterialPropertyBlock** StaticGet_Field_1_2()
	{
		return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B8D4E8FE7E2216A_TypeDefinitionIndex)->GetStaticField(0xD2D0);
	}
	static ::Il2CppArray<::UnityEngine::Rendering::BlendMode>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::UnityEngine::Rendering::BlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B8D4E8FE7E2216A_TypeDefinitionIndex)->GetStaticField(0xD2D8);
	}
	static ::Il2CppArray<::System::Boolean>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B8D4E8FE7E2216A_TypeDefinitionIndex)->GetStaticField(0xD2E0);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B8D4E8FE7E2216A_TypeDefinitionIndex)->GetStaticField(0x4AC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3B8D4E8FE7E2216A__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Material* Method_1_C0DBF719D15AB9AA(::System::Boolean a1)
	{
		return ((::UnityEngine::Material*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3B8D4E8FE7E2216A_METHOD_1_C0DBF719D15AB9AA_OFFSET))(a1);
	}

	static ::UnityEngine::Material* Method_1_D1C09720CA5B1F1E(::System::UInt32 a1, ::Class_1_3B8D4E8FE7E2216A_Class_1_511D36723E750451* a2)
	{
		return ((::UnityEngine::Material*(*)(::System::UInt32, ::Class_1_3B8D4E8FE7E2216A_Class_1_511D36723E750451*))((::PBYTE)hIl2Cpp + CLASS_1_3B8D4E8FE7E2216A_METHOD_1_D1C09720CA5B1F1E_OFFSET))(a1, a2);
	}
};
