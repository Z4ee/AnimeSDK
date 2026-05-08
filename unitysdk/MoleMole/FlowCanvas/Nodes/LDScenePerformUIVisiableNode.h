#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMUIVISIABLENODE_CHECKHAVEPERFORM_OFFSET UNITYSDK_OFFSET(0x1820F270)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMUIVISIABLENODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1820F0D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMUIVISIABLENODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1820F320)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMUIVISIABLENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1820F300)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDScenePerformUIVisiableNode_TypeDefinitionIndex = 74741;

	class LDScenePerformUIVisiableNode : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::System::Boolean, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Boolean>
	{
	public:
		static ::System::String** StaticGet_setupTag()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LDScenePerformUIVisiableNode_TypeDefinitionIndex)->GetStaticField(0x3F920);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMUIVISIABLENODE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMUIVISIABLENODE__CCTOR_OFFSET))();
		}

		::System::Boolean Invoke(::System::String* StageName, ::Il2CppArray<::System::String*>* UIViews, ::System::Boolean PerformVisibleState)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMUIVISIABLENODE_INVOKE_OFFSET))(this, StageName, UIViews, PerformVisibleState);
		}

		::System::Boolean CheckHavePerform(::System::String* stageName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEPERFORMUIVISIABLENODE_CHECKHAVEPERFORM_OFFSET))(this, stageName);
		}
	};
}
