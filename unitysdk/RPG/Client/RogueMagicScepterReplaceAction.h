#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_355A2207C3B7A99D_97;
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xC7B35C0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0xC7B3650)
#define RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_GET_NEWSCEPTER_OFFSET UNITYSDK_OFFSET(0xC7B3440)
#define RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xC7B3420)
#define RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_SENDSELECTREQUEST_OFFSET UNITYSDK_OFFSET(0xC7B3510)
#define RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_SET_NEWSCEPTER_OFFSET UNITYSDK_OFFSET(0xC7B3450)
#define RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xC7B3430)
#define RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xC7B3600)
#define RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xC7B3470)
#define RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC7B3460)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicScepterReplaceAction_TypeDefinitionIndex = 62647;

	class RogueMagicScepterReplaceAction : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicScepterDataItem* _NewScepter_k__BackingField; // 0x10
		::System::UInt32 _RogueActionID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_355A2207C3B7A99D_97* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_355A2207C3B7A99D_97*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_SET_ROGUEACTIONID_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMagicScepterDataItem* get_NewScepter()
		{
			return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_GET_NEWSCEPTER_OFFSET))(this);
		}

		::System::Void set_NewScepter(::RPG::Client::RogueMagicScepterDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_SET_NEWSCEPTER_OFFSET))(this, a1);
		}

		::System::Void SendSelectRequest(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION_SENDSELECTREQUEST_OFFSET))(this, a1, a2, a3);
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

		::System::Void _Construct(::Class_1_355A2207C3B7A99D_97* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_97*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERREPLACEACTION__CONSTRUCT_OFFSET))(this, a1);
		}
	};
}
