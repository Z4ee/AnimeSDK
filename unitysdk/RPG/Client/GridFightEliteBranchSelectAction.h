#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"

class Class_1_FA4F4A67B1C04320_396;
class Class_1_FA4F4A67B1C04320_407;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_GET_MAXREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x97F8830)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_GET_REFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x97F8850)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_PENDINGBRANCH_OFFSET UNITYSDK_OFFSET(0x97F8A40)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_REFRESHBRANCH_OFFSET UNITYSDK_OFFSET(0x97F8A90)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SELECTBRANCH_OFFSET UNITYSDK_OFFSET(0x97F8980)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SET_MAXREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x97F8840)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SET_REFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x97F8860)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0x97F8910)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SYNC_OFFSET UNITYSDK_OFFSET(0x97F8870)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x97F8C50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEliteBranchSelectAction_TypeDefinitionIndex = 52818;

	class GridFightEliteBranchSelectAction : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* OptionIDList; // 0x18
		::System::UInt32 PendingOptionPos; // 0x20
		::System::UInt32 _RefreshTimes_k__BackingField; // 0x24
		::System::UInt32 _MaxRefreshTimes_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MaxRefreshTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_GET_MAXREFRESHTIMES_OFFSET))(this);
		}

		::System::Void set_MaxRefreshTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SET_MAXREFRESHTIMES_OFFSET))(this, value);
		}

		::System::UInt32 get_RefreshTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_GET_REFRESHTIMES_OFFSET))(this);
		}

		::System::Void set_RefreshTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SET_REFRESHTIMES_OFFSET))(this, value);
		}

		::System::Void Sync(::Class_1_FA4F4A67B1C04320_396* info, ::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_396*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SYNC_OFFSET))(this, info, actionID);
		}

		::System::Void SyncHandleRsp(::Class_1_FA4F4A67B1C04320_407* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_407*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SYNCHANDLERSP_OFFSET))(this, rsp);
		}

		::System::Void SelectBranch(::System::UInt32 optionPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SELECTBRANCH_OFFSET))(this, optionPos);
		}

		::System::Void PendingBranch(::System::UInt32 optionPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_PENDINGBRANCH_OFFSET))(this, optionPos);
		}

		::System::Void RefreshBranch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_REFRESHBRANCH_OFFSET))(this);
		}
	};
}
