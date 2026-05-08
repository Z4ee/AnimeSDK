#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GETDICTIONARYKEY_OFFSET UNITYSDK_OFFSET(0x1BBA8050)
#define NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GETPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1BBA8020)
#define NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GET_OVERRIDESPECIFIEDNAMES_OFFSET UNITYSDK_OFFSET(0x1BBA8000)
#define NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GET_PROCESSDICTIONARYKEYS_OFFSET UNITYSDK_OFFSET(0x1BBA7FE0)
#define NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_SET_OVERRIDESPECIFIEDNAMES_OFFSET UNITYSDK_OFFSET(0x1BBA8010)
#define NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_SET_PROCESSDICTIONARYKEYS_OFFSET UNITYSDK_OFFSET(0x1BBA7FF0)
#define NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBA8070)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int NamingStrategy_TypeDefinitionIndex = 7018;

	class NamingStrategy : public ::System::Object
	{
	public:
		::System::Boolean _ProcessDictionaryKeys_k__BackingField; // 0x10
		::System::Boolean _OverrideSpecifiedNames_k__BackingField; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ProcessDictionaryKeys()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GET_PROCESSDICTIONARYKEYS_OFFSET))(this);
		}

		::System::Void set_ProcessDictionaryKeys(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_SET_PROCESSDICTIONARYKEYS_OFFSET))(this, value);
		}

		::System::Boolean get_OverrideSpecifiedNames()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GET_OVERRIDESPECIFIEDNAMES_OFFSET))(this);
		}

		::System::Void set_OverrideSpecifiedNames(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_SET_OVERRIDESPECIFIEDNAMES_OFFSET))(this, value);
		}

		::System::String* GetPropertyName(::System::String* name, ::System::Boolean hasSpecifiedName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GETPROPERTYNAME_OFFSET))(this, name, hasSpecifiedName);
		}

		::System::String* GetDictionaryKey(::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GETDICTIONARYKEY_OFFSET))(this, key);
		}
	};
}
