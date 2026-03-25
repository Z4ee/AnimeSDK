#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_77;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEBONUSSELECTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA2ED650)
#define RPG_CLIENT_ROGUEBONUSSELECTACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0xA2ED6E0)
#define RPG_CLIENT_ROGUEBONUSSELECTACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA2ED570)
#define RPG_CLIENT_ROGUEBONUSSELECTACTION_GET_SELECTBONUSIDS_OFFSET UNITYSDK_OFFSET(0xA2ED580)
#define RPG_CLIENT_ROGUEBONUSSELECTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xA2ED690)
#define RPG_CLIENT_ROGUEBONUSSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA2ED590)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBonusSelectAction_TypeDefinitionIndex = 54494;

	class RogueBonusSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectBonusIDs_k__BackingField; // 0x10
		::System::UInt32 _RogueActionID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 rogueActionID, ::Class_1_6E708EAB438EC183_77* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_6E708EAB438EC183_77*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBONUSSELECTACTION__CTOR_OFFSET))(this, rogueActionID, proto);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBONUSSELECTACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectBonusIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBONUSSELECTACTION_GET_SELECTBONUSIDS_OFFSET))(this);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBONUSSELECTACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBONUSSELECTACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::String* GetUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBONUSSELECTACTION_GETUIPATH_OFFSET))(this);
		}
	};
}
