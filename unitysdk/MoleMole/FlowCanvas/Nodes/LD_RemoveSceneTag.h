#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVESCENETAG_INVOKE_OFFSET UNITYSDK_OFFSET(0x12331CC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVESCENETAG__CTOR_OFFSET UNITYSDK_OFFSET(0x12331D50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_RemoveSceneTag_TypeDefinitionIndex = 65185;

	class LD_RemoveSceneTag : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Collections::Generic::List_1<::System::String*>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVESCENETAG__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::System::String*>* SceneTags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVESCENETAG_INVOKE_OFFSET))(this, SceneTags);
		}
	};
}
