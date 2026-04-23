#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHESSROGUESENDPACKETCMD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9FF1310)
#define RPG_CLIENT_CHESSROGUESENDPACKETCMD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9FF1350)
#define RPG_CLIENT_CHESSROGUESENDPACKETCMD___C__SENDREVIVEROGUEAVATARCSREQ_B__1_0_OFFSET UNITYSDK_OFFSET(0x9FF1360)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueSendPacketCmd___c_TypeDefinitionIndex = 62025;

	class ChessRogueSendPacketCmd___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChessRogueSendPacketCmd___c** StaticGet___9()
		{
			return (::RPG::Client::ChessRogueSendPacketCmd___c**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueSendPacketCmd___c_TypeDefinitionIndex)->GetStaticField(0x541D0);
		}
		static ::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::UInt32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueSendPacketCmd___c_TypeDefinitionIndex)->GetStaticField(0x541D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUESENDPACKETCMD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUESENDPACKETCMD___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _SendReviveRogueAvatarCsReq_b__1_0(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUESENDPACKETCMD___C__SENDREVIVEROGUEAVATARCSREQ_B__1_0_OFFSET))(this, avatar);
		}
	};
}
