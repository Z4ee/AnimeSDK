#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChessRogueMainMissionReplayDataItem; }
namespace RPG::Client { class ChessRogueSubMissionReplayDataItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHESSROGUEREPLAYINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCBB7CB0)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCBB7CF0)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO___C__GETMAINSTORYUNLOCKEDNUM_B__5_0_OFFSET UNITYSDK_OFFSET(0xCBB7D50)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO___C__GETMAINSTORYUNLOCKPROGRESS_B__4_0_OFFSET UNITYSDK_OFFSET(0xCBB7D00)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO___C__GETUNLOCKEDPROGRESS_B__6_0_OFFSET UNITYSDK_OFFSET(0xCBB7DA0)
#define RPG_CLIENT_CHESSROGUEREPLAYINFO___C__GETUNLOCKEDSUBSTORYNUM_B__7_0_OFFSET UNITYSDK_OFFSET(0xCBB7DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueReplayInfo___c_TypeDefinitionIndex = 66968;

	class ChessRogueReplayInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChessRogueReplayInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChessRogueReplayInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueReplayInfo___c_TypeDefinitionIndex)->GetStaticField(0x3FFF0);
		}
		static ::System::Func_2<::RPG::Client::ChessRogueSubMissionReplayDataItem*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::ChessRogueSubMissionReplayDataItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueReplayInfo___c_TypeDefinitionIndex)->GetStaticField(0x3FFF8);
		}
		static ::System::Func_2<::RPG::Client::ChessRogueMainMissionReplayDataItem*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::ChessRogueMainMissionReplayDataItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueReplayInfo___c_TypeDefinitionIndex)->GetStaticField(0x40000);
		}
		static ::System::Func_2<::RPG::Client::ChessRogueSubMissionReplayDataItem*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::ChessRogueSubMissionReplayDataItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueReplayInfo___c_TypeDefinitionIndex)->GetStaticField(0x40008);
		}
		static ::System::Func_2<::RPG::Client::ChessRogueMainMissionReplayDataItem*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::ChessRogueMainMissionReplayDataItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueReplayInfo___c_TypeDefinitionIndex)->GetStaticField(0x40010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMainStoryUnlockProgress_b__4_0(::RPG::Client::ChessRogueMainMissionReplayDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueMainMissionReplayDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO___C__GETMAINSTORYUNLOCKPROGRESS_B__4_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetMainStoryUnlockedNum_b__5_0(::RPG::Client::ChessRogueMainMissionReplayDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueMainMissionReplayDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO___C__GETMAINSTORYUNLOCKEDNUM_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetUnlockedProgress_b__6_0(::RPG::Client::ChessRogueSubMissionReplayDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueSubMissionReplayDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO___C__GETUNLOCKEDPROGRESS_B__6_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetUnlockedSubStoryNum_b__7_0(::RPG::Client::ChessRogueSubMissionReplayDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueSubMissionReplayDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREPLAYINFO___C__GETUNLOCKEDSUBSTORYNUM_B__7_0_OFFSET))(this, a1);
		}
	};
}
