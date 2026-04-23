#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A97F70)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17A97FB0)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int FieldMultipleFilter___c_TypeDefinitionIndex = 8549;

	class FieldMultipleFilter___c : public ::System::Object
	{
	public:
		static ::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter___c** StaticGet___9()
		{
			return (::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter___c**)Il2CppClass::FromTypeDefinitionIndex(FieldMultipleFilter___c_TypeDefinitionIndex)->GetStaticField(0x346D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER___C__CTOR_OFFSET))(this);
		}
	};
}
