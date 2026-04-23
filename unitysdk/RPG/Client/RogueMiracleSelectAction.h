#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueSelectSourceType.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_72;
class Class_1_45BB92167AED63A0_73;
class Class_1_53763D498DB8321D_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xB073110)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0xB0731A0)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xB0723E0)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xB0723A0)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_GET_ROLLMIRACLELEFTTIMES_OFFSET UNITYSDK_OFFSET(0xB072400)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_GET_ROLLMIRACLEMAXTIMES_OFFSET UNITYSDK_OFFSET(0xB072420)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_GET_SELECTMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xB0723C0)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_REFRESHONROLLRSP_OFFSET UNITYSDK_OFFSET(0xB072800)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_SENDSELECTREQUEST_OFFSET UNITYSDK_OFFSET(0xB072960)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0xB0723F0)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xB0723B0)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_SET_ROLLMIRACLELEFTTIMES_OFFSET UNITYSDK_OFFSET(0xB072410)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_SET_ROLLMIRACLEMAXTIMES_OFFSET UNITYSDK_OFFSET(0xB072430)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_SET_SELECTMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xB0723D0)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xB073150)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB0725C0)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0xB0726E0)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB072440)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION__REFRESHROLLINFO_OFFSET UNITYSDK_OFFSET(0xB072560)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION__REPORTSELECTMIRACLE_OFFSET UNITYSDK_OFFSET(0xB072B10)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleSelectAction_TypeDefinitionIndex = 61737;

	class RogueMiracleSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectMiracleIDs_k__BackingField; // 0x10
		::System::UInt32 _RollMiracleLeftTimes_k__BackingField; // 0x18
		::System::UInt32 _RogueActionID_k__BackingField; // 0x1C
		::RPG::Client::RogueSelectSourceType _SourceType; // 0x20
		::System::UInt32 _RollMiracleMaxTimes_k__BackingField; // 0x24
		::System::UInt32 _HintID_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 actionID, ::Class_1_53763D498DB8321D_7* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_53763D498DB8321D_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION__CTOR_OFFSET))(this, actionID, proto);
		}

		::System::Void _ctor_1(::System::UInt32 actionID, ::Class_1_45BB92167AED63A0_73* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_45BB92167AED63A0_73*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION__CTOR_1_OFFSET))(this, actionID, proto);
		}

		::System::Void _ctor_2(::System::UInt32 actionID, ::Class_1_45BB92167AED63A0_72* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_45BB92167AED63A0_72*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION__CTOR_2_OFFSET))(this, actionID, proto);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_SET_ROGUEACTIONID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectMiracleIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_GET_SELECTMIRACLEIDS_OFFSET))(this);
		}

		::System::Void set_SelectMiracleIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_SET_SELECTMIRACLEIDS_OFFSET))(this, value);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_SET_HINTID_OFFSET))(this, value);
		}

		::System::UInt32 get_RollMiracleLeftTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_GET_ROLLMIRACLELEFTTIMES_OFFSET))(this);
		}

		::System::Void set_RollMiracleLeftTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_SET_ROLLMIRACLELEFTTIMES_OFFSET))(this, value);
		}

		::System::UInt32 get_RollMiracleMaxTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_GET_ROLLMIRACLEMAXTIMES_OFFSET))(this);
		}

		::System::Void set_RollMiracleMaxTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_SET_ROLLMIRACLEMAXTIMES_OFFSET))(this, value);
		}

		::System::Void RefreshOnRollRsp(::Class_1_53763D498DB8321D_7* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_53763D498DB8321D_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_REFRESHONROLLRSP_OFFSET))(this, proto);
		}

		::System::Void SendSelectRequest(::System::UInt32 selectMiracleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_SENDSELECTREQUEST_OFFSET))(this, selectMiracleID);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::String* GetUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_GETUIPATH_OFFSET))(this);
		}

		::System::Void _RefreshRollInfo(::System::UInt32 leftTimes, ::System::UInt32 totalTimes)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION__REFRESHROLLINFO_OFFSET))(this, leftTimes, totalTimes);
		}

		::System::Void _ReportSelectMiracle(::System::UInt32 selectedMiracleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION__REPORTSELECTMIRACLE_OFFSET))(this, selectedMiracleID);
		}
	};
}
