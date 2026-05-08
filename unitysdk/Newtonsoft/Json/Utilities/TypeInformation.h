#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Utilities/PrimitiveTypeCode.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1C5402D0)
#define NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C5402B0)
#define NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION_SET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1C5402E0)
#define NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C5402C0)
#define NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5402F0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int TypeInformation_TypeDefinitionIndex = 6908;

	class TypeInformation : public ::System::Object
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x10
		::Newtonsoft::Json::Utilities::PrimitiveTypeCode _TypeCode_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION__CTOR_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION_SET_TYPE_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Utilities::PrimitiveTypeCode get_TypeCode()
		{
			return ((::Newtonsoft::Json::Utilities::PrimitiveTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION_GET_TYPECODE_OFFSET))(this);
		}

		::System::Void set_TypeCode(::Newtonsoft::Json::Utilities::PrimitiveTypeCode value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION_SET_TYPECODE_OFFSET))(this, value);
		}
	};
}
