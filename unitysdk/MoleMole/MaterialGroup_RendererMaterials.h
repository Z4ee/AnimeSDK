#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x126240E0)
#define MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_GET_SHADEDMATERIALS_OFFSET UNITYSDK_OFFSET(0x12624490)
#define MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x12624630)
#define MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_METHOD_1_FFBC3E5986CAC663_OFFSET UNITYSDK_OFFSET(0x12624670)
#define MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12624510)
#define MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS__CCTOR_OFFSET UNITYSDK_OFFSET(0x126245E0)
#define MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS__CTOR_OFFSET UNITYSDK_OFFSET(0x12624570)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialGroup_RendererMaterials_TypeDefinitionIndex = 69117;

	class MaterialGroup_RendererMaterials : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Material*>** StaticGet_EMPTY_MATERIALS()
		{
			return (::Il2CppArray<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialGroup_RendererMaterials_TypeDefinitionIndex)->GetStaticField(0x30800);
		}
		::Il2CppArray<::UnityEngine::Material*>* _materials; // 0x10
		::UnityEngine::Renderer* renderer; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* _shadedMaterials; // 0x20
		::System::Boolean skipped; // 0x28

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

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_METHOD_1_128774387667156B_OFFSET))(this);
		}

		::System::Void Method_1_FFBC3E5986CAC663()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_RENDERERMATERIALS_METHOD_1_FFBC3E5986CAC663_OFFSET))(this);
		}
	};
}
