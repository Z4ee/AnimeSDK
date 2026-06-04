#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"

class Class_1_4BC858D7C27E10ED_33;
class Class_1_D17272E82AE804C2_436;
namespace RPG::Client { class GridFightPortalData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_GET_MAXROLLTIMES_OFFSET UNITYSDK_OFFSET(0xBBCF410)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_GET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0xBBCF430)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_REROLL_OFFSET UNITYSDK_OFFSET(0xBBCF970)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SELECTPORTALBUFF_OFFSET UNITYSDK_OFFSET(0xBBCF7A0)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SET_MAXROLLTIMES_OFFSET UNITYSDK_OFFSET(0xBBCF420)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0xBBCF440)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0xBBCF750)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SYNC_OFFSET UNITYSDK_OFFSET(0xBBCF450)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xBBCFB30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPortalSelectAction_TypeDefinitionIndex = 60858;

	class GridFightPortalSelectAction : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightPortalData*>* RandomPortalDataList; // 0x18
		::System::UInt32 _MaxRollTimes_k__BackingField; // 0x20
		::System::UInt32 _RollTimes_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MaxRollTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_GET_MAXROLLTIMES_OFFSET))(this);
		}

		::System::Void set_MaxRollTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SET_MAXROLLTIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_RollTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_GET_ROLLTIMES_OFFSET))(this);
		}

		::System::Void set_RollTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SET_ROLLTIMES_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_4BC858D7C27E10ED_33* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_33*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Void SyncHandleRsp(::Class_1_D17272E82AE804C2_436* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_436*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SYNCHANDLERSP_OFFSET))(this, a1);
		}

		::System::Void SelectPortalBuff(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SELECTPORTALBUFF_OFFSET))(this, a1);
		}

		::System::Void Reroll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_REROLL_OFFSET))(this);
		}
	};
}
