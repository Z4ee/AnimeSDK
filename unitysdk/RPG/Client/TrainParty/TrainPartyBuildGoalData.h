#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_455008579EB95638_114;
class Class_1_668FE281FA72D3E8_30;
class Class_1_7FF19F6206AF6DD7_54;
namespace RPG::Client::TrainParty { class TrainPartyBuildStepInfo; }
namespace RPG::GameCore { class TrainPartyAreaGoalConfigRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_CLEARSTEPREDDOT_OFFSET UNITYSDK_OFFSET(0xCA93510)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_GETSTEPINFOLIST_OFFSET UNITYSDK_OFFSET(0xCA98A30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_GET_GOALID_OFFSET UNITYSDK_OFFSET(0xCA98C70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xCA98C90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_ISANYSTEPCANBUILD_OFFSET UNITYSDK_OFFSET(0xCA986B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_REMOVEALLFINISHSTEPINFO_OFFSET UNITYSDK_OFFSET(0xCA98AF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_SET_GOALID_OFFSET UNITYSDK_OFFSET(0xCA98C80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xCA941A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_UPDATESTEPLIST_OFFSET UNITYSDK_OFFSET(0xCA980F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCA927D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCA94190)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__GETSTEPINFOBYSTEPID_OFFSET UNITYSDK_OFFSET(0xCA98330)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__ONSTEPSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xCA98580)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__SYNCSTEPINFOS_OFFSET UNITYSDK_OFFSET(0xCA97BD0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildGoalData_TypeDefinitionIndex = 69390;

	class TrainPartyBuildGoalData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildStepInfo*>* _StepInfoList; // 0x10
		::System::UInt32 _GoalID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Class_1_7FF19F6206AF6DD7_54* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_54*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_455008579EB95638_114* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_114*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void UpdateStepList(::System::Collections::Generic::IList_1<::Class_1_668FE281FA72D3E8_30*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_668FE281FA72D3E8_30*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_UPDATESTEPLIST_OFFSET))(this, a1);
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

		::System::Void _SyncStepInfos(::System::Collections::Generic::IList_1<::Class_1_668FE281FA72D3E8_30*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_668FE281FA72D3E8_30*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__SYNCSTEPINFOS_OFFSET))(this, a1);
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
