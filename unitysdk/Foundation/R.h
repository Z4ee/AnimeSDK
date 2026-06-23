#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_R_GETBYTE_OFFSET UNITYSDK_OFFSET(0x1D8852C0)
#define FOUNDATION_R_GETJSON_OFFSET UNITYSDK_OFFSET(0x1D885100)
#define FOUNDATION_R_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D884D80)
#define FOUNDATION_R_GETPNGIMAGE_OFFSET UNITYSDK_OFFSET(0x1D884F40)
#define FOUNDATION_R_GETPREFAB_OFFSET UNITYSDK_OFFSET(0x1D884840)
#define FOUNDATION_R_GETSCENE_OFFSET UNITYSDK_OFFSET(0x1D884BC0)
#define FOUNDATION_R_GETSCRIPTASSET_OFFSET UNITYSDK_OFFSET(0x1D884A00)
#define FOUNDATION_R__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D885490)
#define FOUNDATION_R__CTOR_OFFSET UNITYSDK_OFFSET(0x1D885480)

namespace Foundation
{
	inline static constexpr unsigned int R_TypeDefinitionIndex = 8086;

	class R : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_PREFAB_PREFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6BD0);
		}
		static ::System::String** StaticGet_JSON_PREFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6BD8);
		}
		static ::System::String** StaticGet_ASSET_PREFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6BE0);
		}
		static ::System::String** StaticGet_JSON_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6BE8);
		}
		static ::System::String** StaticGet_PREFAB_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6BF0);
		}
		static ::System::String** StaticGet_BYTE_PREFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6BF8);
		}
		static ::System::String** StaticGet_ASSET_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6C00);
		}
		static ::System::String** StaticGet_SCENE_PREFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6C08);
		}
		static ::System::String** StaticGet_SCENE_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6C10);
		}
		static ::System::String** StaticGet_BYTE_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6C18);
		}
		static ::System::String** StaticGet_MAT_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6C20);
		}
		static ::System::String** StaticGet_PNG_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6C28);
		}
		static ::System::String** StaticGet_PNG_PREFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6C30);
		}
		static ::System::String** StaticGet_MAT_PREFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6C38);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_R__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_R__CCTOR_OFFSET))();
		}

		static ::System::String* GetPrefab(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_R_GETPREFAB_OFFSET))(name);
		}

		static ::System::String* GetScriptAsset(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_R_GETSCRIPTASSET_OFFSET))(name);
		}

		static ::System::String* GetScene(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_R_GETSCENE_OFFSET))(name);
		}

		static ::System::String* GetMaterial(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_R_GETMATERIAL_OFFSET))(name);
		}

		static ::System::String* GetPngImage(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_R_GETPNGIMAGE_OFFSET))(name);
		}

		static ::System::String* GetJson(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_R_GETJSON_OFFSET))(name);
		}

		static ::System::String* GetByte(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_R_GETBYTE_OFFSET))(name);
		}
	};
}
