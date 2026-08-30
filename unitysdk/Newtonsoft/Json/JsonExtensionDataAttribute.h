#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_GET_READDATA_OFFSET UNITYSDK_OFFSET(0x1813A0B0)
#define NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_GET_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x1813A090)
#define NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_SET_READDATA_OFFSET UNITYSDK_OFFSET(0x1813A0C0)
#define NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_SET_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x1813A0A0)
#define NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1813A0D0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonExtensionDataAttribute_TypeDefinitionIndex = 9531;

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

		::System::Void set_WriteData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_SET_WRITEDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_ReadData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_GET_READDATA_OFFSET))(this);
		}

		::System::Void set_ReadData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_SET_READDATA_OFFSET))(this, a1);
		}
	};
}
