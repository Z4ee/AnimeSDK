#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_6.h"

class Class_3_B20F2CFBAA024FE3;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETUPUIACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1710E6B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETUPUIACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1710E800)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetupUIAction_TypeDefinitionIndex = 55113;

	class LDSetupUIAction : public ::FlowCanvas::Nodes::CallableActionNode_6<::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>
	{
	public:
		::Class_3_B20F2CFBAA024FE3* _cacheActionConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETUPUIACTION__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::System::String*>* HideUITags, ::System::Collections::Generic::List_1<::System::String*>* ShowUITags, ::System::Boolean IgnoreFadeAnimation, ::System::Int32 Priority, ::System::String* SetupTag, ::System::Collections::Generic::List_1<::System::String*>* HighLightTags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETUPUIACTION_INVOKE_OFFSET))(this, HideUITags, ShowUITags, IgnoreFadeAnimation, Priority, SetupTag, HighLightTags);
		}
	};
}
