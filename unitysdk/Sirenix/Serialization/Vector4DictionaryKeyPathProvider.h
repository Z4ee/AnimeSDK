#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseDictionaryKeyPathProvider_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }

#define SIRENIX_SERIALIZATION_VECTOR4DICTIONARYKEYPATHPROVIDER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1B8A2850)
#define SIRENIX_SERIALIZATION_VECTOR4DICTIONARYKEYPATHPROVIDER_GETKEYFROMPATHSTRING_OFFSET UNITYSDK_OFFSET(0x1B8A29A0)
#define SIRENIX_SERIALIZATION_VECTOR4DICTIONARYKEYPATHPROVIDER_GETPATHSTRINGFROMKEY_OFFSET UNITYSDK_OFFSET(0x1B8A2B90)
#define SIRENIX_SERIALIZATION_VECTOR4DICTIONARYKEYPATHPROVIDER_GET_PROVIDERID_OFFSET UNITYSDK_OFFSET(0x1B8A2810)
#define SIRENIX_SERIALIZATION_VECTOR4DICTIONARYKEYPATHPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A2E00)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int Vector4DictionaryKeyPathProvider_TypeDefinitionIndex = 7439;

	class Vector4DictionaryKeyPathProvider : public ::Sirenix::Serialization::BaseDictionaryKeyPathProvider_1<::UnityEngine::Vector4>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR4DICTIONARYKEYPATHPROVIDER__CTOR_OFFSET))(this);
		}

		::System::String* get_ProviderID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR4DICTIONARYKEYPATHPROVIDER_GET_PROVIDERID_OFFSET))(this);
		}

		::System::Int32 Compare(::UnityEngine::Vector4 x, ::UnityEngine::Vector4 y)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR4DICTIONARYKEYPATHPROVIDER_COMPARE_OFFSET))(this, x, y);
		}

		::UnityEngine::Vector4 GetKeyFromPathString(::System::String* pathStr)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR4DICTIONARYKEYPATHPROVIDER_GETKEYFROMPATHSTRING_OFFSET))(this, pathStr);
		}

		::System::String* GetPathStringFromKey(::UnityEngine::Vector4 key)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR4DICTIONARYKEYPATHPROVIDER_GETPATHSTRINGFROMKEY_OFFSET))(this, key);
		}
	};
}
