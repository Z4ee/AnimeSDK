#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUESENDPACKETCMD_SENDENHANCEROGUEBUFFCSREQ_OFFSET UNITYSDK_OFFSET(0xB668F60)
#define RPG_CLIENT_CHESSROGUESENDPACKETCMD_SENDGETROGUEBUFFENHANCEINFOSCREQ_OFFSET UNITYSDK_OFFSET(0xB668EA0)
#define RPG_CLIENT_CHESSROGUESENDPACKETCMD_SENDPICKROGUEAVATARCSREQ_OFFSET UNITYSDK_OFFSET(0xB668990)
#define RPG_CLIENT_CHESSROGUESENDPACKETCMD_SENDREVIVEROGUEAVATARCSREQ_OFFSET UNITYSDK_OFFSET(0xB668AE0)
#define RPG_CLIENT_CHESSROGUESENDPACKETCMD__CTOR_OFFSET UNITYSDK_OFFSET(0xB669040)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueSendPacketCmd_TypeDefinitionIndex = 62957;

	class ChessRogueSendPacketCmd : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUESENDPACKETCMD__CTOR_OFFSET))(this);
		}

		::System::Void SendPickRogueAvatarCsReq(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUESENDPACKETCMD_SENDPICKROGUEAVATARCSREQ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendReviveRogueAvatarCsReq(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUESENDPACKETCMD_SENDREVIVEROGUEAVATARCSREQ_OFFSET))(this, a1);
		}

		::System::Void SendGetRogueBuffEnhanceInfoScReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUESENDPACKETCMD_SENDGETROGUEBUFFENHANCEINFOSCREQ_OFFSET))(this);
		}

		::System::Void SendEnhanceRogueBuffCsReq(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUESENDPACKETCMD_SENDENHANCEROGUEBUFFCSREQ_OFFSET))(this, a1);
		}
	};
}
