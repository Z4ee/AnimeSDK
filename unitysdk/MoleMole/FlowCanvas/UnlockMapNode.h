#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_UNLOCKMAPNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16E55700)
#define MOLEMOLE_FLOWCANVAS_UNLOCKMAPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16E55750)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int UnlockMapNode_TypeDefinitionIndex = 45899;

	class UnlockMapNode : public ::FlowCanvas::Nodes::CallableActionNode_2<::System::Boolean, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_UNLOCKMAPNODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean isRandom, ::System::Int32 num)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_UNLOCKMAPNODE_INVOKE_OFFSET))(this, isRandom, num);
		}
	};
}
