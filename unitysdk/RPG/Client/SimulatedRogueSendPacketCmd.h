#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SIMULATEDROGUESENDPACKETCMD_SENDENHANCEROGUEBUFFCSREQ_OFFSET UNITYSDK_OFFSET(0xB189760)
#define RPG_CLIENT_SIMULATEDROGUESENDPACKETCMD_SENDGETROGUEBUFFENHANCEINFOSCREQ_OFFSET UNITYSDK_OFFSET(0xB1896A0)
#define RPG_CLIENT_SIMULATEDROGUESENDPACKETCMD_SENDPICKROGUEAVATARCSREQ_OFFSET UNITYSDK_OFFSET(0xB189020)
#define RPG_CLIENT_SIMULATEDROGUESENDPACKETCMD_SENDREVIVEROGUEAVATARCSREQ_OFFSET UNITYSDK_OFFSET(0xB1891F0)
#define RPG_CLIENT_SIMULATEDROGUESENDPACKETCMD__CTOR_OFFSET UNITYSDK_OFFSET(0xB189840)

namespace RPG::Client
{
	inline static constexpr unsigned int SimulatedRogueSendPacketCmd_TypeDefinitionIndex = 62022;

	class SimulatedRogueSendPacketCmd : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEDROGUESENDPACKETCMD__CTOR_OFFSET))(this);
		}

		::System::Void SendPickRogueAvatarCsReq(::System::UInt32 propEntityID, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList, ::System::Collections::Generic::List_1<::System::UInt32>* specialIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEDROGUESENDPACKETCMD_SENDPICKROGUEAVATARCSREQ_OFFSET))(this, propEntityID, avatarIDList, specialIDList);
		}

		::System::Void SendReviveRogueAvatarCsReq(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* avatars)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEDROGUESENDPACKETCMD_SENDREVIVEROGUEAVATARCSREQ_OFFSET))(this, avatars);
		}

		::System::Void SendGetRogueBuffEnhanceInfoScReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEDROGUESENDPACKETCMD_SENDGETROGUEBUFFENHANCEINFOSCREQ_OFFSET))(this);
		}

		::System::Void SendEnhanceRogueBuffCsReq(::System::UInt32 buffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEDROGUESENDPACKETCMD_SENDENHANCEROGUEBUFFCSREQ_OFFSET))(this, buffID);
		}
	};
}
