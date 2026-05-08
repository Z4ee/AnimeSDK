#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/BundleLocation.h"
#include "unitysdk/Foundation/BundleLocationIndex.h"
#include "unitysdk/Foundation/BundleType.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOUNDATION_BUNDLELOCATIONINFO_FINDBLOCKLOCATIONCACHE_OFFSET UNITYSDK_OFFSET(0x19FFABE0)
#define FOUNDATION_BUNDLELOCATIONINFO_FINDBLOCKLOCATIONINDEX_OFFSET UNITYSDK_OFFSET(0x19FFAD70)
#define FOUNDATION_BUNDLELOCATIONINFO_GETFILEEXT_OFFSET UNITYSDK_OFFSET(0x8B6160)
#define FOUNDATION_BUNDLELOCATIONINFO_GETFOLDERPATH_OFFSET UNITYSDK_OFFSET(0x8B6060)
#define FOUNDATION_BUNDLELOCATIONINFO_GETRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x8B60D0)
#define FOUNDATION_BUNDLELOCATIONINFO_GETROOTFOLDER_OFFSET UNITYSDK_OFFSET(0x8B6070)
#define FOUNDATION_BUNDLELOCATIONINFO_GET_NONE_OFFSET UNITYSDK_OFFSET(0x19FFA6E0)
#define FOUNDATION_BUNDLELOCATIONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8B61E0)
#define FOUNDATION_BUNDLELOCATIONINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FFB190)
#define FOUNDATION_BUNDLELOCATIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8B6050)
#define FOUNDATION_BUNDLELOCATIONINFO___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8B61F0)

namespace Foundation
{
	inline static constexpr unsigned int BundleLocationInfo_TypeDefinitionIndex = 7868;

	struct alignas(4) BundleLocationInfo
	{
		static ::Il2CppArray<::System::ValueTuple_2<::Foundation::BundleLocation, ::Foundation::BundleType>>** StaticGet_BundleLocations()
		{
			return (::Il2CppArray<::System::ValueTuple_2<::Foundation::BundleLocation, ::Foundation::BundleType>>**)Il2CppClass::FromTypeDefinitionIndex(BundleLocationInfo_TypeDefinitionIndex)->GetStaticField(0x6CA0);
		}
		::Foundation::BundleLocation location; // 0x10
		::Foundation::BundleType type; // 0x11
		::Foundation::ResourceFileType resourceFileType; // 0x14

		::System::Void _ctor(::Foundation::BundleLocation location, ::Foundation::BundleType type, ::Foundation::ResourceFileType resourceFileType)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::BundleLocation, ::Foundation::BundleType, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLELOCATIONINFO__CTOR_OFFSET))(this, location, type, resourceFileType);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLELOCATIONINFO__CCTOR_OFFSET))();
		}

		static ::Foundation::BundleLocationInfo get_None()
		{
			return ((::Foundation::BundleLocationInfo(*)())((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLELOCATIONINFO_GET_NONE_OFFSET))();
		}

		::System::String* GetFolderPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLELOCATIONINFO_GETFOLDERPATH_OFFSET))(this);
		}

		::System::String* GetRootFolder()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLELOCATIONINFO_GETROOTFOLDER_OFFSET))(this);
		}

		::System::String* GetRelativePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLELOCATIONINFO_GETRELATIVEPATH_OFFSET))(this);
		}

		::System::String* GetFileExt()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLELOCATIONINFO_GETFILEEXT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLELOCATIONINFO_TOSTRING_OFFSET))(this);
		}

		static ::Foundation::BundleLocationIndex FindBlockLocationCache(::Foundation::ResourceFileType resourceFileType, ::System::UInt64 hashName, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Foundation::BundleLocationIndex>*& cache, ::System::Boolean skipPersistent)
		{
			return ((::Foundation::BundleLocationIndex(*)(::Foundation::ResourceFileType, ::System::UInt64, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Foundation::BundleLocationIndex>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLELOCATIONINFO_FINDBLOCKLOCATIONCACHE_OFFSET))(resourceFileType, hashName, cache, skipPersistent);
		}

		static ::Foundation::BundleLocationIndex FindBlockLocationIndex(::Foundation::ResourceFileType resourceFileType, ::System::UInt64 blockHashName, ::System::Boolean skipPersistent)
		{
			return ((::Foundation::BundleLocationIndex(*)(::Foundation::ResourceFileType, ::System::UInt64, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLELOCATIONINFO_FINDBLOCKLOCATIONINDEX_OFFSET))(resourceFileType, blockHashName, skipPersistent);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLELOCATIONINFO___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
