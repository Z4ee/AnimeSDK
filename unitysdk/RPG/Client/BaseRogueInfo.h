#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_710;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class IRogueMiracleInfo; }
namespace RPG::Client { class RogueBuffInfo; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace RPG::Client { class RoguePickAvatarInfo; }
namespace RPG::Client { class RogueReviveAvatarInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BASEROGUEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9178690)
#define RPG_CLIENT_BASEROGUEINFO_GETROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0x91788E0)
#define RPG_CLIENT_BASEROGUEINFO_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x9178920)
#define RPG_CLIENT_BASEROGUEINFO_GETROGUEPICKAVATARINFO_OFFSET UNITYSDK_OFFSET(0x91788A0)
#define RPG_CLIENT_BASEROGUEINFO_GETROGUEREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9178860)
#define RPG_CLIENT_BASEROGUEINFO_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x91784A0)
#define RPG_CLIENT_BASEROGUEINFO_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x91784C0)
#define RPG_CLIENT_BASEROGUEINFO_GET_PICKAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9178480)
#define RPG_CLIENT_BASEROGUEINFO_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9178460)
#define RPG_CLIENT_BASEROGUEINFO_SET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x91784B0)
#define RPG_CLIENT_BASEROGUEINFO_SET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x91784D0)
#define RPG_CLIENT_BASEROGUEINFO_SET_PICKAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9178490)
#define RPG_CLIENT_BASEROGUEINFO_SET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9178470)
#define RPG_CLIENT_BASEROGUEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9178960)
#define RPG_CLIENT_BASEROGUEINFO__INITCHESSROGUESENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x9178630)
#define RPG_CLIENT_BASEROGUEINFO__INITSIMULATEDROGUESENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x91784E0)
#define RPG_CLIENT_BASEROGUEINFO__SETSENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x9178540)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseRogueInfo_TypeDefinitionIndex = 54680;

	class BaseRogueInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueMiracleInfo* _MiracleInfo_k__BackingField; // 0x10
		::RPG::Client::RoguePickAvatarInfo* _PickAvatarInfo_k__BackingField; // 0x18
		::RPG::Client::RogueBuffInfo* _BuffInfo_k__BackingField; // 0x20
		::RPG::Client::RogueReviveAvatarInfo* _ReviveAvatarInfo_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* get_ReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_GET_REVIVEAVATARINFO_OFFSET))(this);
		}

		::System::Void set_ReviveAvatarInfo(::RPG::Client::RogueReviveAvatarInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueReviveAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_SET_REVIVEAVATARINFO_OFFSET))(this, value);
		}

		::RPG::Client::RoguePickAvatarInfo* get_PickAvatarInfo()
		{
			return ((::RPG::Client::RoguePickAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_GET_PICKAVATARINFO_OFFSET))(this);
		}

		::System::Void set_PickAvatarInfo(::RPG::Client::RoguePickAvatarInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RoguePickAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_SET_PICKAVATARINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueBuffInfo* get_BuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_GET_BUFFINFO_OFFSET))(this);
		}

		::System::Void set_BuffInfo(::RPG::Client::RogueBuffInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_SET_BUFFINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_GET_MIRACLEINFO_OFFSET))(this);
		}

		::System::Void set_MiracleInfo(::RPG::Client::RogueMiracleInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMiracleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_SET_MIRACLEINFO_OFFSET))(this, value);
		}

		::System::Void _InitSimulatedRogueSendPacketCmd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO__INITSIMULATEDROGUESENDPACKETCMD_OFFSET))(this);
		}

		::System::Void _InitChessRogueSendPacketCmd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO__INITCHESSROGUESENDPACKETCMD_OFFSET))(this);
		}

		::System::Void _SetSendPacketCmd(::Class_0_16E4307DCC419505_710* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_710*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO__SETSENDPACKETCMD_OFFSET))(this, cmd);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* GetRogueReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_GETROGUEREVIVEAVATARINFO_OFFSET))(this);
		}

		::RPG::Client::RoguePickAvatarInfo* GetRoguePickAvatarInfo()
		{
			return ((::RPG::Client::RoguePickAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_GETROGUEPICKAVATARINFO_OFFSET))(this);
		}

		::RPG::Client::RogueBuffInfo* GetRogueBuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_GETROGUEBUFFINFO_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracleInfo* GetRogueMiracleInfo()
		{
			return ((::RPG::Client::IRogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_GETROGUEMIRACLEINFO_OFFSET))(this);
		}
	};
}
