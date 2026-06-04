#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Utilities/PrimitiveTypeCode.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x18882D90)
#define NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x18882D70)
#define NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION_SET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x18882DA0)
#define NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x18882D80)
#define NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18882DB0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int TypeInformation_TypeDefinitionIndex = 9306;

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

		::System::Void set_Type(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION_SET_TYPE_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Utilities::PrimitiveTypeCode get_TypeCode()
		{
			return ((::Newtonsoft::Json::Utilities::PrimitiveTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION_GET_TYPECODE_OFFSET))(this);
		}

		::System::Void set_TypeCode(::Newtonsoft::Json::Utilities::PrimitiveTypeCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION_SET_TYPECODE_OFFSET))(this, a1);
		}
	};
}
