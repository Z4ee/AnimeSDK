#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_R_GETBYTE_OFFSET UNITYSDK_OFFSET(0x1ED8F910)
#define FOUNDATION_R_GETJSON_OFFSET UNITYSDK_OFFSET(0x1ED8F750)
#define FOUNDATION_R_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1ED8F3D0)
#define FOUNDATION_R_GETPNGIMAGE_OFFSET UNITYSDK_OFFSET(0x1ED8F590)
#define FOUNDATION_R_GETPREFAB_OFFSET UNITYSDK_OFFSET(0x1ED8EE90)
#define FOUNDATION_R_GETSCENE_OFFSET UNITYSDK_OFFSET(0x1ED8F210)
#define FOUNDATION_R_GETSCRIPTASSET_OFFSET UNITYSDK_OFFSET(0x1ED8F050)
#define FOUNDATION_R__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED8FAE0)
#define FOUNDATION_R__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED8FAD0)

namespace Foundation
{
	inline static constexpr unsigned int R_TypeDefinitionIndex = 8281;

	class R : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_PNG_PREFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6B30);
		}
		static ::System::String** StaticGet_PREFAB_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6B38);
		}
		static ::System::String** StaticGet_BYTE_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6B40);
		}
		static ::System::String** StaticGet_ASSET_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6B48);
		}
		static ::System::String** StaticGet_PREFAB_PREFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6B50);
		}
		static ::System::String** StaticGet_JSON_PREFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6B58);
		}
		static ::System::String** StaticGet_SCENE_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6B60);
		}
		static ::System::String** StaticGet_BYTE_PREFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6B68);
		}
		static ::System::String** StaticGet_SCENE_PREFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6B70);
		}
		static ::System::String** StaticGet_ASSET_PREFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6B78);
		}
		static ::System::String** StaticGet_PNG_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6B80);
		}
		static ::System::String** StaticGet_MAT_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6B88);
		}
		static ::System::String** StaticGet_MAT_PREFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6B90);
		}
		static ::System::String** StaticGet_JSON_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6B98);
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
