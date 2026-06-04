#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_73;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xC7C38F0)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0xC7C3980)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xC7C3810)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xC7C37D0)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GET_SELECTMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xC7C37F0)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0xC7C3820)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xC7C37E0)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_SET_SELECTMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xC7C3800)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xC7C3930)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC7C3830)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleSelectDestoryedAction_TypeDefinitionIndex = 62673;

	class RogueMiracleSelectDestoryedAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectMiracleIDs_k__BackingField; // 0x10
		::System::UInt32 _RogueActionID_k__BackingField; // 0x18
		::System::UInt32 _HintID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_45BB92167AED63A0_73* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_45BB92167AED63A0_73*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_SET_ROGUEACTIONID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectMiracleIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GET_SELECTMIRACLEIDS_OFFSET))(this);
		}

		::System::Void set_SelectMiracleIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_SET_SELECTMIRACLEIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_SET_HINTID_OFFSET))(this, a1);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::String* GetUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GETUIPATH_OFFSET))(this);
		}
	};
}
