#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_83;
namespace RPG::Client { class RogueBuffData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEBUFFDROPACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x1BC78A20)
#define RPG_CLIENT_ROGUEBUFFDROPACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0x1BC78AB0)
#define RPG_CLIENT_ROGUEBUFFDROPACTION_GET_CANDROPBUFFS_OFFSET UNITYSDK_OFFSET(0x1BC78250)
#define RPG_CLIENT_ROGUEBUFFDROPACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0x1BC78230)
#define RPG_CLIENT_ROGUEBUFFDROPACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x1BC78210)
#define RPG_CLIENT_ROGUEBUFFDROPACTION_SENDSELECTREQUEST_OFFSET UNITYSDK_OFFSET(0x1BC786F0)
#define RPG_CLIENT_ROGUEBUFFDROPACTION_SET_CANDROPBUFFS_OFFSET UNITYSDK_OFFSET(0x1BC78260)
#define RPG_CLIENT_ROGUEBUFFDROPACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0x1BC78240)
#define RPG_CLIENT_ROGUEBUFFDROPACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x1BC78220)
#define RPG_CLIENT_ROGUEBUFFDROPACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1BC78A60)
#define RPG_CLIENT_ROGUEBUFFDROPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC78270)
#define RPG_CLIENT_ROGUEBUFFDROPACTION__REPORTSDKSELECTION_OFFSET UNITYSDK_OFFSET(0x1BC78790)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffDropAction_TypeDefinitionIndex = 66979;

	class RogueBuffDropAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* _CanDropBuffs_k__BackingField; // 0x10
		::System::UInt32 _RogueActionID_k__BackingField; // 0x18
		::System::UInt32 _HintID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_7FF19F6206AF6DD7_83* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_7FF19F6206AF6DD7_83*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDROPACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDROPACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDROPACTION_SET_ROGUEACTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDROPACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDROPACTION_SET_HINTID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* get_CanDropBuffs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDROPACTION_GET_CANDROPBUFFS_OFFSET))(this);
		}

		::System::Void set_CanDropBuffs(::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDROPACTION_SET_CANDROPBUFFS_OFFSET))(this, a1);
		}

		::System::Void SendSelectRequest(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDROPACTION_SENDSELECTREQUEST_OFFSET))(this, a1);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDROPACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDROPACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::String* GetUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDROPACTION_GETUIPATH_OFFSET))(this);
		}

		::System::Void _ReportSDKSelection(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDROPACTION__REPORTSDKSELECTION_OFFSET))(this, a1);
		}
	};
}
