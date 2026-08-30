#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_86;
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xDEEE860)
#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0xDEEE8F0)
#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xDEEE340)
#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xDEEE300)
#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_GET_SELECTUNITS_OFFSET UNITYSDK_OFFSET(0xDEEE320)
#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0xDEEE350)
#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xDEEE310)
#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_SET_SELECTUNITS_OFFSET UNITYSDK_OFFSET(0xDEEE330)
#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xDEEE8A0)
#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xDEEE370)
#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xDEEE360)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicUnitUpgradeAction_TypeDefinitionIndex = 67010;

	class RogueMagicUnitUpgradeAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* _SelectUnits_k__BackingField; // 0x10
		::System::UInt32 _RogueActionID_k__BackingField; // 0x18
		::System::UInt32 _HintID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_7FF19F6206AF6DD7_86* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_7FF19F6206AF6DD7_86*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_SET_ROGUEACTIONID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* get_SelectUnits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_GET_SELECTUNITS_OFFSET))(this);
		}

		::System::Void set_SelectUnits(::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_SET_SELECTUNITS_OFFSET))(this, a1);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_SET_HINTID_OFFSET))(this, a1);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::String* GetUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_GETUIPATH_OFFSET))(this);
		}

		::System::Void _Construct(::Class_1_7FF19F6206AF6DD7_86* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_86*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION__CONSTRUCT_OFFSET))(this, a1);
		}
	};
}
