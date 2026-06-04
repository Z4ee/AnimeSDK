#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_455008579EB95638_87;
namespace RPG::Client { class RogueBuffData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEBUFFDROPACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xC7721A0)
#define RPG_CLIENT_ROGUEBUFFDROPACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0xC772230)
#define RPG_CLIENT_ROGUEBUFFDROPACTION_GET_CANDROPBUFFS_OFFSET UNITYSDK_OFFSET(0xC771B20)
#define RPG_CLIENT_ROGUEBUFFDROPACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xC771B00)
#define RPG_CLIENT_ROGUEBUFFDROPACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xC771AE0)
#define RPG_CLIENT_ROGUEBUFFDROPACTION_SENDSELECTREQUEST_OFFSET UNITYSDK_OFFSET(0xC771E90)
#define RPG_CLIENT_ROGUEBUFFDROPACTION_SET_CANDROPBUFFS_OFFSET UNITYSDK_OFFSET(0xC771B30)
#define RPG_CLIENT_ROGUEBUFFDROPACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0xC771B10)
#define RPG_CLIENT_ROGUEBUFFDROPACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xC771AF0)
#define RPG_CLIENT_ROGUEBUFFDROPACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xC7721E0)
#define RPG_CLIENT_ROGUEBUFFDROPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC771B40)
#define RPG_CLIENT_ROGUEBUFFDROPACTION__REPORTSDKSELECTION_OFFSET UNITYSDK_OFFSET(0xC771F30)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffDropAction_TypeDefinitionIndex = 62621;

	class RogueBuffDropAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* _CanDropBuffs_k__BackingField; // 0x10
		::System::UInt32 _HintID_k__BackingField; // 0x18
		::System::UInt32 _RogueActionID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_455008579EB95638_87* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_455008579EB95638_87*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDROPACTION__CTOR_OFFSET))(this, a1, a2);
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
