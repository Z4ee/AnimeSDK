#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Node; }

#define CLASS_1_3BDE246C6A710677_METHOD_1_06E32EE9A706745F_OFFSET UNITYSDK_OFFSET(0xF99B760)
#define CLASS_1_3BDE246C6A710677_METHOD_1_C00353C536DD85F8_OFFSET UNITYSDK_OFFSET(0xF99B810)

inline static constexpr unsigned int Class_1_3BDE246C6A710677_TypeDefinitionIndex = 63869;

class Class_1_3BDE246C6A710677 : public ::System::Object
{
public:
	static ::NodeCanvas::Framework::IBlackboard* Method_1_06E32EE9A706745F(::NodeCanvas::Framework::Node* a1)
	{
		return ((::NodeCanvas::Framework::IBlackboard*(*)(::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + CLASS_1_3BDE246C6A710677_METHOD_1_06E32EE9A706745F_OFFSET))(a1);
	}

	static ::NodeCanvas::Framework::Graph* Method_1_C00353C536DD85F8(::NodeCanvas::Framework::Node* a1)
	{
		return ((::NodeCanvas::Framework::Graph*(*)(::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + CLASS_1_3BDE246C6A710677_METHOD_1_C00353C536DD85F8_OFFSET))(a1);
	}
};
