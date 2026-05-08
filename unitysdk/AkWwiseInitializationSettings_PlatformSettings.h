#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommonPlatformSettings.h"

namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_GET_GLOBALPROPERTYHASHSET_OFFSET UNITYSDK_OFFSET(0x19C32C70)
#define AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_IGNOREPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x19C0C040)
#define AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_ISPROPERTYIGNORED_OFFSET UNITYSDK_OFFSET(0x19C32820)
#define AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_ISUSINGGLOBALPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x19C32C10)
#define AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_SETGLOBALPROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x19C32880)
#define AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_SETUSEGLOBALPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x19C0C0F0)
#define AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_SET_GLOBALPROPERTYHASHSET_OFFSET UNITYSDK_OFFSET(0x19C32D60)
#define AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x19C0BEC0)

inline static constexpr unsigned int AkWwiseInitializationSettings_PlatformSettings_TypeDefinitionIndex = 31531;

class AkWwiseInitializationSettings_PlatformSettings : public ::AkCommonPlatformSettings
{
public:
	::System::Collections::Generic::List_1<::System::String*>* IgnorePropertyNameList; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* GlobalPropertyNameList; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* _GlobalPropertyHashSet; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS__CTOR_OFFSET))(this);
	}

	::System::Void IgnorePropertyValue(::System::String* propertyPath)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_IGNOREPROPERTYVALUE_OFFSET))(this, propertyPath);
	}

	::System::Boolean IsPropertyIgnored(::System::String* propertyPath)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_ISPROPERTYIGNORED_OFFSET))(this, propertyPath);
	}

	::System::Void SetUseGlobalPropertyValue(::System::String* propertyPath, ::System::Boolean use)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_SETUSEGLOBALPROPERTYVALUE_OFFSET))(this, propertyPath, use);
	}

	::System::Void SetGlobalPropertyValues(::System::Collections::IEnumerable* enumerable)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_SETGLOBALPROPERTYVALUES_OFFSET))(this, enumerable);
	}

	::System::Boolean IsUsingGlobalPropertyValue(::System::String* propertyPath)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_ISUSINGGLOBALPROPERTYVALUE_OFFSET))(this, propertyPath);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* get_GlobalPropertyHashSet()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_GET_GLOBALPROPERTYHASHSET_OFFSET))(this);
	}

	::System::Void set_GlobalPropertyHashSet(::System::Collections::Generic::HashSet_1<::System::String*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_SET_GLOBALPROPERTYHASHSET_OFFSET))(this, value);
	}
};
