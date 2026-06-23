#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define FOUNDATION_ASSETLOADCACHEKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9EB070)
#define FOUNDATION_ASSETLOADCACHEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x9EAF90)
#define FOUNDATION_ASSETLOADCACHEKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9EAF80)
#define FOUNDATION_ASSETLOADCACHEKEY_GET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x3E3F20)
#define FOUNDATION_ASSETLOADCACHEKEY_GET_URL_OFFSET UNITYSDK_OFFSET(0x2ADAB0)
#define FOUNDATION_ASSETLOADCACHEKEY_ISNULLOREMPTY_OFFSET UNITYSDK_OFFSET(0x9EB080)
#define FOUNDATION_ASSETLOADCACHEKEY_ISVALID_OFFSET UNITYSDK_OFFSET(0x9EB160)
#define FOUNDATION_ASSETLOADCACHEKEY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D2E46E0)
#define FOUNDATION_ASSETLOADCACHEKEY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D2E47E0)
#define FOUNDATION_ASSETLOADCACHEKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9EB170)
#define FOUNDATION_ASSETLOADCACHEKEY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2E4AF0)
#define FOUNDATION_ASSETLOADCACHEKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x3E3F10)
#define FOUNDATION_ASSETLOADCACHEKEY___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9EB180)
#define FOUNDATION_ASSETLOADCACHEKEY___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9EB1F0)
#define FOUNDATION_ASSETLOADCACHEKEY___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9EB260)

namespace Foundation
{
	inline static constexpr unsigned int AssetLoadCacheKey_TypeDefinitionIndex = 7968;

	struct alignas(8) AssetLoadCacheKey
	{
		static ::Foundation::AssetLoadCacheKey* StaticGet_Empty()
		{
			return (::Foundation::AssetLoadCacheKey*)Il2CppClass::FromTypeDefinitionIndex(AssetLoadCacheKey_TypeDefinitionIndex)->GetStaticField(0x6840);
		}
		::Foundation::AssetPath m_AssetPath; // 0x10
		::System::Type* m_DesiredType; // 0x20

		::System::Void _ctor(::Foundation::AssetPath assetPath, ::System::Type* desiredType)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY__CTOR_OFFSET))(this, assetPath, desiredType);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY__CCTOR_OFFSET))();
		}

		::Foundation::AssetPath get_Url()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY_GET_URL_OFFSET))(this);
		}

		::System::Type* get_AssetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY_GET_ASSETTYPE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::Foundation::AssetLoadCacheKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetLoadCacheKey))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY_EQUALS_1_OFFSET))(this, obj);
		}

		static ::System::Boolean op_Equality(::Foundation::AssetLoadCacheKey left, ::Foundation::AssetLoadCacheKey right)
		{
			return ((::System::Boolean(*)(::Foundation::AssetLoadCacheKey, ::Foundation::AssetLoadCacheKey))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::Foundation::AssetLoadCacheKey left, ::Foundation::AssetLoadCacheKey right)
		{
			return ((::System::Boolean(*)(::Foundation::AssetLoadCacheKey, ::Foundation::AssetLoadCacheKey))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean IsNullOrEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY_ISNULLOREMPTY_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY_ISVALID_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
