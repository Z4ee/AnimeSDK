#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEINITENTITYTAGSTATISTICSUI_INVOKE_OFFSET UNITYSDK_OFFSET(0x19BD9050)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEINITENTITYTAGSTATISTICSUI_REGISTERVIRUSINDEX_OFFSET UNITYSDK_OFFSET(0x19BD92C0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEINITENTITYTAGSTATISTICSUI__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD9460)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameInitEntityTagStatisticsUI_TypeDefinitionIndex = 49274;

	class HackerGameInitEntityTagStatisticsUI : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEINITENTITYTAGSTATISTICSUI__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 virusOfConcern)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEINITENTITYTAGSTATISTICSUI_INVOKE_OFFSET))(this, virusOfConcern);
		}

		::System::Void RegisterVirusIndex(::System::Int32 virusIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEINITENTITYTAGSTATISTICSUI_REGISTERVIRUSINDEX_OFFSET))(this, virusIndex);
		}
	};
}
