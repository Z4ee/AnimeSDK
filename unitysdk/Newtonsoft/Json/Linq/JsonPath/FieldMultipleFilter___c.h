#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x172D4A60)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x172D4AA0)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int FieldMultipleFilter___c_TypeDefinitionIndex = 9743;

	class FieldMultipleFilter___c : public ::System::Object
	{
	public:
		static ::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter___c** StaticGet___9()
		{
			return (::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter___c**)Il2CppClass::FromTypeDefinitionIndex(FieldMultipleFilter___c_TypeDefinitionIndex)->GetStaticField(0x41B70);
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
