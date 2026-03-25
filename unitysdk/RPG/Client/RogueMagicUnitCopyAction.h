#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5FEFAED860528596_85;
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICUNITCOPYACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA332F50)
#define RPG_CLIENT_ROGUEMAGICUNITCOPYACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0xA332FE0)
#define RPG_CLIENT_ROGUEMAGICUNITCOPYACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xA332BA0)
#define RPG_CLIENT_ROGUEMAGICUNITCOPYACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA332B60)
#define RPG_CLIENT_ROGUEMAGICUNITCOPYACTION_GET_SELECTUNITS_OFFSET UNITYSDK_OFFSET(0xA332B80)
#define RPG_CLIENT_ROGUEMAGICUNITCOPYACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0xA332BB0)
#define RPG_CLIENT_ROGUEMAGICUNITCOPYACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA332B70)
#define RPG_CLIENT_ROGUEMAGICUNITCOPYACTION_SET_SELECTUNITS_OFFSET UNITYSDK_OFFSET(0xA332B90)
#define RPG_CLIENT_ROGUEMAGICUNITCOPYACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xA332F90)
#define RPG_CLIENT_ROGUEMAGICUNITCOPYACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xA332BD0)
#define RPG_CLIENT_ROGUEMAGICUNITCOPYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA332BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicUnitCopyAction_TypeDefinitionIndex = 54528;

	class RogueMagicUnitCopyAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* _SelectUnits_k__BackingField; // 0x10
		::System::UInt32 _HintID_k__BackingField; // 0x18
		::System::UInt32 _RogueActionID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 actionID, ::Class_1_5FEFAED860528596_85* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_5FEFAED860528596_85*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITCOPYACTION__CTOR_OFFSET))(this, actionID, proto);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITCOPYACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITCOPYACTION_SET_ROGUEACTIONID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* get_SelectUnits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITCOPYACTION_GET_SELECTUNITS_OFFSET))(this);
		}

		::System::Void set_SelectUnits(::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITCOPYACTION_SET_SELECTUNITS_OFFSET))(this, value);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITCOPYACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITCOPYACTION_SET_HINTID_OFFSET))(this, value);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITCOPYACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITCOPYACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::String* GetUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITCOPYACTION_GETUIPATH_OFFSET))(this);
		}

		::System::Void _Construct(::Class_1_5FEFAED860528596_85* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_85*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITCOPYACTION__CONSTRUCT_OFFSET))(this, proto);
		}
	};
}
