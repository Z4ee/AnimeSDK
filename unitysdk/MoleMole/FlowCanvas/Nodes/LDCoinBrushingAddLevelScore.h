#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGADDLEVELSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16D35300)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGADDLEVELSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x16D35560)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCoinBrushingAddLevelScore_TypeDefinitionIndex = 53689;

	class LDCoinBrushingAddLevelScore : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGADDLEVELSCORE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Single a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGADDLEVELSCORE_INVOKE_OFFSET))(this, a);
		}
	};
}
