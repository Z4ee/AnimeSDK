#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICSENDPACKETCMD_SENDREVIVEROGUEAVATARCSREQ_OFFSET UNITYSDK_OFFSET(0xB065810)
#define RPG_CLIENT_ROGUEMAGICSENDPACKETCMD__CTOR_OFFSET UNITYSDK_OFFSET(0xB051100)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicSendPacketCmd_TypeDefinitionIndex = 62113;

	class RogueMagicSendPacketCmd : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSENDPACKETCMD__CTOR_OFFSET))(this);
		}

		::System::Void SendReviveRogueAvatarCsReq(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* avatars)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSENDPACKETCMD_SENDREVIVEROGUEAVATARCSREQ_OFFSET))(this, avatars);
		}
	};
}
