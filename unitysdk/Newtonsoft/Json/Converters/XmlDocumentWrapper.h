#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/XmlNodeWrapper.h"

namespace Newtonsoft::Json::Converters { class IXmlElement; }
namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace System { class String; }
namespace System::Xml { class XmlDocument; }

#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x164358B0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x164357F0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATECDATASECTION_OFFSET UNITYSDK_OFFSET(0x16435420)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATECOMMENT_OFFSET UNITYSDK_OFFSET(0x16435340)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEELEMENT_1_OFFSET UNITYSDK_OFFSET(0x16435780)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEELEMENT_OFFSET UNITYSDK_OFFSET(0x16435700)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x16435690)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATESIGNIFICANTWHITESPACE_OFFSET UNITYSDK_OFFSET(0x16435500)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATETEXTNODE_OFFSET UNITYSDK_OFFSET(0x164353B0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x16435490)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x16435570)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEXMLDOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x16435600)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_GET_DOCUMENTELEMENT_OFFSET UNITYSDK_OFFSET(0x16435950)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x16435330)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XmlDocumentWrapper_TypeDefinitionIndex = 8427;

	class XmlDocumentWrapper : public ::Newtonsoft::Json::Converters::XmlNodeWrapper
	{
	public:
		::System::Xml::XmlDocument* _document; // 0x28

		::System::Void _ctor(::System::Xml::XmlDocument* document)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER__CTOR_OFFSET))(this, document);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateComment(::System::String* data)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATECOMMENT_OFFSET))(this, data);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateTextNode(::System::String* text)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATETEXTNODE_OFFSET))(this, text);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateCDataSection(::System::String* data)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATECDATASECTION_OFFSET))(this, data);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateWhitespace(::System::String* text)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEWHITESPACE_OFFSET))(this, text);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateSignificantWhitespace(::System::String* text)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATESIGNIFICANTWHITESPACE_OFFSET))(this, text);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDeclaration(::System::String* version, ::System::String* encoding, ::System::String* standalone)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEXMLDECLARATION_OFFSET))(this, version, encoding, standalone);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDocumentType(::System::String* name, ::System::String* publicId, ::System::String* systemId, ::System::String* internalSubset)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEXMLDOCUMENTTYPE_OFFSET))(this, name, publicId, systemId, internalSubset);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateProcessingInstruction(::System::String* target, ::System::String* data)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEPROCESSINGINSTRUCTION_OFFSET))(this, target, data);
		}

		::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::System::String* elementName)
		{
			return ((::Newtonsoft::Json::Converters::IXmlElement*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEELEMENT_OFFSET))(this, elementName);
		}

		::Newtonsoft::Json::Converters::IXmlElement* CreateElement_1(::System::String* qualifiedName, ::System::String* namespaceUri)
		{
			return ((::Newtonsoft::Json::Converters::IXmlElement*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEELEMENT_1_OFFSET))(this, qualifiedName, namespaceUri);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::System::String* name, ::System::String* value)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEATTRIBUTE_OFFSET))(this, name, value);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute_1(::System::String* qualifiedName, ::System::String* namespaceUri, ::System::String* value)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEATTRIBUTE_1_OFFSET))(this, qualifiedName, namespaceUri, value);
		}

		::Newtonsoft::Json::Converters::IXmlElement* get_DocumentElement()
		{
			return ((::Newtonsoft::Json::Converters::IXmlElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_GET_DOCUMENTELEMENT_OFFSET))(this);
		}
	};
}
