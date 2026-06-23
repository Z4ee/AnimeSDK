#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace MoleMole::FlowCanvas::Nodes { class AbyssS2InteractionBuildData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CREATEINTERACTIONBUILDDATA_INNERBUILD_OFFSET UNITYSDK_OFFSET(0x12618860)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CREATEINTERACTIONBUILDDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x12618790)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CREATEINTERACTIONBUILDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12618AB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_CreateInteractionBuildData_TypeDefinitionIndex = 66318;

	class LD_AbyssS2_CreateInteractionBuildData : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*>*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CREATEINTERACTIONBUILDDATA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*>* Invoke(::System::Int32 interactionPool)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CREATEINTERACTIONBUILDDATA_INVOKE_OFFSET))(this, interactionPool);
		}

		::System::Void InnerBuild(::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*>*& container, ::System::Int32 interactionPool)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*>*&, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CREATEINTERACTIONBUILDDATA_INNERBUILD_OFFSET))(this, container, interactionPool);
		}
	};
}
