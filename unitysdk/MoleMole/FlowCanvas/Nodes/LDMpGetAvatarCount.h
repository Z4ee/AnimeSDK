#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueOutput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETAVATARCOUNT_GETONLINECOUNT_OFFSET UNITYSDK_OFFSET(0x15113DC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETAVATARCOUNT_GETTEAMCOUNT_OFFSET UNITYSDK_OFFSET(0x15113F80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETAVATARCOUNT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x15113CB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETAVATARCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x15113FD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMpGetAvatarCount_TypeDefinitionIndex = 81143;

	class LDMpGetAvatarCount : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::System::Int32>* valueOutputOnlineCount; // 0xA8
		::FlowCanvas::ValueOutput_1<::System::Int32>* valueOutputTeamCount; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPGETAVATARCOUNT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPGETAVATARCOUNT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Int32 GetOnlineCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPGETAVATARCOUNT_GETONLINECOUNT_OFFSET))(this);
		}

		::System::Int32 GetTeamCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPGETAVATARCOUNT_GETTEAMCOUNT_OFFSET))(this);
		}
	};
}
