#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/Cache/XPathNode.h"
#include "unitysdk/System/ValueType.h"

#define MS_INTERNAL_XML_CACHE_XPATHNODEREF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22D0F10)
#define MS_INTERNAL_XML_CACHE_XPATHNODEREF_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xD240)
#define MS_INTERNAL_XML_CACHE_XPATHNODEREF_GET_PAGE_OFFSET UNITYSDK_OFFSET(0x5580)
#define MS_INTERNAL_XML_CACHE_XPATHNODEREF__CTOR_OFFSET UNITYSDK_OFFSET(0x77400)

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathNodeRef_TypeDefinitionIndex = 1770;

	struct alignas(8) XPathNodeRef
	{
		::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* page; // 0x10
		::System::Int32 idx; // 0x18

		::System::Void _ctor(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* page, ::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*, ::System::Int32))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEREF__CTOR_OFFSET))(this, page, idx);
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
