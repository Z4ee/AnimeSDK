#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERMATERIALPROPERTYCACHEHELPER_ALLNONTEXTUREPROPERTYVALUESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x1F798220)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERMATERIALPROPERTYCACHEHELPER_CACHEMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x1F798490)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERMATERIALPROPERTYCACHEHELPER_GETVALUEIFALLSOURCEARETHESAMEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1F798530)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERMATERIALPROPERTYCACHEHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F798720)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderMaterialPropertyCacheHelper_TypeDefinitionIndex = 94515;

	class TextureBlenderMaterialPropertyCacheHelper : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair, ::System::Object*>* nonTexturePropertyValuesForSourceMaterials; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERMATERIALPROPERTYCACHEHELPER__CTOR_OFFSET))(this);
		}

		::System::Boolean AllNonTexturePropertyValuesAreEqual(::System::String* prop)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERMATERIALPROPERTYCACHEHELPER_ALLNONTEXTUREPROPERTYVALUESAREEQUAL_OFFSET))(this, prop);
		}

		::System::Void CacheMaterialProperty(::UnityEngine::Material* m, ::System::String* property, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERMATERIALPROPERTYCACHEHELPER_CACHEMATERIALPROPERTY_OFFSET))(this, m, property, value);
		}

		::System::Object* GetValueIfAllSourceAreTheSameOrDefault(::System::String* property, ::System::Object* defaultValue)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERMATERIALPROPERTYCACHEHELPER_GETVALUEIFALLSOURCEARETHESAMEORDEFAULT_OFFSET))(this, property, defaultValue);
		}
	};
}
