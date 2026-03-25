#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"

class Class_1_99BD961747420BEB_31;
class Class_1_FA4F4A67B1C04320_407;
namespace RPG::Client { class GridFightPortalData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_GET_MAXROLLTIMES_OFFSET UNITYSDK_OFFSET(0x9883A40)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_GET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0x9883A60)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_REROLL_OFFSET UNITYSDK_OFFSET(0x9883F20)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SELECTPORTALBUFF_OFFSET UNITYSDK_OFFSET(0x9883D50)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SET_MAXROLLTIMES_OFFSET UNITYSDK_OFFSET(0x9883A50)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0x9883A70)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0x9883D00)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SYNC_OFFSET UNITYSDK_OFFSET(0x9883A80)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x98840E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPortalSelectAction_TypeDefinitionIndex = 52848;

	class GridFightPortalSelectAction : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightPortalData*>* RandomPortalDataList; // 0x18
		::System::UInt32 _RollTimes_k__BackingField; // 0x20
		::System::UInt32 _MaxRollTimes_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MaxRollTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_GET_MAXROLLTIMES_OFFSET))(this);
		}

		::System::Void set_MaxRollTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SET_MAXROLLTIMES_OFFSET))(this, value);
		}

		::System::UInt32 get_RollTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_GET_ROLLTIMES_OFFSET))(this);
		}

		::System::Void set_RollTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SET_ROLLTIMES_OFFSET))(this, value);
		}

		::System::Void Sync(::Class_1_99BD961747420BEB_31* info, ::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_31*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SYNC_OFFSET))(this, info, actionID);
		}

		::System::Void SyncHandleRsp(::Class_1_FA4F4A67B1C04320_407* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_407*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SYNCHANDLERSP_OFFSET))(this, rsp);
		}

		::System::Void SelectPortalBuff(::System::UInt32 portalId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SELECTPORTALBUFF_OFFSET))(this, portalId);
		}

		::System::Void Reroll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_REROLL_OFFSET))(this);
		}
	};
}
