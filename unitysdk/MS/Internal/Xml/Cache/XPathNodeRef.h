#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/Cache/XPathNode.h"
#include "unitysdk/System/ValueType.h"

#define MS_INTERNAL_XML_CACHE_XPATHNODEREF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8CF620)
#define MS_INTERNAL_XML_CACHE_XPATHNODEREF__CTOR_OFFSET UNITYSDK_OFFSET(0x39EDC0)

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathNodeRef_TypeDefinitionIndex = 1657;

	struct alignas(8) XPathNodeRef
	{
		::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* page; // 0x10
		::System::Int32 idx; // 0x18

		::System::Void _ctor(::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* page, ::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*, ::System::Int32))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEREF__CTOR_OFFSET))(this, page, idx);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEREF_GETHASHCODE_OFFSET))(this);
		}
	};
}
