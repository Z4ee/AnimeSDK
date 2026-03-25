#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/XContainerWrapper.h"

namespace Newtonsoft::Json::Converters { class IXmlElement; }
namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml::Linq { class XDocument; }

#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x16433D40)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x16433A20)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x16433960)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATECDATASECTION_OFFSET UNITYSDK_OFFSET(0x164331E0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATECOMMENT_OFFSET UNITYSDK_OFFSET(0x16433080)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEELEMENT_1_OFFSET UNITYSDK_OFFSET(0x164337F0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEELEMENT_OFFSET UNITYSDK_OFFSET(0x164336F0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x164335E0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATESIGNIFICANTWHITESPACE_OFFSET UNITYSDK_OFFSET(0x16433340)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATETEXTNODE_OFFSET UNITYSDK_OFFSET(0x16433130)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x16433290)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x164333F0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEXMLDOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x164334B0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_CHILDNODES_OFFSET UNITYSDK_OFFSET(0x16432E10)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_DOCUMENTELEMENT_OFFSET UNITYSDK_OFFSET(0x16433B40)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_DOCUMENT_OFFSET UNITYSDK_OFFSET(0x16432DA0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x164328A0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XDocumentWrapper_TypeDefinitionIndex = 8439;

	class XDocumentWrapper : public ::Newtonsoft::Json::Converters::XContainerWrapper
	{
	public:
		::System::Void _ctor(::System::Xml::Linq::XDocument* document)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XDocument*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER__CTOR_OFFSET))(this, document);
		}

		::System::Xml::Linq::XDocument* get_Document()
		{
			return ((::System::Xml::Linq::XDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_DOCUMENT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_ChildNodes()
		{
			return ((::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_CHILDNODES_OFFSET))(this);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateComment(::System::String* text)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATECOMMENT_OFFSET))(this, text);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateTextNode(::System::String* text)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATETEXTNODE_OFFSET))(this, text);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateCDataSection(::System::String* data)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATECDATASECTION_OFFSET))(this, data);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateWhitespace(::System::String* text)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEWHITESPACE_OFFSET))(this, text);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateSignificantWhitespace(::System::String* text)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATESIGNIFICANTWHITESPACE_OFFSET))(this, text);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDeclaration(::System::String* version, ::System::String* encoding, ::System::String* standalone)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEXMLDECLARATION_OFFSET))(this, version, encoding, standalone);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDocumentType(::System::String* name, ::System::String* publicId, ::System::String* systemId, ::System::String* internalSubset)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEXMLDOCUMENTTYPE_OFFSET))(this, name, publicId, systemId, internalSubset);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateProcessingInstruction(::System::String* target, ::System::String* data)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEPROCESSINGINSTRUCTION_OFFSET))(this, target, data);
		}

		::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::System::String* elementName)
		{
			return ((::Newtonsoft::Json::Converters::IXmlElement*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEELEMENT_OFFSET))(this, elementName);
		}

		::Newtonsoft::Json::Converters::IXmlElement* CreateElement_1(::System::String* qualifiedName, ::System::String* namespaceUri)
		{
			return ((::Newtonsoft::Json::Converters::IXmlElement*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEELEMENT_1_OFFSET))(this, qualifiedName, namespaceUri);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::System::String* name, ::System::String* value)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEATTRIBUTE_OFFSET))(this, name, value);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute_1(::System::String* qualifiedName, ::System::String* namespaceUri, ::System::String* value)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEATTRIBUTE_1_OFFSET))(this, qualifiedName, namespaceUri, value);
		}

		::Newtonsoft::Json::Converters::IXmlElement* get_DocumentElement()
		{
			return ((::Newtonsoft::Json::Converters::IXmlElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_DOCUMENTELEMENT_OFFSET))(this);
		}

		::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_APPENDCHILD_OFFSET))(this, newChild);
		}
	};
}
