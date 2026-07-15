#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionUtils_SubMissionSortItem; }

#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18063B70)
#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS31_0___ADDTOSUBMISSIONCONNECTGRAPH_B__0_OFFSET UNITYSDK_OFFSET(0x180640B0)
#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS31_0___ADDTOSUBMISSIONCONNECTGRAPH_B__1_OFFSET UNITYSDK_OFFSET(0x180640E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionUtils___c__DisplayClass31_0_TypeDefinitionIndex = 63250;

	class MissionUtils___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::System::UInt32 parentSubMissionID; // 0x10
		::System::UInt32 childSubMissionID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __AddToSubMissionConnectGraph_b__0(::RPG::Client::MissionUtils_SubMissionSortItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionUtils_SubMissionSortItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS31_0___ADDTOSUBMISSIONCONNECTGRAPH_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __AddToSubMissionConnectGraph_b__1(::RPG::Client::MissionUtils_SubMissionSortItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionUtils_SubMissionSortItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS31_0___ADDTOSUBMISSIONCONNECTGRAPH_B__1_OFFSET))(this, a1);
		}
	};
}
