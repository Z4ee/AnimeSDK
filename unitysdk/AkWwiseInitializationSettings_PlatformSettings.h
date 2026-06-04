#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommonPlatformSettings.h"

namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_GET_GLOBALPROPERTYHASHSET_OFFSET UNITYSDK_OFFSET(0x1B4BD720)
#define AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_IGNOREPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1B4BCB90)
#define AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_ISPROPERTYIGNORED_OFFSET UNITYSDK_OFFSET(0x1B4BCD40)
#define AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_ISUSINGGLOBALPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1B4BD640)
#define AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_SETGLOBALPROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x1B4BD010)
#define AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_SETUSEGLOBALPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1B4BCE20)
#define AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_SET_GLOBALPROPERTYHASHSET_OFFSET UNITYSDK_OFFSET(0x1B4BD820)
#define AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4BA0C0)

inline static constexpr unsigned int AkWwiseInitializationSettings_PlatformSettings_TypeDefinitionIndex = 41240;

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

	::System::Void IgnorePropertyValue(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_IGNOREPROPERTYVALUE_OFFSET))(this, a1);
	}

	::System::Boolean IsPropertyIgnored(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_ISPROPERTYIGNORED_OFFSET))(this, a1);
	}

	::System::Void SetUseGlobalPropertyValue(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_SETUSEGLOBALPROPERTYVALUE_OFFSET))(this, a1, a2);
	}

	::System::Void SetGlobalPropertyValues(::System::Collections::IEnumerable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_SETGLOBALPROPERTYVALUES_OFFSET))(this, a1);
	}

	::System::Boolean IsUsingGlobalPropertyValue(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_ISUSINGGLOBALPROPERTYVALUE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* get_GlobalPropertyHashSet()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_GET_GLOBALPROPERTYHASHSET_OFFSET))(this);
	}

	::System::Void set_GlobalPropertyHashSet(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_PLATFORMSETTINGS_SET_GLOBALPROPERTYHASHSET_OFFSET))(this, a1);
	}
};
