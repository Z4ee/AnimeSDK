#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonContainerAttribute.h"

namespace System { class String; }

#define NEWTONSOFT_JSON_JSONARRAYATTRIBUTE_GET_ALLOWNULLITEMS_OFFSET UNITYSDK_OFFSET(0x1E850650)
#define NEWTONSOFT_JSON_JSONARRAYATTRIBUTE_SET_ALLOWNULLITEMS_OFFSET UNITYSDK_OFFSET(0x1E850660)
#define NEWTONSOFT_JSON_JSONARRAYATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E850680)
#define NEWTONSOFT_JSON_JSONARRAYATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E850690)
#define NEWTONSOFT_JSON_JSONARRAYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E850670)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonArrayAttribute_TypeDefinitionIndex = 6988;

	class JsonArrayAttribute : public ::Newtonsoft::Json::JsonContainerAttribute
	{
	public:
		::System::Boolean _allowNullItems; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONARRAYATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean allowNullItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONARRAYATTRIBUTE__CTOR_1_OFFSET))(this, allowNullItems);
		}

		::System::Void _ctor_2(::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONARRAYATTRIBUTE__CTOR_2_OFFSET))(this, id);
		}

		::System::Boolean get_AllowNullItems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONARRAYATTRIBUTE_GET_ALLOWNULLITEMS_OFFSET))(this);
		}

		::System::Void set_AllowNullItems(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONARRAYATTRIBUTE_SET_ALLOWNULLITEMS_OFFSET))(this, value);
		}
	};
}
