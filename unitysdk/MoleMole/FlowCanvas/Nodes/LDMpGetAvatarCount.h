#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueOutput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETAVATARCOUNT_GETONLINECOUNT_OFFSET UNITYSDK_OFFSET(0x10BA58A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETAVATARCOUNT_GETTEAMCOUNT_OFFSET UNITYSDK_OFFSET(0x10BA5A60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETAVATARCOUNT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10BA5790)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETAVATARCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x10BA5AB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMpGetAvatarCount_TypeDefinitionIndex = 70992;

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
