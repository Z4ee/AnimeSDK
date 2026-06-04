#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_7;
namespace System { class String; }

#define CLASS_1_B172D4779FD96F27_GET_PLAYERGENDER_OFFSET UNITYSDK_OFFSET(0x13697480)
#define CLASS_1_B172D4779FD96F27_GET_PLAYERNAME_OFFSET UNITYSDK_OFFSET(0x13697460)
#define CLASS_1_B172D4779FD96F27_GET_PLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0x136974A0)
#define CLASS_1_B172D4779FD96F27_SET_PLAYERGENDER_OFFSET UNITYSDK_OFFSET(0x13697490)
#define CLASS_1_B172D4779FD96F27_SET_PLAYERNAME_OFFSET UNITYSDK_OFFSET(0x13697470)
#define CLASS_1_B172D4779FD96F27_SET_PLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0x136974B0)
#define CLASS_1_B172D4779FD96F27__CTOR_OFFSET UNITYSDK_OFFSET(0x136974C0)

inline static constexpr unsigned int Class_1_B172D4779FD96F27_TypeDefinitionIndex = 58682;

class Class_1_B172D4779FD96F27 : public ::System::Object
{
public:
	::Class_1_075C34D03AFA1215_7* _PlayerOutfit_k__BackingField; // 0x10
	::System::String* _PlayerName_k__BackingField; // 0x18
	::RPG::GameCore::GenderType _PlayerGender_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B172D4779FD96F27__CTOR_OFFSET))(this);
	}

	::System::String* get_PlayerName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B172D4779FD96F27_GET_PLAYERNAME_OFFSET))(this);
	}

	::System::Void set_PlayerName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B172D4779FD96F27_SET_PLAYERNAME_OFFSET))(this, a1);
	}

	::RPG::GameCore::GenderType get_PlayerGender()
	{
		return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B172D4779FD96F27_GET_PLAYERGENDER_OFFSET))(this);
	}

	::System::Void set_PlayerGender(::RPG::GameCore::GenderType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + CLASS_1_B172D4779FD96F27_SET_PLAYERGENDER_OFFSET))(this, a1);
	}

	::Class_1_075C34D03AFA1215_7* get_PlayerOutfit()
	{
		return ((::Class_1_075C34D03AFA1215_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B172D4779FD96F27_GET_PLAYEROUTFIT_OFFSET))(this);
	}

	::System::Void set_PlayerOutfit(::Class_1_075C34D03AFA1215_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + CLASS_1_B172D4779FD96F27_SET_PLAYEROUTFIT_OFFSET))(this, a1);
	}
};
