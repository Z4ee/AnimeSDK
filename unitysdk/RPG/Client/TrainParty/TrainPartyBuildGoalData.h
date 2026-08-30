#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_103;
class Class_1_7FF19F6206AF6DD7_110;
class Class_1_FDFA365FE186E8F2_31;
namespace RPG::Client::TrainParty { class TrainPartyBuildStepInfo; }
namespace RPG::GameCore { class TrainPartyAreaGoalConfigRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_CLEARSTEPREDDOT_OFFSET UNITYSDK_OFFSET(0x1BDD6E50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_GETSTEPINFOLIST_OFFSET UNITYSDK_OFFSET(0x1BDDD3F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_GET_GOALID_OFFSET UNITYSDK_OFFSET(0x1BDDD6D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1BDDD6F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_ISANYSTEPCANBUILD_OFFSET UNITYSDK_OFFSET(0x1BDDCF60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_REMOVEALLFINISHSTEPINFO_OFFSET UNITYSDK_OFFSET(0x1BDDD4B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_SET_GOALID_OFFSET UNITYSDK_OFFSET(0x1BDDD6E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1BDD7AE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_UPDATESTEPLIST_OFFSET UNITYSDK_OFFSET(0x1BDDC8A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BDD5E50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD7AD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__GETSTEPINFOBYSTEPID_OFFSET UNITYSDK_OFFSET(0x1BDDCBB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__ONSTEPSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1BDDCE00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__SYNCSTEPINFOS_OFFSET UNITYSDK_OFFSET(0x1BDDC140)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildGoalData_TypeDefinitionIndex = 74210;

	class TrainPartyBuildGoalData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildStepInfo*>* _StepInfoList; // 0x10
		::System::UInt32 _GoalID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Class_1_FDFA365FE186E8F2_31* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_7FF19F6206AF6DD7_110* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_110*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void UpdateStepList(::System::Collections::Generic::IList_1<::Class_1_1CBA230307F9C289_103*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_1CBA230307F9C289_103*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_UPDATESTEPLIST_OFFSET))(this, a1);
		}

		::System::Boolean IsAnyStepCanBuild(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_ISANYSTEPCANBUILD_OFFSET))(this, a1);
		}

		::System::Void ClearStepRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_CLEARSTEPREDDOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildStepInfo*>* GetStepInfoList(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildStepInfo*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_GETSTEPINFOLIST_OFFSET))(this, a1);
		}

		::System::Void RemoveAllFinishStepInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_REMOVEALLFINISHSTEPINFO_OFFSET))(this);
		}

		::System::Void _SyncStepInfos(::System::Collections::Generic::IList_1<::Class_1_1CBA230307F9C289_103*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_1CBA230307F9C289_103*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__SYNCSTEPINFOS_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildStepInfo* _GetStepInfoByStepID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildStepInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__GETSTEPINFOBYSTEPID_OFFSET))(this, a1);
		}

		::System::Void _OnStepStateChanged(::RPG::Client::TrainParty::TrainPartyBuildStepInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildStepInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__ONSTEPSTATECHANGED_OFFSET))(this, a1);
		}

		::System::UInt32 get_GoalID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_GET_GOALID_OFFSET))(this);
		}

		::System::Void set_GoalID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_SET_GOALID_OFFSET))(this, a1);
		}

		::RPG::GameCore::TrainPartyAreaGoalConfigRow* get_Row()
		{
			return ((::RPG::GameCore::TrainPartyAreaGoalConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_GET_ROW_OFFSET))(this);
		}
	};
}
