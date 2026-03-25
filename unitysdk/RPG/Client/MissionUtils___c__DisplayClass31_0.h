#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionUtils_SubMissionSortItem; }

#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9BFE980)
#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS31_0___ADDTOSUBMISSIONCONNECTGRAPH_B__0_OFFSET UNITYSDK_OFFSET(0x9BFED30)
#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS31_0___ADDTOSUBMISSIONCONNECTGRAPH_B__1_OFFSET UNITYSDK_OFFSET(0x9BFED60)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionUtils___c__DisplayClass31_0_TypeDefinitionIndex = 53807;

	class MissionUtils___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::System::UInt32 parentSubMissionID; // 0x10
		::System::UInt32 childSubMissionID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __AddToSubMissionConnectGraph_b__0(::RPG::Client::MissionUtils_SubMissionSortItem* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionUtils_SubMissionSortItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS31_0___ADDTOSUBMISSIONCONNECTGRAPH_B__0_OFFSET))(this, item);
		}

		::System::Boolean __AddToSubMissionConnectGraph_b__1(::RPG::Client::MissionUtils_SubMissionSortItem* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionUtils_SubMissionSortItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS31_0___ADDTOSUBMISSIONCONNECTGRAPH_B__1_OFFSET))(this, item);
		}
	};
}
