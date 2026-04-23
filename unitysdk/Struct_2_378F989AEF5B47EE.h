#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/RPG/Client/MPSessionState.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_378F989AEF5B47EE_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define STRUCT_2_378F989AEF5B47EE_GET_NEWSTATE_OFFSET UNITYSDK_OFFSET(0xD240)
#define STRUCT_2_378F989AEF5B47EE_GET_OLDSTATE_OFFSET UNITYSDK_OFFSET(0x1DA80)
#define STRUCT_2_378F989AEF5B47EE__CTOR_OFFSET UNITYSDK_OFFSET(0xD3340)

inline static constexpr unsigned int Struct_2_378F989AEF5B47EE_TypeDefinitionIndex = 62941;

struct alignas(4) Struct_2_378F989AEF5B47EE
{
	::Enum_3_A35B38E5F9115A76_2 _GameMode_k__BackingField; // 0x10
	::RPG::Client::MPSessionState _OldState_k__BackingField; // 0x14
	::RPG::Client::MPSessionState _NewState_k__BackingField; // 0x18

	::System::Void _ctor(::Enum_3_A35B38E5F9115A76_2 a1, ::RPG::Client::MPSessionState a2, ::RPG::Client::MPSessionState a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2, ::RPG::Client::MPSessionState, ::RPG::Client::MPSessionState))((::PBYTE)hIl2Cpp + STRUCT_2_378F989AEF5B47EE__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Enum_3_A35B38E5F9115A76_2 get_GameMode()
	{
		return ((::Enum_3_A35B38E5F9115A76_2(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_378F989AEF5B47EE_GET_GAMEMODE_OFFSET))(this);
	}

	::RPG::Client::MPSessionState get_OldState()
	{
		return ((::RPG::Client::MPSessionState(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_378F989AEF5B47EE_GET_OLDSTATE_OFFSET))(this);
	}

	::RPG::Client::MPSessionState get_NewState()
	{
		return ((::RPG::Client::MPSessionState(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_378F989AEF5B47EE_GET_NEWSTATE_OFFSET))(this);
	}
};
