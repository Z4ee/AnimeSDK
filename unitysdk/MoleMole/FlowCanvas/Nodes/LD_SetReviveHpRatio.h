#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETREVIVEHPRATIO_INVOKE_OFFSET UNITYSDK_OFFSET(0x15421F30)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETREVIVEHPRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x15422090)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SetReviveHpRatio_TypeDefinitionIndex = 55958;

	class LD_SetReviveHpRatio : public ::FlowCanvas::Nodes::CallableActionNode_2<::System::Single, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETREVIVEHPRATIO__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Single HPRatio, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETREVIVEHPRATIO_INVOKE_OFFSET))(this, HPRatio, index);
		}
	};
}
