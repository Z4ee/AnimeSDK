#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/BundleLocation.h"
#include "unitysdk/Foundation/BundleLocationIndex.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define FOUNDATION_BUNDLEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA82E70)
#define FOUNDATION_BUNDLEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0xA82CC0)
#define FOUNDATION_BUNDLEINFO_GETBUNDLELOADINFO_OFFSET UNITYSDK_OFFSET(0xA82C60)
#define FOUNDATION_BUNDLEINFO_GETBUNDLELOCATION_OFFSET UNITYSDK_OFFSET(0xA82C70)
#define FOUNDATION_BUNDLEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA82D90)
#define FOUNDATION_BUNDLEINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EF7B490)
#define FOUNDATION_BUNDLEINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EF7B5D0)
#define FOUNDATION_BUNDLEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA82E80)
#define FOUNDATION_BUNDLEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF7BD80)
#define FOUNDATION_BUNDLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA82C30)
#define FOUNDATION_BUNDLEINFO___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA82E90)
#define FOUNDATION_BUNDLEINFO___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA82F00)
#define FOUNDATION_BUNDLEINFO___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA82F70)

namespace Foundation
{
	inline static constexpr unsigned int BundleInfo_TypeDefinitionIndex = 8292;

	struct alignas(8) BundleInfo
	{
		static ::Foundation::BundleInfo* StaticGet_None()
		{
			return (::Foundation::BundleInfo*)Il2CppClass::FromTypeDefinitionIndex(BundleInfo_TypeDefinitionIndex)->GetStaticField(0x3A80);
		}
		::System::UInt64 hashName; // 0x10
		::System::UInt32 offset; // 0x18
		::System::UInt32 fileSize; // 0x1C
		::System::UInt64 fileHash; // 0x20
		::Foundation::BundleLocationIndex locationIndex; // 0x28
		::Foundation::ResourceFileType resourceFileType; // 0x2C

		::System::Void _ctor(::System::UInt64 hashName, ::System::UInt32 offset, ::Foundation::BundleLocationIndex locationIndex, ::System::UInt32 fileSize, ::System::UInt64 fileHash, ::Foundation::ResourceFileType resourceFileType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::Foundation::BundleLocationIndex, ::System::UInt32, ::System::UInt64, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINFO__CTOR_OFFSET))(this, hashName, offset, locationIndex, fileSize, fileHash, resourceFileType);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINFO__CCTOR_OFFSET))();
		}

		/*
		::Foundation::BundleLocationInfo GetBundleLoadInfo()
		{
			return ((::Foundation::BundleLocationInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINFO_GETBUNDLELOADINFO_OFFSET))(this);
		}
		*/

		::Foundation::BundleLocation GetBundleLocation()
		{
			return ((::Foundation::BundleLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINFO_GETBUNDLELOCATION_OFFSET))(this);
		}

		::System::Boolean Equals(::Foundation::BundleInfo other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::BundleInfo))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINFO_EQUALS_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::Foundation::BundleInfo left, ::Foundation::BundleInfo right)
		{
			return ((::System::Boolean(*)(::Foundation::BundleInfo, ::Foundation::BundleInfo))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINFO_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::Foundation::BundleInfo left, ::Foundation::BundleInfo right)
		{
			return ((::System::Boolean(*)(::Foundation::BundleInfo, ::Foundation::BundleInfo))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINFO_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINFO_EQUALS_1_OFFSET))(this, obj);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINFO_TOSTRING_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINFO___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINFO___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEINFO___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
