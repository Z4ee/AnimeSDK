#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_291;
namespace RPG::Client { class ChallengeGroupData; }
namespace System { class Action; }

#define CLASS_1_96EDC22AC7BC5724_ADD_HANDLEEXIT_OFFSET UNITYSDK_OFFSET(0x144E8B60)
#define CLASS_1_96EDC22AC7BC5724_METHOD_1_3C53DA12DB9FF1F8_OFFSET UNITYSDK_OFFSET(0x144E8940)
#define CLASS_1_96EDC22AC7BC5724_METHOD_1_90E86A506042BE77_OFFSET UNITYSDK_OFFSET(0x144E8A10)
#define CLASS_1_96EDC22AC7BC5724_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0x144E8AA0)
#define CLASS_1_96EDC22AC7BC5724_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x144E8A00)
#define CLASS_1_96EDC22AC7BC5724_METHOD_1_CADCCE0E3EA87E57_OFFSET UNITYSDK_OFFSET(0x144E8970)
#define CLASS_1_96EDC22AC7BC5724_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x144E89A0)
#define CLASS_1_96EDC22AC7BC5724_REMOVE_HANDLEEXIT_OFFSET UNITYSDK_OFFSET(0x144E8BC0)
#define CLASS_1_96EDC22AC7BC5724__CTOR_OFFSET UNITYSDK_OFFSET(0x144E8C20)
#define CLASS_1_96EDC22AC7BC5724__GET_EXITCOMMAND_B__13_0_OFFSET UNITYSDK_OFFSET(0x144E8C30)

inline static constexpr unsigned int Class_1_96EDC22AC7BC5724_TypeDefinitionIndex = 74215;

class Class_1_96EDC22AC7BC5724 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_291* Field_1_0; // 0x10
	::System::Action* HandleExit; // 0x18
	::RPG::Client::ChallengeGroupData* Field_1_2; // 0x20

	::System::Void _ctor(::RPG::Client::ChallengeGroupData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + CLASS_1_96EDC22AC7BC5724__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::TextID Method_1_3C53DA12DB9FF1F8()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96EDC22AC7BC5724_METHOD_1_3C53DA12DB9FF1F8_OFFSET))(this);
	}

	::RPG::GameCore::ChallengeGroupType Method_1_CADCCE0E3EA87E57()
	{
		return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96EDC22AC7BC5724_METHOD_1_CADCCE0E3EA87E57_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96EDC22AC7BC5724_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96EDC22AC7BC5724_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::RPG::Client::DateTimePro Method_1_90E86A506042BE77()
	{
		return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96EDC22AC7BC5724_METHOD_1_90E86A506042BE77_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_291* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_291*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96EDC22AC7BC5724_METHOD_1_B213056103887067_OFFSET))(this);
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
