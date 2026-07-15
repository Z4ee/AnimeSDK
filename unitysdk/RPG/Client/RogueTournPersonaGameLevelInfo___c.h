#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaGameLevelLayer; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA5D4C0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA5D4F0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO___C___SYNCLAYERSFULL_B__8_0_OFFSET UNITYSDK_OFFSET(0x1AA5D500)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameLevelInfo___c_TypeDefinitionIndex = 64704;

	class RogueTournPersonaGameLevelInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::IRogueTournPersonaGameLevelLayer*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::RPG::Client::IRogueTournPersonaGameLevelLayer*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaGameLevelInfo___c_TypeDefinitionIndex)->GetStaticField(0x2C3C0);
		}
		static ::RPG::Client::RogueTournPersonaGameLevelInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournPersonaGameLevelInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaGameLevelInfo___c_TypeDefinitionIndex)->GetStaticField(0x2C3C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncLayersFull_b__8_0(::RPG::Client::IRogueTournPersonaGameLevelLayer* a1, ::RPG::Client::IRogueTournPersonaGameLevelLayer* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournPersonaGameLevelLayer*, ::RPG::Client::IRogueTournPersonaGameLevelLayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELINFO___C___SYNCLAYERSFULL_B__8_0_OFFSET))(this, a1, a2);
		}
	};
}
