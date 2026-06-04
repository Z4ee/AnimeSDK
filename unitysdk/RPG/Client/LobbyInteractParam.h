#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_4.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LOBBYINTERACTPARAM_GET_INTERACTPARAM_OFFSET UNITYSDK_OFFSET(0xBE4E3B0)
#define RPG_CLIENT_LOBBYINTERACTPARAM_GET_INTERACTTYPE_OFFSET UNITYSDK_OFFSET(0xBE4E390)
#define RPG_CLIENT_LOBBYINTERACTPARAM_GET_SOURCEUID_OFFSET UNITYSDK_OFFSET(0xBE4E370)
#define RPG_CLIENT_LOBBYINTERACTPARAM_SET_INTERACTPARAM_OFFSET UNITYSDK_OFFSET(0xBE4E3C0)
#define RPG_CLIENT_LOBBYINTERACTPARAM_SET_INTERACTTYPE_OFFSET UNITYSDK_OFFSET(0xBE4E3A0)
#define RPG_CLIENT_LOBBYINTERACTPARAM_SET_SOURCEUID_OFFSET UNITYSDK_OFFSET(0xBE4E380)
#define RPG_CLIENT_LOBBYINTERACTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xBE4E360)

namespace RPG::Client
{
	inline static constexpr unsigned int LobbyInteractParam_TypeDefinitionIndex = 61495;

	class LobbyInteractParam : public ::System::Object
	{
	public:
		::System::UInt32 _SourceUID_k__BackingField; // 0x10
		::System::UInt32 _InteractParam_k__BackingField; // 0x14
		::Enum_3_ED790DAC948A65A9_4 _InteractType_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::Enum_3_ED790DAC948A65A9_4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_ED790DAC948A65A9_4))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYINTERACTPARAM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_SourceUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYINTERACTPARAM_GET_SOURCEUID_OFFSET))(this);
		}

		::System::Void set_SourceUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYINTERACTPARAM_SET_SOURCEUID_OFFSET))(this, a1);
		}

		::Enum_3_ED790DAC948A65A9_4 get_InteractType()
		{
			return ((::Enum_3_ED790DAC948A65A9_4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYINTERACTPARAM_GET_INTERACTTYPE_OFFSET))(this);
		}

		::System::Void set_InteractType(::Enum_3_ED790DAC948A65A9_4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_4))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYINTERACTPARAM_SET_INTERACTTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_InteractParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYINTERACTPARAM_GET_INTERACTPARAM_OFFSET))(this);
		}

		::System::Void set_InteractParam(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYINTERACTPARAM_SET_INTERACTPARAM_OFFSET))(this, a1);
		}
	};
}
