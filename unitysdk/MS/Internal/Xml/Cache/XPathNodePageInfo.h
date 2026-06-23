#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/Cache/XPathNode.h"
#include "unitysdk/System/Object.h"

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathNodePageInfo_TypeDefinitionIndex = 1658;

	class XPathNodePageInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* pageNext; // 0x10
		::System::Int32 nodeCount; // 0x18
		::System::Int32 pageNum; // 0x1C
	};
}
