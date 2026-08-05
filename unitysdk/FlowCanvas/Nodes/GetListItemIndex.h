#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

namespace System { class Object; }
namespace System::Collections { class IList; }

#define FLOWCANVAS_NODES_GETLISTITEMINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EB8F9B0)
#define FLOWCANVAS_NODES_GETLISTITEMINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8FA90)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int GetListItemIndex_TypeDefinitionIndex = 29858;

	class GetListItemIndex : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Int32, ::System::Collections::IList*, ::System::Object*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GETLISTITEMINDEX__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Collections::IList* list, ::System::Object* item)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::IList*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GETLISTITEMINDEX_INVOKE_OFFSET))(this, list, item);
		}
	};
}
