#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/Cache/XPathNode.h"
#include "unitysdk/System/Xml/XPath/XPathNamespaceScope.h"
#include "unitysdk/System/Xml/XPath/XPathNavigator.h"
#include "unitysdk/System/Xml/XPath/XPathNodeType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class XmlNameTable; }

#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x19F7B900)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_GETPOSITIONHASHCODE_OFFSET UNITYSDK_OFFSET(0x19F7C760)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x19F7C540)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x19F7C640)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x19F7BA00)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x19F7BA60)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x19F7BB20)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x19F7B9B0)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x19F7BAC0)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_GET_UNDERLYINGOBJECT_OFFSET UNITYSDK_OFFSET(0x19F7C440)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19F7B3A0)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x19F7C4F0)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_ISSAMEPOSITION_OFFSET UNITYSDK_OFFSET(0x19F7C3D0)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_MOVETOFIRSTNAMESPACE_OFFSET UNITYSDK_OFFSET(0x19F7BB90)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_MOVETONEXTNAMESPACE_OFFSET UNITYSDK_OFFSET(0x19F7C0D0)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_MOVETOPARENT_OFFSET UNITYSDK_OFFSET(0x19F7C2F0)
#define MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19F7B320)

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathDocumentNavigator_TypeDefinitionIndex = 1772;

	class XPathDocumentNavigator : public ::System::Xml::XPath::XPathNavigator
	{
	public:
		::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* pageParent; // 0x10
		::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* pageCurrent; // 0x18
		::System::Int32 idxCurrent; // 0x20
		::System::Int32 idxParent; // 0x24

		::System::Void _ctor(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* a1, ::System::Int32 a2, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*, ::System::Int32, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*, ::System::Int32))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_GET_VALUE_OFFSET))(this);
		}

		::System::Xml::XPath::XPathNavigator* Clone()
		{
			return ((::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_CLONE_OFFSET))(this);
		}

		::System::Xml::XPath::XPathNodeType get_NodeType()
		{
			return ((::System::Xml::XPath::XPathNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_NamespaceURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_GET_NAMESPACEURI_OFFSET))(this);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_GET_PREFIX_OFFSET))(this);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return ((::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_GET_NAMETABLE_OFFSET))(this);
		}

		::System::Boolean MoveToFirstNamespace(::System::Xml::XPath::XPathNamespaceScope a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XPath::XPathNamespaceScope))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_MOVETOFIRSTNAMESPACE_OFFSET))(this, a1);
		}

		::System::Boolean MoveToNextNamespace(::System::Xml::XPath::XPathNamespaceScope a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XPath::XPathNamespaceScope))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_MOVETONEXTNAMESPACE_OFFSET))(this, a1);
		}

		::System::Boolean MoveToParent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_MOVETOPARENT_OFFSET))(this);
		}

		::System::Boolean IsSamePosition(::System::Xml::XPath::XPathNavigator* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XPath::XPathNavigator*))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_ISSAMEPOSITION_OFFSET))(this, a1);
		}

		::System::Object* get_UnderlyingObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_GET_UNDERLYINGOBJECT_OFFSET))(this);
		}

		::System::Boolean HasLineInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_HASLINEINFO_OFFSET))(this);
		}

		::System::Int32 get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_GET_LINEPOSITION_OFFSET))(this);
		}

		::System::Int32 GetPositionHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHDOCUMENTNAVIGATOR_GETPOSITIONHASHCODE_OFFSET))(this);
		}
	};
}
