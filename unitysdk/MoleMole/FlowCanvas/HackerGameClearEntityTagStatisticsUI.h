#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_HACKERGAMECLEARENTITYTAGSTATISTICSUI_INVOKE_OFFSET UNITYSDK_OFFSET(0x16038AD0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMECLEARENTITYTAGSTATISTICSUI__CTOR_OFFSET UNITYSDK_OFFSET(0x16038C10)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameClearEntityTagStatisticsUI_TypeDefinitionIndex = 67390;

	class HackerGameClearEntityTagStatisticsUI : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMECLEARENTITYTAGSTATISTICSUI__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMECLEARENTITYTAGSTATISTICSUI_INVOKE_OFFSET))(this);
		}
	};
}
