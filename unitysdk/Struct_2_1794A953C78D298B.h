#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_1356;
namespace RPG::Client::PetMarble { class PetMarblePlayer; }

#define STRUCT_2_1794A953C78D298B_GET_ALLYTEAMPLAYER_OFFSET UNITYSDK_OFFSET(0x1D40)
#define STRUCT_2_1794A953C78D298B_GET_BRIDGE_OFFSET UNITYSDK_OFFSET(0x94F0)
#define STRUCT_2_1794A953C78D298B_GET_ENEMYTEAMPLAYER_OFFSET UNITYSDK_OFFSET(0x94D0)
#define STRUCT_2_1794A953C78D298B_GET_SELFPLAYER_OFFSET UNITYSDK_OFFSET(0x1D30)
#define STRUCT_2_1794A953C78D298B_METHOD_2_D144900DBADBB49D_OFFSET UNITYSDK_OFFSET(0x17AA0)
#define STRUCT_2_1794A953C78D298B_SET_ALLYTEAMPLAYER_OFFSET UNITYSDK_OFFSET(0x94C0)
#define STRUCT_2_1794A953C78D298B_SET_BRIDGE_OFFSET UNITYSDK_OFFSET(0x9500)
#define STRUCT_2_1794A953C78D298B_SET_ENEMYTEAMPLAYER_OFFSET UNITYSDK_OFFSET(0x94E0)
#define STRUCT_2_1794A953C78D298B_SET_SELFPLAYER_OFFSET UNITYSDK_OFFSET(0x94B0)
#define STRUCT_2_1794A953C78D298B__CTOR_OFFSET UNITYSDK_OFFSET(0x17A80)

inline static constexpr unsigned int Struct_2_1794A953C78D298B_TypeDefinitionIndex = 74733;

struct alignas(8) Struct_2_1794A953C78D298B
{
	::RPG::Client::PetMarble::PetMarblePlayer* _SelfPlayer_k__BackingField; // 0x10
	::RPG::Client::PetMarble::PetMarblePlayer* _AllyTeamPlayer_k__BackingField; // 0x18
	::RPG::Client::PetMarble::PetMarblePlayer* _EnemyTeamPlayer_k__BackingField; // 0x20
	::Class_0_16E4307DCC419505_1356* _Bridge_k__BackingField; // 0x28

	::System::Void _ctor(::Class_0_16E4307DCC419505_1356* a1, ::RPG::Client::PetMarble::PetMarblePlayer* a2, ::RPG::Client::PetMarble::PetMarblePlayer* a3, ::RPG::Client::PetMarble::PetMarblePlayer* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1356*, ::RPG::Client::PetMarble::PetMarblePlayer*, ::RPG::Client::PetMarble::PetMarblePlayer*, ::RPG::Client::PetMarble::PetMarblePlayer*))((::PBYTE)hIl2Cpp + STRUCT_2_1794A953C78D298B__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_D144900DBADBB49D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1794A953C78D298B_METHOD_2_D144900DBADBB49D_OFFSET))(this);
	}

	::RPG::Client::PetMarble::PetMarblePlayer* get_SelfPlayer()
	{
		return ((::RPG::Client::PetMarble::PetMarblePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1794A953C78D298B_GET_SELFPLAYER_OFFSET))(this);
	}

	::System::Void set_SelfPlayer(::RPG::Client::PetMarble::PetMarblePlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::PetMarblePlayer*))((::PBYTE)hIl2Cpp + STRUCT_2_1794A953C78D298B_SET_SELFPLAYER_OFFSET))(this, a1);
	}

	::RPG::Client::PetMarble::PetMarblePlayer* get_AllyTeamPlayer()
	{
		return ((::RPG::Client::PetMarble::PetMarblePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1794A953C78D298B_GET_ALLYTEAMPLAYER_OFFSET))(this);
	}

	::System::Void set_AllyTeamPlayer(::RPG::Client::PetMarble::PetMarblePlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::PetMarblePlayer*))((::PBYTE)hIl2Cpp + STRUCT_2_1794A953C78D298B_SET_ALLYTEAMPLAYER_OFFSET))(this, a1);
	}

	::RPG::Client::PetMarble::PetMarblePlayer* get_EnemyTeamPlayer()
	{
		return ((::RPG::Client::PetMarble::PetMarblePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1794A953C78D298B_GET_ENEMYTEAMPLAYER_OFFSET))(this);
	}

	::System::Void set_EnemyTeamPlayer(::RPG::Client::PetMarble::PetMarblePlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::PetMarblePlayer*))((::PBYTE)hIl2Cpp + STRUCT_2_1794A953C78D298B_SET_ENEMYTEAMPLAYER_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1356* get_Bridge()
	{
		return ((::Class_0_16E4307DCC419505_1356*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1794A953C78D298B_GET_BRIDGE_OFFSET))(this);
	}

	::System::Void set_Bridge(::Class_0_16E4307DCC419505_1356* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1356*))((::PBYTE)hIl2Cpp + STRUCT_2_1794A953C78D298B_SET_BRIDGE_OFFSET))(this, a1);
	}
};
