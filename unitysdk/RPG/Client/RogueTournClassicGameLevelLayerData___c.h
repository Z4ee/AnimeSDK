#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournClassicGameLevelRoom; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDF96570)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDF965B0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA___C___SYNCROOMSFULL_B__9_0_OFFSET UNITYSDK_OFFSET(0xDF965C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournClassicGameLevelLayerData___c_TypeDefinitionIndex = 67632;

	class RogueTournClassicGameLevelLayerData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::IRogueTournClassicGameLevelRoom*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::RPG::Client::IRogueTournClassicGameLevelRoom*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournClassicGameLevelLayerData___c_TypeDefinitionIndex)->GetStaticField(0x6C6F0);
		}
		static ::RPG::Client::RogueTournClassicGameLevelLayerData___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournClassicGameLevelLayerData___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournClassicGameLevelLayerData___c_TypeDefinitionIndex)->GetStaticField(0x6C6F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncRoomsFull_b__9_0(::RPG::Client::IRogueTournClassicGameLevelRoom* a1, ::RPG::Client::IRogueTournClassicGameLevelRoom* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournClassicGameLevelRoom*, ::RPG::Client::IRogueTournClassicGameLevelRoom*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELLAYERDATA___C___SYNCROOMSFULL_B__9_0_OFFSET))(this, a1, a2);
		}
	};
}
