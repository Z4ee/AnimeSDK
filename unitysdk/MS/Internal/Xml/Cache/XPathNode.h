#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Xml/XPath/XPathNodeType.h"

namespace MS::Internal::Xml::Cache { class XPathNodeInfoAtom; }
namespace MS::Internal::Xml::Cache { class XPathNodePageInfo; }
namespace System { class String; }
namespace System::Xml::XPath { class XPathDocument; }

#define MS_INTERNAL_XML_CACHE_XPATHNODE_GETPARENT_OFFSET UNITYSDK_OFFSET(0x386BDF0)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GETSIBLING_OFFSET UNITYSDK_OFFSET(0x386BE20)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_COLLAPSEDLINEPOSITION_OFFSET UNITYSDK_OFFSET(0x386BDA0)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_DOCUMENT_OFFSET UNITYSDK_OFFSET(0x386BD30)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_HASCOLLAPSEDTEXT_OFFSET UNITYSDK_OFFSET(0x386BEF0)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_HASNAMESPACEDECLS_OFFSET UNITYSDK_OFFSET(0x386BF70)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_HASSIBLING_OFFSET UNITYSDK_OFFSET(0x386BEE0)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_ISTEXT_OFFSET UNITYSDK_OFFSET(0x386BF00)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_ISXMLNAMESPACENODE_OFFSET UNITYSDK_OFFSET(0x386BE50)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x386BD50)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x386BD80)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x386BCF0)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x386BD10)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x386BCC0)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_PAGEINFO_OFFSET UNITYSDK_OFFSET(0x386BDD0)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x386BCD0)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x2AD20)

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathNode_TypeDefinitionIndex = 1769;

	struct alignas(8) XPathNode
	{
		::MS::Internal::Xml::Cache::XPathNodeInfoAtom* info; // 0x10
		::System::UInt16 idxSibling; // 0x18
		::System::UInt16 idxParent; // 0x1A
		::System::UInt16 idxSimilar; // 0x1C
		::System::UInt16 posOffset; // 0x1E
		::System::UInt32 props; // 0x20
		::System::String* value; // 0x28

		::System::Xml::XPath::XPathNodeType get_NodeType()
		{
			return ((::System::Xml::XPath::XPathNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_PREFIX_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_NamespaceUri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_NAMESPACEURI_OFFSET))(this);
		}

		::System::Xml::XPath::XPathDocument* get_Document()
		{
			return ((::System::Xml::XPath::XPathDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_DOCUMENT_OFFSET))(this);
		}

		::System::Int32 get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_LINEPOSITION_OFFSET))(this);
		}

		::System::Int32 get_CollapsedLinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_COLLAPSEDLINEPOSITION_OFFSET))(this);
		}

		::MS::Internal::Xml::Cache::XPathNodePageInfo* get_PageInfo()
		{
			return ((::MS::Internal::Xml::Cache::XPathNodePageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_PAGEINFO_OFFSET))(this);
		}

		::System::Int32 GetParent(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*& a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*&))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GETPARENT_OFFSET))(this, a1);
		}

		::System::Int32 GetSibling(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*& a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*&))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GETSIBLING_OFFSET))(this, a1);
		}

		::System::Boolean get_IsXmlNamespaceNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_ISXMLNAMESPACENODE_OFFSET))(this);
		}

		::System::Boolean get_HasSibling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_HASSIBLING_OFFSET))(this);
		}

		::System::Boolean get_HasCollapsedText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_HASCOLLAPSEDTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_ISTEXT_OFFSET))(this);
		}

		::System::Boolean get_HasNamespaceDecls()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_HASNAMESPACEDECLS_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_VALUE_OFFSET))(this);
		}
	};
}
