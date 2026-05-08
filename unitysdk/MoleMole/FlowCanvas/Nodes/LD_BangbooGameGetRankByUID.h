#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_BANGBOOGAMEGETRANKBYUID_INVOKE_OFFSET UNITYSDK_OFFSET(0x125C7070)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_BANGBOOGAMEGETRANKBYUID__CTOR_OFFSET UNITYSDK_OFFSET(0x125C70C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_BangbooGameGetRankByUID_TypeDefinitionIndex = 70222;

	class LD_BangbooGameGetRankByUID : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Int32, ::System::UInt32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BANGBOOGAMEGETRANKBYUID__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::UInt32 uid)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BANGBOOGAMEGETRANKBYUID_INVOKE_OFFSET))(this, uid);
		}
	};
}
