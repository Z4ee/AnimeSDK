#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/Cache/XPathNode.h"
#include "unitysdk/System/ValueType.h"

#define MS_INTERNAL_XML_CACHE_XPATHNODEREF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x39EA260)
#define MS_INTERNAL_XML_CACHE_XPATHNODEREF_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x676EB0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEREF_GET_PAGE_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEREF__CTOR_OFFSET UNITYSDK_OFFSET(0x6E35A0)

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathNodeRef_TypeDefinitionIndex = 1774;

	struct alignas(8) XPathNodeRef
	{
		::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* page; // 0x10
		::System::Int32 idx; // 0x18

		::System::Void _ctor(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*, ::System::Int32))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEREF__CTOR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* get_Page()
		{
			return ((::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEREF_GET_PAGE_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEREF_GET_INDEX_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEREF_GETHASHCODE_OFFSET))(this);
		}
	};
}
