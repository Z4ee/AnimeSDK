#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaGameLevelRoom; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C356E20)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C356E50)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA___C___SYNCROOMSFULL_B__9_0_OFFSET UNITYSDK_OFFSET(0x1C356E60)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameLevelLayerData___c_TypeDefinitionIndex = 67711;

	class RogueTournPersonaGameLevelLayerData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournPersonaGameLevelLayerData___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournPersonaGameLevelLayerData___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaGameLevelLayerData___c_TypeDefinitionIndex)->GetStaticField(0x15ED0);
		}
		static ::System::Comparison_1<::RPG::Client::IRogueTournPersonaGameLevelRoom*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::RPG::Client::IRogueTournPersonaGameLevelRoom*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaGameLevelLayerData___c_TypeDefinitionIndex)->GetStaticField(0x15ED8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncRoomsFull_b__9_0(::RPG::Client::IRogueTournPersonaGameLevelRoom* a1, ::RPG::Client::IRogueTournPersonaGameLevelRoom* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournPersonaGameLevelRoom*, ::RPG::Client::IRogueTournPersonaGameLevelRoom*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELLAYERDATA___C___SYNCROOMSFULL_B__9_0_OFFSET))(this, a1, a2);
		}
	};
}
