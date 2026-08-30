#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/Cache/XPathNode.h"
#include "unitysdk/System/Object.h"

namespace MS::Internal::Xml::Cache { class XPathNodePageInfo; }
namespace System { class String; }
namespace System::Xml::XPath { class XPathDocument; }

#define MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_DOCUMENT_OFFSET UNITYSDK_OFFSET(0x1E7C8EE0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_LINENUMBERBASE_OFFSET UNITYSDK_OFFSET(0x1E7C8EF0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_LINEPOSITIONBASE_OFFSET UNITYSDK_OFFSET(0x1E7C8F00)
#define MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1E7C8E90)
#define MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1E7C8EA0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_PAGEINFO_OFFSET UNITYSDK_OFFSET(0x1E7C8E80)
#define MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_PARENTPAGE_OFFSET UNITYSDK_OFFSET(0x1E7C8ED0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1E7C8EB0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_SIBLINGPAGE_OFFSET UNITYSDK_OFFSET(0x1E7C8EC0)

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathNodeInfoAtom_TypeDefinitionIndex = 1784;

	class XPathNodeInfoAtom : public ::System::Object
	{
	public:
		::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* pageSibling; // 0x10
		::System::String* prefix; // 0x18
		::System::String* localName; // 0x20
		::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* pageParent; // 0x28
		::MS::Internal::Xml::Cache::XPathNodePageInfo* pageInfo; // 0x30
		::System::String* namespaceUri; // 0x38
		::System::Xml::XPath::XPathDocument* doc; // 0x40
		::System::Int32 lineNumBase; // 0x48
		::System::Int32 linePosBase; // 0x4C

		::MS::Internal::Xml::Cache::XPathNodePageInfo* get_PageInfo()
		{
			return ((::MS::Internal::Xml::Cache::XPathNodePageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_PAGEINFO_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_NamespaceUri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_NAMESPACEURI_OFFSET))(this);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_PREFIX_OFFSET))(this);
		}

		::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* get_SiblingPage()
		{
			return ((::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_SIBLINGPAGE_OFFSET))(this);
		}

		::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* get_ParentPage()
		{
			return ((::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_PARENTPAGE_OFFSET))(this);
		}

		::System::Xml::XPath::XPathDocument* get_Document()
		{
			return ((::System::Xml::XPath::XPathDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_DOCUMENT_OFFSET))(this);
		}

		::System::Int32 get_LineNumberBase()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_LINENUMBERBASE_OFFSET))(this);
		}

		::System::Int32 get_LinePositionBase()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_LINEPOSITIONBASE_OFFSET))(this);
		}
	};
}
