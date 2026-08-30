#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/XmlNodeWrapper.h"

namespace System { class String; }
namespace System::Xml { class XmlDocumentType; }

#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_INTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x18127FC0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x18127FE0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18127F60)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_PUBLIC_OFFSET UNITYSDK_OFFSET(0x18127FA0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_SYSTEM_OFFSET UNITYSDK_OFFSET(0x18127F80)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x18127F50)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XmlDocumentTypeWrapper_TypeDefinitionIndex = 9770;

	class XmlDocumentTypeWrapper : public ::Newtonsoft::Json::Converters::XmlNodeWrapper
	{
	public:
		::System::Xml::XmlDocumentType* _documentType; // 0x28

		::System::Void _ctor(::System::Xml::XmlDocumentType* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocumentType*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_NAME_OFFSET))(this);
		}

		::System::String* get_System()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_SYSTEM_OFFSET))(this);
		}

		::System::String* get_Public()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_PUBLIC_OFFSET))(this);
		}

		::System::String* get_InternalSubset()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_INTERNALSUBSET_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_LOCALNAME_OFFSET))(this);
		}
	};
}
