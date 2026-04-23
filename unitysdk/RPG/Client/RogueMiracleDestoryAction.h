#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_69;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMIRACLEDESTORYACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xB06FB90)
#define RPG_CLIENT_ROGUEMIRACLEDESTORYACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0xB06FC20)
#define RPG_CLIENT_ROGUEMIRACLEDESTORYACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xB06FA20)
#define RPG_CLIENT_ROGUEMIRACLEDESTORYACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xB06F9E0)
#define RPG_CLIENT_ROGUEMIRACLEDESTORYACTION_GET_SELECTMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xB06FA00)
#define RPG_CLIENT_ROGUEMIRACLEDESTORYACTION_SENDSELECTREQUEST_OFFSET UNITYSDK_OFFSET(0xB06FB00)
#define RPG_CLIENT_ROGUEMIRACLEDESTORYACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0xB06FA30)
#define RPG_CLIENT_ROGUEMIRACLEDESTORYACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xB06F9F0)
#define RPG_CLIENT_ROGUEMIRACLEDESTORYACTION_SET_SELECTMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xB06FA10)
#define RPG_CLIENT_ROGUEMIRACLEDESTORYACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xB06FBD0)
#define RPG_CLIENT_ROGUEMIRACLEDESTORYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB06FA40)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleDestoryAction_TypeDefinitionIndex = 61727;

	class RogueMiracleDestoryAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectMiracleIDs_k__BackingField; // 0x10
		::System::UInt32 _HintID_k__BackingField; // 0x18
		::System::UInt32 _RogueActionID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 actionID, ::Class_1_45BB92167AED63A0_69* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_45BB92167AED63A0_69*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDESTORYACTION__CTOR_OFFSET))(this, actionID, proto);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDESTORYACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDESTORYACTION_SET_ROGUEACTIONID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectMiracleIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDESTORYACTION_GET_SELECTMIRACLEIDS_OFFSET))(this);
		}

		::System::Void set_SelectMiracleIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDESTORYACTION_SET_SELECTMIRACLEIDS_OFFSET))(this, value);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDESTORYACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDESTORYACTION_SET_HINTID_OFFSET))(this, value);
		}

		::System::Void SendSelectRequest(::System::UInt32 selectMiracleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDESTORYACTION_SENDSELECTREQUEST_OFFSET))(this, selectMiracleID);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDESTORYACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDESTORYACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::String* GetUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDESTORYACTION_GETUIPATH_OFFSET))(this);
		}
	};
}
