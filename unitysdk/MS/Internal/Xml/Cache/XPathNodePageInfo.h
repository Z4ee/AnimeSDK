#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/Cache/XPathNode.h"
#include "unitysdk/System/Object.h"

#define MS_INTERNAL_XML_CACHE_XPATHNODEPAGEINFO_GET_NEXTPAGE_OFFSET UNITYSDK_OFFSET(0x18561790)
#define MS_INTERNAL_XML_CACHE_XPATHNODEPAGEINFO_GET_NODECOUNT_OFFSET UNITYSDK_OFFSET(0x18561780)
#define MS_INTERNAL_XML_CACHE_XPATHNODEPAGEINFO_GET_PAGENUMBER_OFFSET UNITYSDK_OFFSET(0x18561770)

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathNodePageInfo_TypeDefinitionIndex = 1771;

	class XPathNodePageInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* pageNext; // 0x10
		::System::Int32 nodeCount; // 0x18
		::System::Int32 pageNum; // 0x1C

		::System::Int32 get_PageNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEPAGEINFO_GET_PAGENUMBER_OFFSET))(this);
		}

		::System::Int32 get_NodeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEPAGEINFO_GET_NODECOUNT_OFFSET))(this);
		}

		::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* get_NextPage()
		{
			return ((::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEPAGEINFO_GET_NEXTPAGE_OFFSET))(this);
		}
	};
}
