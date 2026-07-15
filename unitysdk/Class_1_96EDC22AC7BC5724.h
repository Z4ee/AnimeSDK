#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_311;
namespace RPG::Client { class ChallengeGroupData; }
namespace System { class Action; }

#define CLASS_1_96EDC22AC7BC5724_ADD_HANDLEEXIT_OFFSET UNITYSDK_OFFSET(0x16EFF2D0)
#define CLASS_1_96EDC22AC7BC5724_METHOD_1_414033B13D333368_OFFSET UNITYSDK_OFFSET(0x16EFF060)
#define CLASS_1_96EDC22AC7BC5724_METHOD_1_90E86A506042BE77_OFFSET UNITYSDK_OFFSET(0x16EFF180)
#define CLASS_1_96EDC22AC7BC5724_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16EFF130)
#define CLASS_1_96EDC22AC7BC5724_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0x16EFF210)
#define CLASS_1_96EDC22AC7BC5724_METHOD_1_BD83D9A311EA4A81_OFFSET UNITYSDK_OFFSET(0x16EFEFB0)
#define CLASS_1_96EDC22AC7BC5724_METHOD_1_EE3CCB3EBB7312F7_OFFSET UNITYSDK_OFFSET(0x16EFF0E0)
#define CLASS_1_96EDC22AC7BC5724_REMOVE_HANDLEEXIT_OFFSET UNITYSDK_OFFSET(0x16EFF330)
#define CLASS_1_96EDC22AC7BC5724__CTOR_OFFSET UNITYSDK_OFFSET(0x16EFF390)
#define CLASS_1_96EDC22AC7BC5724__GET_EXITCOMMAND_B__13_0_OFFSET UNITYSDK_OFFSET(0x16EFF3A0)

inline static constexpr unsigned int Class_1_96EDC22AC7BC5724_TypeDefinitionIndex = 76599;

class Class_1_96EDC22AC7BC5724 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_311* Field_1_0; // 0x10
	::RPG::Client::ChallengeGroupData* Field_1_1; // 0x18
	::System::Action* HandleExit; // 0x20

	::System::Void _ctor(::RPG::Client::ChallengeGroupData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + CLASS_1_96EDC22AC7BC5724__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::TextID Method_1_BD83D9A311EA4A81()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96EDC22AC7BC5724_METHOD_1_BD83D9A311EA4A81_OFFSET))(this);
	}

	::RPG::GameCore::ChallengeGroupType Method_1_414033B13D333368()
	{
		return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96EDC22AC7BC5724_METHOD_1_414033B13D333368_OFFSET))(this);
	}

	::System::Int32 Method_1_EE3CCB3EBB7312F7()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96EDC22AC7BC5724_METHOD_1_EE3CCB3EBB7312F7_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96EDC22AC7BC5724_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::RPG::Client::DateTimePro Method_1_90E86A506042BE77()
	{
		return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96EDC22AC7BC5724_METHOD_1_90E86A506042BE77_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_311* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_311*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96EDC22AC7BC5724_METHOD_1_B213056103887067_OFFSET))(this);
	}

	::System::Void add_HandleExit(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_96EDC22AC7BC5724_ADD_HANDLEEXIT_OFFSET))(this, a1);
	}

	::System::Void remove_HandleExit(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_96EDC22AC7BC5724_REMOVE_HANDLEEXIT_OFFSET))(this, a1);
	}

	::System::Void _get_ExitCommand_b__13_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96EDC22AC7BC5724__GET_EXITCOMMAND_B__13_0_OFFSET))(this);
	}
};
