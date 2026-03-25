#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_72;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA33BD80)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0xA33BE10)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xA33BCA0)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA33BC60)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GET_SELECTMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xA33BC80)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0xA33BCB0)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA33BC70)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_SET_SELECTMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xA33BC90)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xA33BDC0)
#define RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA33BCC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleSelectDestoryedAction_TypeDefinitionIndex = 54552;

	class RogueMiracleSelectDestoryedAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectMiracleIDs_k__BackingField; // 0x10
		::System::UInt32 _RogueActionID_k__BackingField; // 0x18
		::System::UInt32 _HintID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 actionID, ::Class_1_735612C94F558EAE_72* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_735612C94F558EAE_72*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION__CTOR_OFFSET))(this, actionID, proto);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_SET_ROGUEACTIONID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectMiracleIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GET_SELECTMIRACLEIDS_OFFSET))(this);
		}

		::System::Void set_SelectMiracleIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_SET_SELECTMIRACLEIDS_OFFSET))(this, value);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTDESTORYEDACTION_SET_HINTID_OFFSET))(this, value);
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
