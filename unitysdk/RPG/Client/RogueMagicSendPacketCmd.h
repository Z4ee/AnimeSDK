#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICSENDPACKETCMD_SENDREVIVEROGUEAVATARCSREQ_OFFSET UNITYSDK_OFFSET(0xC7B3CF0)
#define RPG_CLIENT_ROGUEMAGICSENDPACKETCMD__CTOR_OFFSET UNITYSDK_OFFSET(0xC79EFC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicSendPacketCmd_TypeDefinitionIndex = 63046;

	class RogueMagicSendPacketCmd : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSENDPACKETCMD__CTOR_OFFSET))(this);
		}

		::System::Void SendReviveRogueAvatarCsReq(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSENDPACKETCMD_SENDREVIVEROGUEAVATARCSREQ_OFFSET))(this, a1);
		}
	};
}
