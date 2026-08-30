#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournClassicGameLevelLayer; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDF449B0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDF449F0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO___C___SYNCLAYERSFULL_B__8_0_OFFSET UNITYSDK_OFFSET(0xDF44A00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournClassicGameLevelInfo___c_TypeDefinitionIndex = 67627;

	class RogueTournClassicGameLevelInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::IRogueTournClassicGameLevelLayer*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::RPG::Client::IRogueTournClassicGameLevelLayer*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournClassicGameLevelInfo___c_TypeDefinitionIndex)->GetStaticField(0x11080);
		}
		static ::RPG::Client::RogueTournClassicGameLevelInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournClassicGameLevelInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournClassicGameLevelInfo___c_TypeDefinitionIndex)->GetStaticField(0x11088);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncLayersFull_b__8_0(::RPG::Client::IRogueTournClassicGameLevelLayer* a1, ::RPG::Client::IRogueTournClassicGameLevelLayer* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournClassicGameLevelLayer*, ::RPG::Client::IRogueTournClassicGameLevelLayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO___C___SYNCLAYERSFULL_B__8_0_OFFSET))(this, a1, a2);
		}
	};
}
