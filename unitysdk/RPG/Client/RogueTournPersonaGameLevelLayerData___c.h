#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaGameLevelRoom; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3B6D20)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA3B6D50)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA___C___SYNCROOMSFULL_B__9_0_OFFSET UNITYSDK_OFFSET(0xA3B6D60)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameLevelLayerData___c_TypeDefinitionIndex = 55219;

	class RogueTournPersonaGameLevelLayerData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournPersonaGameLevelLayerData___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournPersonaGameLevelLayerData___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaGameLevelLayerData___c_TypeDefinitionIndex)->GetStaticField(0x1E780);
		}
		static ::System::Comparison_1<::RPG::Client::IRogueTournPersonaGameLevelRoom*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::RPG::Client::IRogueTournPersonaGameLevelRoom*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaGameLevelLayerData___c_TypeDefinitionIndex)->GetStaticField(0x1E788);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncRoomsFull_b__9_0(::RPG::Client::IRogueTournPersonaGameLevelRoom* a, ::RPG::Client::IRogueTournPersonaGameLevelRoom* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournPersonaGameLevelRoom*, ::RPG::Client::IRogueTournPersonaGameLevelRoom*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA___C___SYNCROOMSFULL_B__9_0_OFFSET))(this, a, b);
		}
	};
}
