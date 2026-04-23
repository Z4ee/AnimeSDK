#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/XContainerWrapper.h"

namespace Newtonsoft::Json::Converters { class IXmlElement; }
namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml::Linq { class XDocument; }

#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x17A5F720)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x17A5F400)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17A5F340)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATECDATASECTION_OFFSET UNITYSDK_OFFSET(0x17A5EBC0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATECOMMENT_OFFSET UNITYSDK_OFFSET(0x17A5EA60)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEELEMENT_1_OFFSET UNITYSDK_OFFSET(0x17A5F1D0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEELEMENT_OFFSET UNITYSDK_OFFSET(0x17A5F0D0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x17A5EFC0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATESIGNIFICANTWHITESPACE_OFFSET UNITYSDK_OFFSET(0x17A5ED20)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATETEXTNODE_OFFSET UNITYSDK_OFFSET(0x17A5EB10)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x17A5EC70)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x17A5EDD0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEXMLDOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x17A5EE90)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_CHILDNODES_OFFSET UNITYSDK_OFFSET(0x17A5E7F0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_DOCUMENTELEMENT_OFFSET UNITYSDK_OFFSET(0x17A5F520)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_DOCUMENT_OFFSET UNITYSDK_OFFSET(0x17A5E780)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5E280)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XDocumentWrapper_TypeDefinitionIndex = 8585;

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
