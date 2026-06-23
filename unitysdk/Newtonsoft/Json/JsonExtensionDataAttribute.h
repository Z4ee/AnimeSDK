#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_GET_READDATA_OFFSET UNITYSDK_OFFSET(0x1DB1B870)
#define NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_GET_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x1DB1B850)
#define NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_SET_READDATA_OFFSET UNITYSDK_OFFSET(0x1DB1B880)
#define NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_SET_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x1DB1B860)
#define NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1B890)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonExtensionDataAttribute_TypeDefinitionIndex = 6997;

	class JsonExtensionDataAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean _ReadData_k__BackingField; // 0x10
		::System::Boolean _WriteData_k__BackingField; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_WriteData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_GET_WRITEDATA_OFFSET))(this);
		}

		::System::Void set_WriteData(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_SET_WRITEDATA_OFFSET))(this, value);
		}

		::System::Boolean get_ReadData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_GET_READDATA_OFFSET))(this);
		}

		::System::Void set_ReadData(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_SET_READDATA_OFFSET))(this, value);
		}
	};
}
