#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_MATERIALGROUPASSET_RENDERERNAMEMATERIALS__CCTOR_OFFSET UNITYSDK_OFFSET(0xD67BA30)
#define RPG_CLIENT_MATERIALGROUPASSET_RENDERERNAMEMATERIALS__CTOR_OFFSET UNITYSDK_OFFSET(0xD67B9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialGroupAsset_RendererNameMaterials_TypeDefinitionIndex = 69811;

	class MaterialGroupAsset_RendererNameMaterials : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Material*>** StaticGet_EMPTY_MATERIALS()
		{
			return (::Il2CppArray<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialGroupAsset_RendererNameMaterials_TypeDefinitionIndex)->GetStaticField(0x66850);
		}
		::System::String* rendererName; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* materials; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALGROUPASSET_RENDERERNAMEMATERIALS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALGROUPASSET_RENDERERNAMEMATERIALS__CCTOR_OFFSET))();
		}
	};
}
