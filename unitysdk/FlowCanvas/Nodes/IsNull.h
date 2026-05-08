#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace System { class Object; }

#define FLOWCANVAS_NODES_ISNULL_INVOKE_OFFSET UNITYSDK_OFFSET(0x114A4790)
#define FLOWCANVAS_NODES_ISNULL__CTOR_OFFSET UNITYSDK_OFFSET(0x114A47E0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IsNull_TypeDefinitionIndex = 46440;

	class IsNull : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Boolean, ::System::Object*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ISNULL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Object* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ISNULL_INVOKE_OFFSET))(this, a);
		}
	};
}
