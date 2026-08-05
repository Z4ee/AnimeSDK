#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE_GET_CONVERTERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1FC4F3A0)
#define NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE_GET_CONVERTERTYPE_OFFSET UNITYSDK_OFFSET(0x1FC4F390)
#define NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE_SET_CONVERTERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1FC4F3B0)
#define NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC4F430)
#define NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC4F3C0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonConverterAttribute_TypeDefinitionIndex = 6997;

	class JsonConverterAttribute : public ::System::Attribute
	{
	public:
		::System::Type* _converterType; // 0x10
		::Il2CppArray<::System::Object*>* _ConverterParameters_k__BackingField; // 0x18

		::System::Void _ctor(::System::Type* converterType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE__CTOR_OFFSET))(this, converterType);
		}

		::System::Void _ctor_1(::System::Type* converterType, ::Il2CppArray<::System::Object*>* converterParameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE__CTOR_1_OFFSET))(this, converterType, converterParameters);
		}

		::System::Type* get_ConverterType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE_GET_CONVERTERTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_ConverterParameters()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE_GET_CONVERTERPARAMETERS_OFFSET))(this);
		}

		::System::Void set_ConverterParameters(::Il2CppArray<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE_SET_CONVERTERPARAMETERS_OFFSET))(this, value);
		}
	};
}
