#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/XmlNodeWrapper.h"

namespace Newtonsoft::Json::Converters { class IXmlElement; }
namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace System { class String; }
namespace System::Xml { class XmlDocument; }

#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x18810100)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18810040)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATECDATASECTION_OFFSET UNITYSDK_OFFSET(0x1880FC70)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATECOMMENT_OFFSET UNITYSDK_OFFSET(0x1880FB90)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1880FFD0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEELEMENT_OFFSET UNITYSDK_OFFSET(0x1880FF50)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1880FEE0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATESIGNIFICANTWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1880FD50)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATETEXTNODE_OFFSET UNITYSDK_OFFSET(0x1880FC00)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1880FCE0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x1880FDC0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEXMLDOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1880FE50)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_GET_DOCUMENTELEMENT_OFFSET UNITYSDK_OFFSET(0x188101A0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1880FB80)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XmlDocumentWrapper_TypeDefinitionIndex = 9476;

	class XmlDocumentWrapper : public ::Newtonsoft::Json::Converters::XmlNodeWrapper
	{
	public:
		::System::Xml::XmlDocument* _document; // 0x28

		::System::Void _ctor(::System::Xml::XmlDocument* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER__CTOR_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateComment(::System::String* a1)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATECOMMENT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateTextNode(::System::String* a1)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATETEXTNODE_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateCDataSection(::System::String* a1)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATECDATASECTION_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateWhitespace(::System::String* a1)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEWHITESPACE_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateSignificantWhitespace(::System::String* a1)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATESIGNIFICANTWHITESPACE_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDeclaration(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEXMLDECLARATION_OFFSET))(this, a1, a2, a3);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDocumentType(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEXMLDOCUMENTTYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateProcessingInstruction(::System::String* a1, ::System::String* a2)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEPROCESSINGINSTRUCTION_OFFSET))(this, a1, a2);
		}

		::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::System::String* a1)
		{
			return ((::Newtonsoft::Json::Converters::IXmlElement*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEELEMENT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Converters::IXmlElement* CreateElement_1(::System::String* a1, ::System::String* a2)
		{
			return ((::Newtonsoft::Json::Converters::IXmlElement*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEELEMENT_1_OFFSET))(this, a1, a2);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::System::String* a1, ::System::String* a2)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEATTRIBUTE_OFFSET))(this, a1, a2);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute_1(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEATTRIBUTE_1_OFFSET))(this, a1, a2, a3);
		}

		::Newtonsoft::Json::Converters::IXmlElement* get_DocumentElement()
		{
			return ((::Newtonsoft::Json::Converters::IXmlElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_GET_DOCUMENTELEMENT_OFFSET))(this);
		}
	};
}
