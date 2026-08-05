#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x149F27B0)
#define MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_GET_SHADEDMATERIALS_OFFSET UNITYSDK_OFFSET(0x149F2B60)
#define MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_METHOD_1_01237CA99C79931A_OFFSET UNITYSDK_OFFSET(0x149F2D00)
#define MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x149F3190)
#define MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x149F2BE0)
#define MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS__CCTOR_OFFSET UNITYSDK_OFFSET(0x149F2CB0)
#define MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS__CTOR_OFFSET UNITYSDK_OFFSET(0x149F2C40)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialGroup_RendererMaterials_TypeDefinitionIndex = 82994;

	class MaterialGroup_RendererMaterials : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Material*>** StaticGet_EMPTY_MATERIALS()
		{
			return (::Il2CppArray<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialGroup_RendererMaterials_TypeDefinitionIndex)->GetStaticField(0x32790);
		}
		::Il2CppArray<::UnityEngine::Material*>* _materials; // 0x10
		::UnityEngine::Renderer* renderer; // 0x18
		::System::Boolean materialsInstanced; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* _shadedMaterials; // 0x28
		::System::Boolean skipped; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS__CCTOR_OFFSET))();
		}

		::Il2CppArray<::UnityEngine::Material*>* get_materials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_GET_MATERIALS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* get_shadedMaterials()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_GET_SHADEDMATERIALS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_TOSTRING_OFFSET))(this);
		}

		::System::Void Method_1_01237CA99C79931A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_METHOD_1_01237CA99C79931A_OFFSET))(this);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_METHOD_1_128774387667156B_OFFSET))(this);
		}
	};
}
