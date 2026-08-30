#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"

class Class_1_10F56A639581CEB1_13;
class Class_1_D17272E82AE804C2_507;
namespace RPG::Client { class GridFightPortalData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_GET_MAXROLLTIMES_OFFSET UNITYSDK_OFFSET(0x1CA56FE0)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_GET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0x1CA57000)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_REROLL_OFFSET UNITYSDK_OFFSET(0x1CA57580)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SELECTPORTALBUFF_OFFSET UNITYSDK_OFFSET(0x1CA573B0)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SET_MAXROLLTIMES_OFFSET UNITYSDK_OFFSET(0x1CA56FF0)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0x1CA57010)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0x1CA57360)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SYNC_OFFSET UNITYSDK_OFFSET(0x1CA57020)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA57740)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPortalSelectAction_TypeDefinitionIndex = 65143;

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

		::System::Void Sync(::Class_1_10F56A639581CEB1_13* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_10F56A639581CEB1_13*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Void SyncHandleRsp(::Class_1_D17272E82AE804C2_507* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_507*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SYNCHANDLERSP_OFFSET))(this, a1);
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
