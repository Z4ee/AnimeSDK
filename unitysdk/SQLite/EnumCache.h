#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class EnumCacheInfo; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SQLITE_ENUMCACHE_GETINFO_OFFSET UNITYSDK_OFFSET(0x1E9FA670)
#define SQLITE_ENUMCACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9FAE10)

namespace SQLite
{
	inline static constexpr unsigned int EnumCache_TypeDefinitionIndex = 39063;

	class EnumCache : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::SQLite::EnumCacheInfo*>** StaticGet_Cache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::SQLite::EnumCacheInfo*>**)Il2CppClass::FromTypeDefinitionIndex(EnumCache_TypeDefinitionIndex)->GetStaticField(0x2A880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHE__CCTOR_OFFSET))();
		}

		static ::SQLite::EnumCacheInfo* GetInfo(::System::Type* type)
		{
			return ((::SQLite::EnumCacheInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHE_GETINFO_OFFSET))(type);
		}
	};
}
