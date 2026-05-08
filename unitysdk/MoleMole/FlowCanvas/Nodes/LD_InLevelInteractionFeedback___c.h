#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELINTERACTIONFEEDBACK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E177C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELINTERACTIONFEEDBACK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10E17800)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELINTERACTIONFEEDBACK___C__REGISTERPORTS_B__2_1_OFFSET UNITYSDK_OFFSET(0x10E17810)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_InLevelInteractionFeedback___c_TypeDefinitionIndex = 75939;

	class LD_InLevelInteractionFeedback___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__2_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LD_InLevelInteractionFeedback___c_TypeDefinitionIndex)->GetStaticField(0x2E7D0);
		}
		static ::MoleMole::FlowCanvas::Nodes::LD_InLevelInteractionFeedback___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LD_InLevelInteractionFeedback___c**)Il2CppClass::FromTypeDefinitionIndex(LD_InLevelInteractionFeedback___c_TypeDefinitionIndex)->GetStaticField(0x2E7D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELINTERACTIONFEEDBACK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELINTERACTIONFEEDBACK___C__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELINTERACTIONFEEDBACK___C__REGISTERPORTS_B__2_1_OFFSET))(this);
		}
	};
}
