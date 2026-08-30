#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Converters/XContainerWrapper.h"

namespace Newtonsoft::Json::Converters { class IXmlElement; }
namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml::Linq { class XDocument; }

#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x18126690)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x18126360)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x181262A0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATECDATASECTION_OFFSET UNITYSDK_OFFSET(0x18125B20)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATECOMMENT_OFFSET UNITYSDK_OFFSET(0x181259C0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEELEMENT_1_OFFSET UNITYSDK_OFFSET(0x18126130)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEELEMENT_OFFSET UNITYSDK_OFFSET(0x18126030)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x18125F20)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATESIGNIFICANTWHITESPACE_OFFSET UNITYSDK_OFFSET(0x18125C80)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATETEXTNODE_OFFSET UNITYSDK_OFFSET(0x18125A70)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x18125BD0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x18125D30)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEXMLDOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x18125DF0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_CHILDNODES_OFFSET UNITYSDK_OFFSET(0x181256D0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_DOCUMENTELEMENT_OFFSET UNITYSDK_OFFSET(0x18126480)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_DOCUMENT_OFFSET UNITYSDK_OFFSET(0x18125660)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x18125110)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XDocumentWrapper_TypeDefinitionIndex = 9779;

	class XDocumentWrapper : public ::Newtonsoft::Json::Converters::XContainerWrapper
	{
	public:
		::System::Void _ctor(::System::Xml::Linq::XDocument* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XDocument*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER__CTOR_OFFSET))(this, a1);
		}

		::System::Xml::Linq::XDocument* get_Document()
		{
			return ((::System::Xml::Linq::XDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_DOCUMENT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_ChildNodes()
		{
			return ((::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_CHILDNODES_OFFSET))(this);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateComment(::System::String* a1)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATECOMMENT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateTextNode(::System::String* a1)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATETEXTNODE_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateCDataSection(::System::String* a1)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATECDATASECTION_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateWhitespace(::System::String* a1)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEWHITESPACE_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateSignificantWhitespace(::System::String* a1)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATESIGNIFICANTWHITESPACE_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDeclaration(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEXMLDECLARATION_OFFSET))(this, a1, a2, a3);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDocumentType(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEXMLDOCUMENTTYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateProcessingInstruction(::System::String* a1, ::System::String* a2)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEPROCESSINGINSTRUCTION_OFFSET))(this, a1, a2);
		}

		::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::System::String* a1)
		{
			return ((::Newtonsoft::Json::Converters::IXmlElement*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEELEMENT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Converters::IXmlElement* CreateElement_1(::System::String* a1, ::System::String* a2)
		{
			return ((::Newtonsoft::Json::Converters::IXmlElement*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEELEMENT_1_OFFSET))(this, a1, a2);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::System::String* a1, ::System::String* a2)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEATTRIBUTE_OFFSET))(this, a1, a2);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute_1(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEATTRIBUTE_1_OFFSET))(this, a1, a2, a3);
		}

		::Newtonsoft::Json::Converters::IXmlElement* get_DocumentElement()
		{
			return ((::Newtonsoft::Json::Converters::IXmlElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_DOCUMENTELEMENT_OFFSET))(this);
		}

		::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* a1)
		{
			return ((::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID, ::Newtonsoft::Json::Converters::IXmlNode*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_APPENDCHILD_OFFSET))(this, a1);
		}
	};
}
