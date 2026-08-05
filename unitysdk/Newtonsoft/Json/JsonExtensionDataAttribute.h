#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_GET_READDATA_OFFSET UNITYSDK_OFFSET(0x1EF05B70)
#define NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_GET_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x1EF05B50)
#define NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_SET_READDATA_OFFSET UNITYSDK_OFFSET(0x1EF05B80)
#define NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_SET_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x1EF05B60)
#define NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF05B90)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonExtensionDataAttribute_TypeDefinitionIndex = 7001;

	class JsonExtensionDataAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean _WriteData_k__BackingField; // 0x10
		::System::Boolean _ReadData_k__BackingField; // 0x11

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
