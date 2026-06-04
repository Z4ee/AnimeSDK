#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/XmlNodeWrapper.h"

namespace System { class String; }
namespace System::Xml { class XmlDocumentType; }

#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_INTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x1880FB20)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1880FB40)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1880FAC0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_PUBLIC_OFFSET UNITYSDK_OFFSET(0x1880FB00)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER_GET_SYSTEM_OFFSET UNITYSDK_OFFSET(0x1880FAE0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTTYPEWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1880FAB0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XmlDocumentTypeWrapper_TypeDefinitionIndex = 9479;

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
