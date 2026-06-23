#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/Cache/XPathNode.h"
#include "unitysdk/System/Object.h"

namespace MS::Internal::Xml::Cache { class XPathNodePageInfo; }
namespace System { class String; }
namespace System::Xml::XPath { class XPathDocument; }

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathNodeInfoAtom_TypeDefinitionIndex = 1659;

	class XPathNodeInfoAtom : public ::System::Object
	{
	public:
		::MS::Internal::Xml::Cache::XPathNodePageInfo* pageInfo; // 0x10
		::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* pageParent; // 0x18
		::System::Xml::XPath::XPathDocument* doc; // 0x20
		::Il2CppArray<::MS::Internal::Xml::Cache::XPathNode>* pageSibling; // 0x28
		::System::String* prefix; // 0x30
		::System::String* namespaceUri; // 0x38
		::System::String* localName; // 0x40
		::System::Int32 lineNumBase; // 0x48
		::System::Int32 linePosBase; // 0x4C
	};
}
