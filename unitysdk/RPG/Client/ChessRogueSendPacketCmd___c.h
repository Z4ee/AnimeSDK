#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHESSROGUESENDPACKETCMD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB08250)
#define RPG_CLIENT_CHESSROGUESENDPACKETCMD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCB08290)
#define RPG_CLIENT_CHESSROGUESENDPACKETCMD___C__SENDREVIVEROGUEAVATARCSREQ_B__1_0_OFFSET UNITYSDK_OFFSET(0xCB082A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueSendPacketCmd___c_TypeDefinitionIndex = 67322;

	class ChessRogueSendPacketCmd___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::UInt32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueSendPacketCmd___c_TypeDefinitionIndex)->GetStaticField(0xE370);
		}
		static ::RPG::Client::ChessRogueSendPacketCmd___c** StaticGet___9()
		{
			return (::RPG::Client::ChessRogueSendPacketCmd___c**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueSendPacketCmd___c_TypeDefinitionIndex)->GetStaticField(0xE378);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUESENDPACKETCMD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUESENDPACKETCMD___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _SendReviveRogueAvatarCsReq_b__1_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUESENDPACKETCMD___C__SENDREVIVEROGUEAVATARCSREQ_B__1_0_OFFSET))(this, a1);
		}
	};
}
