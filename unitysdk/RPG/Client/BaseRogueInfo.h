#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_810;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class IRogueMiracleInfo; }
namespace RPG::Client { class RogueBuffInfo; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace RPG::Client { class RoguePickAvatarInfo; }
namespace RPG::Client { class RogueReviveAvatarInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BASEROGUEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DDD650)
#define RPG_CLIENT_BASEROGUEINFO_GETROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0x9DDD8A0)
#define RPG_CLIENT_BASEROGUEINFO_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x9DDD8E0)
#define RPG_CLIENT_BASEROGUEINFO_GETROGUEPICKAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9DDD860)
#define RPG_CLIENT_BASEROGUEINFO_GETROGUEREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9DDD820)
#define RPG_CLIENT_BASEROGUEINFO_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x9DDD460)
#define RPG_CLIENT_BASEROGUEINFO_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x9DDD480)
#define RPG_CLIENT_BASEROGUEINFO_GET_PICKAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9DDD440)
#define RPG_CLIENT_BASEROGUEINFO_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9DDD420)
#define RPG_CLIENT_BASEROGUEINFO_SET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x9DDD470)
#define RPG_CLIENT_BASEROGUEINFO_SET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x9DDD490)
#define RPG_CLIENT_BASEROGUEINFO_SET_PICKAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9DDD450)
#define RPG_CLIENT_BASEROGUEINFO_SET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9DDD430)
#define RPG_CLIENT_BASEROGUEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9DDD920)
#define RPG_CLIENT_BASEROGUEINFO__INITCHESSROGUESENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x9DDD5F0)
#define RPG_CLIENT_BASEROGUEINFO__INITSIMULATEDROGUESENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x9DDD4A0)
#define RPG_CLIENT_BASEROGUEINFO__SETSENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x9DDD500)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseRogueInfo_TypeDefinitionIndex = 61868;

	class BaseRogueInfo : public ::System::Object
	{
	public:
		::RPG::Client::RoguePickAvatarInfo* _PickAvatarInfo_k__BackingField; // 0x10
		::RPG::Client::RogueMiracleInfo* _MiracleInfo_k__BackingField; // 0x18
		::RPG::Client::RogueReviveAvatarInfo* _ReviveAvatarInfo_k__BackingField; // 0x20
		::RPG::Client::RogueBuffInfo* _BuffInfo_k__BackingField; // 0x28

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

		::System::Void _SetSendPacketCmd(::Class_0_16E4307DCC419505_810* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_810*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO__SETSENDPACKETCMD_OFFSET))(this, cmd);
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
