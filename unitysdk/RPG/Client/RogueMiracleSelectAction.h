#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueSelectSourceType.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_74;
class Class_1_45BB92167AED63A0_75;
class Class_1_53763D498DB8321D_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xC7C3650)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0xC7C36E0)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xC7C29A0)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xC7C2960)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_GET_ROLLMIRACLELEFTTIMES_OFFSET UNITYSDK_OFFSET(0xC7C29C0)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_GET_ROLLMIRACLEMAXTIMES_OFFSET UNITYSDK_OFFSET(0xC7C29E0)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_GET_SELECTMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xC7C2980)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_REFRESHONROLLRSP_OFFSET UNITYSDK_OFFSET(0xC7C2DC0)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_SENDSELECTREQUEST_OFFSET UNITYSDK_OFFSET(0xC7C2F20)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0xC7C29B0)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xC7C2970)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_SET_ROLLMIRACLELEFTTIMES_OFFSET UNITYSDK_OFFSET(0xC7C29D0)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_SET_ROLLMIRACLEMAXTIMES_OFFSET UNITYSDK_OFFSET(0xC7C29F0)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_SET_SELECTMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xC7C2990)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xC7C3690)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC7C2B80)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0xC7C2CA0)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC7C2A00)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION__REFRESHROLLINFO_OFFSET UNITYSDK_OFFSET(0xC7C2B20)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION__REPORTSELECTMIRACLE_OFFSET UNITYSDK_OFFSET(0xC7C30D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleSelectAction_TypeDefinitionIndex = 62670;

	class RogueMiracleSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectMiracleIDs_k__BackingField; // 0x10
		::System::UInt32 _HintID_k__BackingField; // 0x18
		::RPG::Client::RogueSelectSourceType _SourceType; // 0x1C
		::System::UInt32 _RollMiracleLeftTimes_k__BackingField; // 0x20
		::System::UInt32 _RogueActionID_k__BackingField; // 0x24
		::System::UInt32 _RollMiracleMaxTimes_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_53763D498DB8321D_4* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_53763D498DB8321D_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::Class_1_45BB92167AED63A0_75* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_45BB92167AED63A0_75*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::UInt32 a1, ::Class_1_45BB92167AED63A0_74* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_45BB92167AED63A0_74*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_SET_ROGUEACTIONID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectMiracleIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_GET_SELECTMIRACLEIDS_OFFSET))(this);
		}

		::System::Void set_SelectMiracleIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_SET_SELECTMIRACLEIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_SET_HINTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RollMiracleLeftTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_GET_ROLLMIRACLELEFTTIMES_OFFSET))(this);
		}

		::System::Void set_RollMiracleLeftTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_SET_ROLLMIRACLELEFTTIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_RollMiracleMaxTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_GET_ROLLMIRACLEMAXTIMES_OFFSET))(this);
		}

		::System::Void set_RollMiracleMaxTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_SET_ROLLMIRACLEMAXTIMES_OFFSET))(this, a1);
		}

		::System::Void RefreshOnRollRsp(::Class_1_53763D498DB8321D_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_53763D498DB8321D_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_REFRESHONROLLRSP_OFFSET))(this, a1);
		}

		::System::Void SendSelectRequest(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION_SENDSELECTREQUEST_OFFSET))(this, a1);
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

		::System::Void _RefreshRollInfo(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION__REFRESHROLLINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _ReportSelectMiracle(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION__REPORTSELECTMIRACLE_OFFSET))(this, a1);
		}
	};
}
