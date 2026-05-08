#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2455E0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B245620)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER___C__EXECUTEFILTER_B__4_0_OFFSET UNITYSDK_OFFSET(0x1B245630)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int FieldMultipleFilter___c_TypeDefinitionIndex = 7076;

	class FieldMultipleFilter___c : public ::System::Object
	{
	public:
		static ::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter___c** StaticGet___9()
		{
			return (::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter___c**)Il2CppClass::FromTypeDefinitionIndex(FieldMultipleFilter___c_TypeDefinitionIndex)->GetStaticField(0x5F40);
		}
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FieldMultipleFilter___c_TypeDefinitionIndex)->GetStaticField(0x5F48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER___C__CTOR_OFFSET))(this);
		}

		::System::String* _ExecuteFilter_b__4_0(::System::String* n)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_FIELDMULTIPLEFILTER___C__EXECUTEFILTER_B__4_0_OFFSET))(this, n);
		}
	};
}
