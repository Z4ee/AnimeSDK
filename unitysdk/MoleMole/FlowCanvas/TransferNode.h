#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_TRANSFERNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x12332D80)
#define MOLEMOLE_FLOWCANVAS_TRANSFERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12332DD0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int TransferNode_TypeDefinitionIndex = 50569;

	class TransferNode : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_TRANSFERNODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean isRandom)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_TRANSFERNODE_INVOKE_OFFSET))(this, isRandom);
		}
	};
}
