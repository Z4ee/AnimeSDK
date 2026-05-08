#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"

namespace MoleMole::Config { class InputEnableInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDINPUTENABLEACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1498F330)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINPUTENABLEACTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1498F4F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINPUTENABLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1498F4D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDInputEnableAction_TypeDefinitionIndex = 39911;

	class LDInputEnableAction : public ::FlowCanvas::Nodes::CallableActionNode_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::InputEnableInfo*>*>
	{
	public:
		static ::System::Int32* StaticGet_Level_Priority()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LDInputEnableAction_TypeDefinitionIndex)->GetStaticField(0x10FF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINPUTENABLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINPUTENABLEACTION__CCTOR_OFFSET))();
		}

		::System::Void Invoke(::System::String* tag, ::System::Collections::Generic::List_1<::MoleMole::Config::InputEnableInfo*>* infos)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::InputEnableInfo*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINPUTENABLEACTION_INVOKE_OFFSET))(this, tag, infos);
		}
	};
}
