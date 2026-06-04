#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/Cache/XPathNode.h"
#include "unitysdk/System/Object.h"

#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETINSCOPENAMESPACES_OFFSET UNITYSDK_OFFSET(0x1AE12150)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETLOCALNAMESPACES_OFFSET UNITYSDK_OFFSET(0x1AE12060)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETLOCATION_OFFSET UNITYSDK_OFFSET(0x1AE12AD0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETNONDESCENDANT_OFFSET UNITYSDK_OFFSET(0x1AE11890)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETPARENT_OFFSET UNITYSDK_OFFSET(0x1AE12600)
#define MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETTEXTFOLLOWING_OFFSET UNITYSDK_OFFSET(0x1AE11920)

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathNodeHelper_TypeDefinitionIndex = 1771;

	class XPathNodeHelper : public ::System::Object
	{
	public:
		static ::System::Int32 GetLocalNamespaces(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* a1, ::System::Int32 a2, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*& a3)
		{
			return ((::System::Int32(*)(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*, ::System::Int32, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*&))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETLOCALNAMESPACES_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetInScopeNamespaces(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* a1, ::System::Int32 a2, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*& a3)
		{
			return ((::System::Int32(*)(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*, ::System::Int32, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*&))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETINSCOPENAMESPACES_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetParent(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*& a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETPARENT_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetLocation(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*, ::System::Int32))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETLOCATION_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetTextFollowing(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*& a1, ::System::Int32& a2, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*&, ::System::Int32&, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*, ::System::Int32))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETTEXTFOLLOWING_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean GetNonDescendant(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*& a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEHELPER_GETNONDESCENDANT_OFFSET))(a1, a2);
		}
	};
}
