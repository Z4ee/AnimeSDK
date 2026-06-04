#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BlendMode.h"

class Class_1_BFA37003BB609519_Class_1_511D36723E750451;
namespace System::Collections { class Hashtable; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_1_BFA37003BB609519_METHOD_1_3564EA5FCF9352F0_OFFSET UNITYSDK_OFFSET(0x141E6150)
#define CLASS_1_BFA37003BB609519_METHOD_1_C0DBF719D15AB9AA_OFFSET UNITYSDK_OFFSET(0x141E5FC0)
#define CLASS_1_BFA37003BB609519__CCTOR_OFFSET UNITYSDK_OFFSET(0x141E6940)

inline static constexpr unsigned int Class_1_BFA37003BB609519_TypeDefinitionIndex = 46193;

class Class_1_BFA37003BB609519 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Rendering::BlendMode>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::UnityEngine::Rendering::BlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFA37003BB609519_TypeDefinitionIndex)->GetStaticField(0x138D0);
	}
	static ::Il2CppArray<::System::Boolean>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFA37003BB609519_TypeDefinitionIndex)->GetStaticField(0x138D8);
	}
	static ::System::Collections::Hashtable** StaticGet_Field_1_2()
	{
		return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFA37003BB609519_TypeDefinitionIndex)->GetStaticField(0x138E0);
	}
	static ::UnityEngine::MaterialPropertyBlock** StaticGet_Field_1_3()
	{
		return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFA37003BB609519_TypeDefinitionIndex)->GetStaticField(0x138E8);
	}
	static ::Il2CppArray<::UnityEngine::Rendering::BlendMode>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::UnityEngine::Rendering::BlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFA37003BB609519_TypeDefinitionIndex)->GetStaticField(0x138F0);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFA37003BB609519_TypeDefinitionIndex)->GetStaticField(0x7AE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BFA37003BB609519__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Material* Method_1_C0DBF719D15AB9AA(::System::Boolean a1)
	{
		return ((::UnityEngine::Material*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BFA37003BB609519_METHOD_1_C0DBF719D15AB9AA_OFFSET))(a1);
	}

	static ::UnityEngine::Material* Method_1_3564EA5FCF9352F0(::System::UInt32 a1, ::Class_1_BFA37003BB609519_Class_1_511D36723E750451* a2)
	{
		return ((::UnityEngine::Material*(*)(::System::UInt32, ::Class_1_BFA37003BB609519_Class_1_511D36723E750451*))((::PBYTE)hIl2Cpp + CLASS_1_BFA37003BB609519_METHOD_1_3564EA5FCF9352F0_OFFSET))(a1, a2);
	}
};
