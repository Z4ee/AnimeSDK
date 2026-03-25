#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_79;
namespace RPG::Client { class IRogueTournPersonaStyle; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xA35A850)
#define RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_GET_STYLELIST_OFFSET UNITYSDK_OFFSET(0xA35A740)
#define RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_SET_STYLELIST_OFFSET UNITYSDK_OFFSET(0xA35A750)
#define RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xA35A890)
#define RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xA35A7F0)
#define RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA35A760)
#define RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION__SETUPSTYLELIST_OFFSET UNITYSDK_OFFSET(0xA35A8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoguePersonaStyleSelectAction_TypeDefinitionIndex = 54560;

	class RoguePersonaStyleSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>* _StyleList_k__BackingField; // 0x10
		::System::UInt32 _RogueActionID; // 0x18

		::System::Void _ctor(::System::UInt32 actionID, ::Class_1_6E708EAB438EC183_79* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_6E708EAB438EC183_79*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION__CTOR_OFFSET))(this, actionID, proto);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>* get_StyleList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_GET_STYLELIST_OFFSET))(this);
		}

		::System::Void set_StyleList(::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_SET_STYLELIST_OFFSET))(this, value);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::Void _Construct(::Class_1_6E708EAB438EC183_79* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_79*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION__CONSTRUCT_OFFSET))(this, proto);
		}

		::System::Void _SetupStyleList(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* styleIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLESELECTACTION__SETUPSTYLELIST_OFFSET))(this, styleIDs);
		}
	};
}
