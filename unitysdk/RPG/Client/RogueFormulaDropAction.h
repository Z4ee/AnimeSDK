#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_88;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEFORMULADROPACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x1BC887C0)
#define RPG_CLIENT_ROGUEFORMULADROPACTION_GET_DROPFORMULAIDS_OFFSET UNITYSDK_OFFSET(0x1BC88340)
#define RPG_CLIENT_ROGUEFORMULADROPACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0x1BC88320)
#define RPG_CLIENT_ROGUEFORMULADROPACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x1BC88300)
#define RPG_CLIENT_ROGUEFORMULADROPACTION_SET_DROPFORMULAIDS_OFFSET UNITYSDK_OFFSET(0x1BC88350)
#define RPG_CLIENT_ROGUEFORMULADROPACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0x1BC88330)
#define RPG_CLIENT_ROGUEFORMULADROPACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x1BC88310)
#define RPG_CLIENT_ROGUEFORMULADROPACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1BC88800)
#define RPG_CLIENT_ROGUEFORMULADROPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC88360)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaDropAction_TypeDefinitionIndex = 66995;

	class RogueFormulaDropAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _DropFormulaIDs_k__BackingField; // 0x10
		::System::UInt32 _RogueActionID_k__BackingField; // 0x18
		::System::UInt32 _HintID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_45BB92167AED63A0_88* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_45BB92167AED63A0_88*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADROPACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADROPACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADROPACTION_SET_ROGUEACTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADROPACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADROPACTION_SET_HINTID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DropFormulaIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADROPACTION_GET_DROPFORMULAIDS_OFFSET))(this);
		}

		::System::Void set_DropFormulaIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADROPACTION_SET_DROPFORMULAIDS_OFFSET))(this, a1);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADROPACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADROPACTION_TRIGGERACTION_OFFSET))(this);
		}
	};
}
