#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftTalentAssistantState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_102;
class Class_0_16E4307DCC419505_150;
class Class_0_16E4307DCC419505_397;
namespace System { class Action; }

#define CLASS_1_04E767430AD06AF5_ADD_HANDLESHOWDETAIL_OFFSET UNITYSDK_OFFSET(0x158070E0)
#define CLASS_1_04E767430AD06AF5_GET_ACTORCONFIG_OFFSET UNITYSDK_OFFSET(0x158070A0)
#define CLASS_1_04E767430AD06AF5_GET_STATE_OFFSET UNITYSDK_OFFSET(0x158070C0)
#define CLASS_1_04E767430AD06AF5_GET_TALENTPATHCONFIG_OFFSET UNITYSDK_OFFSET(0x15807080)
#define CLASS_1_04E767430AD06AF5_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0x158071A0)
#define CLASS_1_04E767430AD06AF5_REMOVE_HANDLESHOWDETAIL_OFFSET UNITYSDK_OFFSET(0x15807140)
#define CLASS_1_04E767430AD06AF5_SET_ACTORCONFIG_OFFSET UNITYSDK_OFFSET(0x158070B0)
#define CLASS_1_04E767430AD06AF5_SET_STATE_OFFSET UNITYSDK_OFFSET(0x158070D0)
#define CLASS_1_04E767430AD06AF5_SET_TALENTPATHCONFIG_OFFSET UNITYSDK_OFFSET(0x15807090)
#define CLASS_1_04E767430AD06AF5__CTOR_OFFSET UNITYSDK_OFFSET(0x15807260)
#define CLASS_1_04E767430AD06AF5__GET_SHOWDETAILCOMMAND_B__17_0_OFFSET UNITYSDK_OFFSET(0x15807270)

inline static constexpr unsigned int Class_1_04E767430AD06AF5_TypeDefinitionIndex = 79431;

class Class_1_04E767430AD06AF5 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_102* _ActorConfig_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_397* EENAJHAKPBO; // 0x18
	::System::Action* HandleShowDetail; // 0x20
	::Class_0_16E4307DCC419505_150* _TalentPathConfig_k__BackingField; // 0x28
	::RPG::Client::MechCraft::ViewModel::MechCraftTalentAssistantState _State_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E767430AD06AF5__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_150* get_TalentPathConfig()
	{
		return ((::Class_0_16E4307DCC419505_150*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E767430AD06AF5_GET_TALENTPATHCONFIG_OFFSET))(this);
	}

	::System::Void set_TalentPathConfig(::Class_0_16E4307DCC419505_150* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_150*))((::PBYTE)hIl2Cpp + CLASS_1_04E767430AD06AF5_SET_TALENTPATHCONFIG_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_102* get_ActorConfig()
	{
		return ((::Class_0_16E4307DCC419505_102*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E767430AD06AF5_GET_ACTORCONFIG_OFFSET))(this);
	}

	::System::Void set_ActorConfig(::Class_0_16E4307DCC419505_102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_102*))((::PBYTE)hIl2Cpp + CLASS_1_04E767430AD06AF5_SET_ACTORCONFIG_OFFSET))(this, a1);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftTalentAssistantState get_State()
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentAssistantState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E767430AD06AF5_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::Client::MechCraft::ViewModel::MechCraftTalentAssistantState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentAssistantState))((::PBYTE)hIl2Cpp + CLASS_1_04E767430AD06AF5_SET_STATE_OFFSET))(this, a1);
	}

	::System::Void add_HandleShowDetail(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_04E767430AD06AF5_ADD_HANDLESHOWDETAIL_OFFSET))(this, a1);
	}

	::System::Void remove_HandleShowDetail(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_04E767430AD06AF5_REMOVE_HANDLESHOWDETAIL_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E767430AD06AF5_METHOD_1_B213056103887067_OFFSET))(this);
	}

	::System::Void _get_ShowDetailCommand_b__17_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E767430AD06AF5__GET_SHOWDETAILCOMMAND_B__17_0_OFFSET))(this);
	}
};
