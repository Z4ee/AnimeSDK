#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseDictionaryKeyPathProvider_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define SIRENIX_SERIALIZATION_VECTOR2DICTIONARYKEYPATHPROVIDER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1C1DE0A0)
#define SIRENIX_SERIALIZATION_VECTOR2DICTIONARYKEYPATHPROVIDER_GETKEYFROMPATHSTRING_OFFSET UNITYSDK_OFFSET(0x1C1DE130)
#define SIRENIX_SERIALIZATION_VECTOR2DICTIONARYKEYPATHPROVIDER_GETPATHSTRINGFROMKEY_OFFSET UNITYSDK_OFFSET(0x1C1DE210)
#define SIRENIX_SERIALIZATION_VECTOR2DICTIONARYKEYPATHPROVIDER_GET_PROVIDERID_OFFSET UNITYSDK_OFFSET(0x1C1DE060)
#define SIRENIX_SERIALIZATION_VECTOR2DICTIONARYKEYPATHPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1DE3B0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int Vector2DictionaryKeyPathProvider_TypeDefinitionIndex = 7437;

	class Vector2DictionaryKeyPathProvider : public ::Sirenix::Serialization::BaseDictionaryKeyPathProvider_1<::UnityEngine::Vector2>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2DICTIONARYKEYPATHPROVIDER__CTOR_OFFSET))(this);
		}

		::System::String* get_ProviderID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2DICTIONARYKEYPATHPROVIDER_GET_PROVIDERID_OFFSET))(this);
		}

		::System::Int32 Compare(::UnityEngine::Vector2 x, ::UnityEngine::Vector2 y)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2DICTIONARYKEYPATHPROVIDER_COMPARE_OFFSET))(this, x, y);
		}

		::UnityEngine::Vector2 GetKeyFromPathString(::System::String* pathStr)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2DICTIONARYKEYPATHPROVIDER_GETKEYFROMPATHSTRING_OFFSET))(this, pathStr);
		}

		::System::String* GetPathStringFromKey(::UnityEngine::Vector2 key)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2DICTIONARYKEYPATHPROVIDER_GETPATHSTRINGFROMKEY_OFFSET))(this, key);
		}
	};
}
