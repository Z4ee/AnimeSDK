#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_899;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class IRogueMiracleInfo; }
namespace RPG::Client { class RogueBuffInfo; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace RPG::Client { class RoguePickAvatarInfo; }
namespace RPG::Client { class RogueReviveAvatarInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BASEROGUEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x186922D0)
#define RPG_CLIENT_BASEROGUEINFO_GETROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0x18692580)
#define RPG_CLIENT_BASEROGUEINFO_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x186925C0)
#define RPG_CLIENT_BASEROGUEINFO_GETROGUEPICKAVATARINFO_OFFSET UNITYSDK_OFFSET(0x18692540)
#define RPG_CLIENT_BASEROGUEINFO_GETROGUEREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x18692500)
#define RPG_CLIENT_BASEROGUEINFO_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x186920E0)
#define RPG_CLIENT_BASEROGUEINFO_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x18692100)
#define RPG_CLIENT_BASEROGUEINFO_GET_PICKAVATARINFO_OFFSET UNITYSDK_OFFSET(0x186920C0)
#define RPG_CLIENT_BASEROGUEINFO_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x186920A0)
#define RPG_CLIENT_BASEROGUEINFO_SET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x186920F0)
#define RPG_CLIENT_BASEROGUEINFO_SET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x18692110)
#define RPG_CLIENT_BASEROGUEINFO_SET_PICKAVATARINFO_OFFSET UNITYSDK_OFFSET(0x186920D0)
#define RPG_CLIENT_BASEROGUEINFO_SET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x186920B0)
#define RPG_CLIENT_BASEROGUEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18692600)
#define RPG_CLIENT_BASEROGUEINFO__INITCHESSROGUESENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x18692270)
#define RPG_CLIENT_BASEROGUEINFO__INITSIMULATEDROGUESENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x18692120)
#define RPG_CLIENT_BASEROGUEINFO__SETSENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x18692180)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseRogueInfo_TypeDefinitionIndex = 64168;

	class BaseRogueInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueMiracleInfo* _MiracleInfo_k__BackingField; // 0x10
		::RPG::Client::RogueBuffInfo* _BuffInfo_k__BackingField; // 0x18
		::RPG::Client::RogueReviveAvatarInfo* _ReviveAvatarInfo_k__BackingField; // 0x20
		::RPG::Client::RoguePickAvatarInfo* _PickAvatarInfo_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* get_ReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_GET_REVIVEAVATARINFO_OFFSET))(this);
		}

		::System::Void set_ReviveAvatarInfo(::RPG::Client::RogueReviveAvatarInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueReviveAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_SET_REVIVEAVATARINFO_OFFSET))(this, a1);
		}

		::RPG::Client::RoguePickAvatarInfo* get_PickAvatarInfo()
		{
			return ((::RPG::Client::RoguePickAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_GET_PICKAVATARINFO_OFFSET))(this);
		}

		::System::Void set_PickAvatarInfo(::RPG::Client::RoguePickAvatarInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RoguePickAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_SET_PICKAVATARINFO_OFFSET))(this, a1);
		}

		::RPG::Client::RogueBuffInfo* get_BuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_GET_BUFFINFO_OFFSET))(this);
		}

		::System::Void set_BuffInfo(::RPG::Client::RogueBuffInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_SET_BUFFINFO_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_GET_MIRACLEINFO_OFFSET))(this);
		}

		::System::Void set_MiracleInfo(::RPG::Client::RogueMiracleInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMiracleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_SET_MIRACLEINFO_OFFSET))(this, a1);
		}

		::System::Void _InitSimulatedRogueSendPacketCmd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO__INITSIMULATEDROGUESENDPACKETCMD_OFFSET))(this);
		}

		::System::Void _InitChessRogueSendPacketCmd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO__INITCHESSROGUESENDPACKETCMD_OFFSET))(this);
		}

		::System::Void _SetSendPacketCmd(::Class_0_16E4307DCC419505_899* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_899*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO__SETSENDPACKETCMD_OFFSET))(this, a1);
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
