#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BlendMode.h"

class Class_1_3B8D4E8FE7E2216A_Class_1_511D36723E750451;
namespace System::Collections { class Hashtable; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_1_3B8D4E8FE7E2216A_METHOD_1_C0DBF719D15AB9AA_OFFSET UNITYSDK_OFFSET(0x164D14B0)
#define CLASS_1_3B8D4E8FE7E2216A_METHOD_1_D1C09720CA5B1F1E_OFFSET UNITYSDK_OFFSET(0x164D1640)
#define CLASS_1_3B8D4E8FE7E2216A__CCTOR_OFFSET UNITYSDK_OFFSET(0x164D1F10)

inline static constexpr unsigned int Class_1_3B8D4E8FE7E2216A_TypeDefinitionIndex = 48998;

class Class_1_3B8D4E8FE7E2216A : public ::System::Object
{
public:
	static ::System::Collections::Hashtable** StaticGet_FBGDGOIHNGC()
	{
		return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B8D4E8FE7E2216A_TypeDefinitionIndex)->GetStaticField(0x143E0);
	}
	static ::Il2CppArray<::UnityEngine::Rendering::BlendMode>** StaticGet_DHLANOMILKH()
	{
		return (::Il2CppArray<::UnityEngine::Rendering::BlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B8D4E8FE7E2216A_TypeDefinitionIndex)->GetStaticField(0x143E8);
	}
	static ::Il2CppArray<::System::Boolean>** StaticGet_EMFNLMMBGFI()
	{
		return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B8D4E8FE7E2216A_TypeDefinitionIndex)->GetStaticField(0x143F0);
	}
	static ::Il2CppArray<::UnityEngine::Rendering::BlendMode>** StaticGet_AJDNIEDBIBP()
	{
		return (::Il2CppArray<::UnityEngine::Rendering::BlendMode>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B8D4E8FE7E2216A_TypeDefinitionIndex)->GetStaticField(0x143F8);
	}
	static ::UnityEngine::MaterialPropertyBlock** StaticGet_IKLBJPKGKGP()
	{
		return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B8D4E8FE7E2216A_TypeDefinitionIndex)->GetStaticField(0x14400);
	}
	static ::System::Int32* StaticGet_HJJGGMLHFFF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B8D4E8FE7E2216A_TypeDefinitionIndex)->GetStaticField(0x4CE0);
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
