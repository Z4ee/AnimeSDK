#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/Cache/XPathNode.h"
#include "unitysdk/System/Object.h"

#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETINSCOPENAMESPACES_OFFSET UNITYSDK_OFFSET(0x1C7944D0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETLOCALNAMESPACES_OFFSET UNITYSDK_OFFSET(0x1C7943D0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETLOCATION_OFFSET UNITYSDK_OFFSET(0x1C7946B0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETNONDESCENDANT_OFFSET UNITYSDK_OFFSET(0x1C7949D0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETPARENT_OFFSET UNITYSDK_OFFSET(0x1C794640)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETTEXTFOLLOWING_OFFSET UNITYSDK_OFFSET(0x1C794700)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C794A60)

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathNodeHelper_TypeDefinitionIndex = 1657;

	class XPathNodeHelper : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Int32 GetLocalNamespaces(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* pageElem, ::System::Int32 idxElem, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*& pageNmsp)
		{
			return ((::System::Int32(*)(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*, ::System::Int32, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*&))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETLOCALNAMESPACES_OFFSET))(pageElem, idxElem, pageNmsp);
		}

		static ::System::Int32 GetInScopeNamespaces(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* pageElem, ::System::Int32 idxElem, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*& pageNmsp)
		{
			return ((::System::Int32(*)(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*, ::System::Int32, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*&))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETINSCOPENAMESPACES_OFFSET))(pageElem, idxElem, pageNmsp);
		}

		static ::System::Boolean GetParent(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*& pageNode, ::System::Int32& idxNode)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETPARENT_OFFSET))(pageNode, idxNode);
		}

		static ::System::Int32 GetLocation(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* pageNode, ::System::Int32 idxNode)
		{
			return ((::System::Int32(*)(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*, ::System::Int32))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETLOCATION_OFFSET))(pageNode, idxNode);
		}

		static ::System::Boolean GetTextFollowing(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*& pageCurrent, ::System::Int32& idxCurrent, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* pageEnd, ::System::Int32 idxEnd)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*&, ::System::Int32&, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*, ::System::Int32))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETTEXTFOLLOWING_OFFSET))(pageCurrent, idxCurrent, pageEnd, idxEnd);
		}

		static ::System::Boolean GetNonDescendant(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*& pageNode, ::System::Int32& idxNode)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETNONDESCENDANT_OFFSET))(pageNode, idxNode);
		}
	};
}
