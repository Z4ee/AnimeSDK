#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_4.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LOBBYINTERACTPARAM_GET_INTERACTPARAM_OFFSET UNITYSDK_OFFSET(0xA6ED870)
#define RPG_CLIENT_LOBBYINTERACTPARAM_GET_INTERACTTYPE_OFFSET UNITYSDK_OFFSET(0xA6ED850)
#define RPG_CLIENT_LOBBYINTERACTPARAM_GET_SOURCEUID_OFFSET UNITYSDK_OFFSET(0xA6ED830)
#define RPG_CLIENT_LOBBYINTERACTPARAM_SET_INTERACTPARAM_OFFSET UNITYSDK_OFFSET(0xA6ED880)
#define RPG_CLIENT_LOBBYINTERACTPARAM_SET_INTERACTTYPE_OFFSET UNITYSDK_OFFSET(0xA6ED860)
#define RPG_CLIENT_LOBBYINTERACTPARAM_SET_SOURCEUID_OFFSET UNITYSDK_OFFSET(0xA6ED840)
#define RPG_CLIENT_LOBBYINTERACTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA6ED820)

namespace RPG::Client
{
	inline static constexpr unsigned int LobbyInteractParam_TypeDefinitionIndex = 60561;

	class LobbyInteractParam : public ::System::Object
	{
	public:
		::Enum_3_ED790DAC948A65A9_4 _InteractType_k__BackingField; // 0x10
		::System::UInt32 _SourceUID_k__BackingField; // 0x14
		::System::UInt32 _InteractParam_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 uid, ::Enum_3_ED790DAC948A65A9_4 type)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_ED790DAC948A65A9_4))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYINTERACTPARAM__CTOR_OFFSET))(this, uid, type);
		}

		::System::UInt32 get_SourceUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYINTERACTPARAM_GET_SOURCEUID_OFFSET))(this);
		}

		::System::Void set_SourceUID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYINTERACTPARAM_SET_SOURCEUID_OFFSET))(this, value);
		}

		::Enum_3_ED790DAC948A65A9_4 get_InteractType()
		{
			return ((::Enum_3_ED790DAC948A65A9_4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYINTERACTPARAM_GET_INTERACTTYPE_OFFSET))(this);
		}

		::System::Void set_InteractType(::Enum_3_ED790DAC948A65A9_4 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_4))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYINTERACTPARAM_SET_INTERACTTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_InteractParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYINTERACTPARAM_GET_INTERACTPARAM_OFFSET))(this);
		}

		::System::Void set_InteractParam(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYINTERACTPARAM_SET_INTERACTPARAM_OFFSET))(this, value);
		}
	};
}
