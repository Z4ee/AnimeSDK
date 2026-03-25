#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_69;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA33A930)
#define RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0xA33A9C0)
#define RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xA33A890)
#define RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA33A850)
#define RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_GET_SELECTMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xA33A870)
#define RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0xA33A8A0)
#define RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA33A860)
#define RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_SET_SELECTMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xA33A880)
#define RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xA33A970)
#define RPG_CLIENT_ROGUEMIRACLEREPAIRACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA33A8B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleRepairAction_TypeDefinitionIndex = 54545;

	class RogueMiracleRepairAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectMiracleIDs_k__BackingField; // 0x10
		::System::UInt32 _HintID_k__BackingField; // 0x18
		::System::UInt32 _RogueActionID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 actionID, ::Class_1_735612C94F558EAE_69* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_735612C94F558EAE_69*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEREPAIRACTION__CTOR_OFFSET))(this, actionID, proto);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_SET_ROGUEACTIONID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectMiracleIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_GET_SELECTMIRACLEIDS_OFFSET))(this);
		}

		::System::Void set_SelectMiracleIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_SET_SELECTMIRACLEIDS_OFFSET))(this, value);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_SET_HINTID_OFFSET))(this, value);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::String* GetUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_GETUIPATH_OFFSET))(this);
		}
	};
}
