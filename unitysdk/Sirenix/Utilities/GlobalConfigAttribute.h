#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_GET_ASSETPATHWITHASSETSPREFIX_OFFSET UNITYSDK_OFFSET(0x1F25CDF0)
#define SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_GET_ASSETPATHWITHOUTASSETSPREFIX_OFFSET UNITYSDK_OFFSET(0x1F25CE70)
#define SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_GET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0x1F25CC70)
#define SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_GET_FULLPATH_OFFSET UNITYSDK_OFFSET(0x1F25CC20)
#define SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_GET_ISINRESOURCESFOLDER_OFFSET UNITYSDK_OFFSET(0x1F25D010)
#define SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_GET_RESOURCESPATH_OFFSET UNITYSDK_OFFSET(0x1F25CF00)
#define SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_GET_USEASSET_OFFSET UNITYSDK_OFFSET(0x1F25D080)
#define SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_SET_USEASSET_OFFSET UNITYSDK_OFFSET(0x1F25D090)
#define SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F25D110)
#define SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F25D0D0)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int GlobalConfigAttribute_TypeDefinitionIndex = 6494;

	class GlobalConfigAttribute : public ::System::Attribute
	{
	public:
		::System::String* assetPath; // 0x10
		::System::Boolean _UseAsset_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* assetPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE__CTOR_1_OFFSET))(this, assetPath);
		}

		::System::String* get_FullPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_GET_FULLPATH_OFFSET))(this);
		}

		::System::String* get_AssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_GET_ASSETPATH_OFFSET))(this);
		}

		::System::String* get_AssetPathWithAssetsPrefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_GET_ASSETPATHWITHASSETSPREFIX_OFFSET))(this);
		}

		::System::String* get_AssetPathWithoutAssetsPrefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_GET_ASSETPATHWITHOUTASSETSPREFIX_OFFSET))(this);
		}

		::System::String* get_ResourcesPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_GET_RESOURCESPATH_OFFSET))(this);
		}

		::System::Boolean get_UseAsset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_GET_USEASSET_OFFSET))(this);
		}

		::System::Void set_UseAsset(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_SET_USEASSET_OFFSET))(this, value);
		}

		::System::Boolean get_IsInResourcesFolder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_GET_ISINRESOURCESFOLDER_OFFSET))(this);
		}
	};
}
