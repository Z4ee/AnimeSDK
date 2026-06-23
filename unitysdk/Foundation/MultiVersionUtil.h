#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class MultiVersionInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOUNDATION_MULTIVERSIONUTIL_GETSUFFIXKEY_OFFSET UNITYSDK_OFFSET(0x1BFE7C00)
#define FOUNDATION_MULTIVERSIONUTIL_RELOADFROMFILE_1_OFFSET UNITYSDK_OFFSET(0x1BFE7820)
#define FOUNDATION_MULTIVERSIONUTIL_RELOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x1BFE77D0)
#define FOUNDATION_MULTIVERSIONUTIL_TRYGETMULTIVERPATHBYHASH_OFFSET UNITYSDK_OFFSET(0x1BFE79E0)
#define FOUNDATION_MULTIVERSIONUTIL_TRYGETMULTIVERPATHBYPATH_OFFSET UNITYSDK_OFFSET(0x1BFE7870)
#define FOUNDATION_MULTIVERSIONUTIL_TRYGETMULTIVERPATH_OFFSET UNITYSDK_OFFSET(0x1BFE7AC0)
#define FOUNDATION_MULTIVERSIONUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFE7C60)

namespace Foundation
{
	inline static constexpr unsigned int MultiVersionUtil_TypeDefinitionIndex = 7953;

	class MultiVersionUtil : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Foundation::MultiVersionInfo*>** StaticGet__hashDatas()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Foundation::MultiVersionInfo*>**)Il2CppClass::FromTypeDefinitionIndex(MultiVersionUtil_TypeDefinitionIndex)->GetStaticField(0x7260);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::MultiVersionInfo*>** StaticGet__datas()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::MultiVersionInfo*>**)Il2CppClass::FromTypeDefinitionIndex(MultiVersionUtil_TypeDefinitionIndex)->GetStaticField(0x7268);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONUTIL__CTOR_OFFSET))(this);
		}

		static ::System::Void ReloadFromFile(::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::MultiVersionInfo*>* datas)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::MultiVersionInfo*>*))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONUTIL_RELOADFROMFILE_OFFSET))(datas);
		}

		static ::System::Void ReloadFromFile_1(::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Foundation::MultiVersionInfo*>* datas)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Foundation::MultiVersionInfo*>*))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONUTIL_RELOADFROMFILE_1_OFFSET))(datas);
		}

		static ::System::Boolean TryGetMultiVerPathByPath(::System::String* key, ::System::String*& multiVerPath)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONUTIL_TRYGETMULTIVERPATHBYPATH_OFFSET))(key, multiVerPath);
		}

		static ::System::Boolean TryGetMultiVerPathByHash(::System::UInt64 key, ::System::UInt64& multiVerPathHash)
		{
			return ((::System::Boolean(*)(::System::UInt64, ::System::UInt64&))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONUTIL_TRYGETMULTIVERPATHBYHASH_OFFSET))(key, multiVerPathHash);
		}

		static ::System::Boolean TryGetMultiVerPath(::Foundation::AssetPath key, ::Foundation::AssetPath& multiVerAssetPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONUTIL_TRYGETMULTIVERPATH_OFFSET))(key, multiVerAssetPath);
		}

		static ::System::String* GetSuffixKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONUTIL_GETSUFFIXKEY_OFFSET))();
		}
	};
}
