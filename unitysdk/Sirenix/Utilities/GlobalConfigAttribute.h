#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_GET_ASSETPATHWITHASSETSPREFIX_OFFSET UNITYSDK_OFFSET(0x1DE4F020)
#define SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_GET_ASSETPATHWITHOUTASSETSPREFIX_OFFSET UNITYSDK_OFFSET(0x1DE4F0A0)
#define SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_GET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0x1DE4EEA0)
#define SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_GET_FULLPATH_OFFSET UNITYSDK_OFFSET(0x1DE4EE50)
#define SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_GET_ISINRESOURCESFOLDER_OFFSET UNITYSDK_OFFSET(0x1DE4F240)
#define SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_GET_RESOURCESPATH_OFFSET UNITYSDK_OFFSET(0x1DE4F130)
#define SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_GET_USEASSET_OFFSET UNITYSDK_OFFSET(0x1DE4F2B0)
#define SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE_SET_USEASSET_OFFSET UNITYSDK_OFFSET(0x1DE4F2C0)
#define SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE4F340)
#define SIRENIX_UTILITIES_GLOBALCONFIGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4F300)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int GlobalConfigAttribute_TypeDefinitionIndex = 6490;

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
