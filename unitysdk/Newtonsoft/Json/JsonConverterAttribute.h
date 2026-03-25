#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE_GET_CONVERTERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1643FFF0)
#define NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE_GET_CONVERTERTYPE_OFFSET UNITYSDK_OFFSET(0x1643FFE0)
#define NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x16440000)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonConverterAttribute_TypeDefinitionIndex = 8203;

	class JsonConverterAttribute : public ::System::Attribute
	{
	public:
		::System::Type* _converterType; // 0x10
		::Il2CppArray<::System::Object*>* _ConverterParameters_k__BackingField; // 0x18

		::System::Void _ctor(::System::Type* converterType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE__CTOR_OFFSET))(this, converterType);
		}

		::System::Type* get_ConverterType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE_GET_CONVERTERTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_ConverterParameters()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE_GET_CONVERTERPARAMETERS_OFFSET))(this);
		}
	};
}
