#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4BE2238A927E39F1_3;
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA334070)
#define RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0xA334100)
#define RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_GET_FORCESELECTUNITDATA_OFFSET UNITYSDK_OFFSET(0xA333C40)
#define RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xA333C20)
#define RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA333BE0)
#define RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_GET_SELECTSOURCECURCOUNT_OFFSET UNITYSDK_OFFSET(0xA333C60)
#define RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_GET_SELECTSOURCETOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xA333C80)
#define RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_GET_SELECTUNITS_OFFSET UNITYSDK_OFFSET(0xA333C00)
#define RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_SET_FORCESELECTUNITDATA_OFFSET UNITYSDK_OFFSET(0xA333C50)
#define RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0xA333C30)
#define RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA333BF0)
#define RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_SET_SELECTSOURCECURCOUNT_OFFSET UNITYSDK_OFFSET(0xA333C70)
#define RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_SET_SELECTSOURCETOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xA333C90)
#define RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_SET_SELECTUNITS_OFFSET UNITYSDK_OFFSET(0xA333C10)
#define RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xA3340B0)
#define RPG_CLIENT_ROGUEMAGICUNITSELECTACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xA333CB0)
#define RPG_CLIENT_ROGUEMAGICUNITSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA333CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicUnitSelectAction_TypeDefinitionIndex = 54530;

	class RogueMagicUnitSelectAction : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicUnitDataItem* _ForceSelectUnitData_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* _SelectUnits_k__BackingField; // 0x18
		::System::UInt32 _RogueActionID_k__BackingField; // 0x20
		::System::UInt32 _HintID_k__BackingField; // 0x24
		::System::UInt32 _SelectSourceCurCount_k__BackingField; // 0x28
		::System::UInt32 _SelectSourceTotalCount_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 actionID, ::Class_1_4BE2238A927E39F1_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_4BE2238A927E39F1_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITSELECTACTION__CTOR_OFFSET))(this, actionID, proto);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_SET_ROGUEACTIONID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* get_SelectUnits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_GET_SELECTUNITS_OFFSET))(this);
		}

		::System::Void set_SelectUnits(::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_SET_SELECTUNITS_OFFSET))(this, value);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_SET_HINTID_OFFSET))(this, value);
		}

		::RPG::Client::RogueMagicUnitDataItem* get_ForceSelectUnitData()
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_GET_FORCESELECTUNITDATA_OFFSET))(this);
		}

		::System::Void set_ForceSelectUnitData(::RPG::Client::RogueMagicUnitDataItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_SET_FORCESELECTUNITDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_SelectSourceCurCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_GET_SELECTSOURCECURCOUNT_OFFSET))(this);
		}

		::System::Void set_SelectSourceCurCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_SET_SELECTSOURCECURCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_SelectSourceTotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_GET_SELECTSOURCETOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_SelectSourceTotalCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_SET_SELECTSOURCETOTALCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::String* GetUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITSELECTACTION_GETUIPATH_OFFSET))(this);
		}

		::System::Void _Construct(::Class_1_4BE2238A927E39F1_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BE2238A927E39F1_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITSELECTACTION__CONSTRUCT_OFFSET))(this, proto);
		}
	};
}
