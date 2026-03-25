#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C03D623E9F32FBCB_89;
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA32F000)
#define RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0xA32F090)
#define RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_GET_NEWSCEPTER_OFFSET UNITYSDK_OFFSET(0xA32EE80)
#define RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA32EE60)
#define RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_SENDSELECTREQUEST_OFFSET UNITYSDK_OFFSET(0xA32EF50)
#define RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_SET_NEWSCEPTER_OFFSET UNITYSDK_OFFSET(0xA32EE90)
#define RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA32EE70)
#define RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xA32F040)
#define RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xA32EEB0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA32EEA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicScepterReplaceAction_TypeDefinitionIndex = 54526;

	class RogueMagicScepterReplaceAction : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicScepterDataItem* _NewScepter_k__BackingField; // 0x10
		::System::UInt32 _RogueActionID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 actionID, ::Class_1_C03D623E9F32FBCB_89* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C03D623E9F32FBCB_89*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION__CTOR_OFFSET))(this, actionID, proto);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_SET_ROGUEACTIONID_OFFSET))(this, value);
		}

		::RPG::Client::RogueMagicScepterDataItem* get_NewScepter()
		{
			return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_GET_NEWSCEPTER_OFFSET))(this);
		}

		::System::Void set_NewScepter(::RPG::Client::RogueMagicScepterDataItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_SET_NEWSCEPTER_OFFSET))(this, value);
		}

		::System::Void SendSelectRequest(::System::UInt32 selectScepterID, ::System::UInt32 selectScepterLevel, ::System::Boolean isSkip)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_SENDSELECTREQUEST_OFFSET))(this, selectScepterID, selectScepterLevel, isSkip);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::String* GetUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_GETUIPATH_OFFSET))(this);
		}

		::System::Void _Construct(::Class_1_C03D623E9F32FBCB_89* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_89*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION__CONSTRUCT_OFFSET))(this, proto);
		}
	};
}
