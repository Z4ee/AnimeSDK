#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_ROOMLIMITTIME_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A0438B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_ROOMLIMITTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1A043A30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHadal_RoomLimitTime_TypeDefinitionIndex = 66751;

	class LDHadal_RoomLimitTime : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_ROOMLIMITTIME__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_ROOMLIMITTIME_INVOKE_OFFSET))(this);
		}
	};
}
