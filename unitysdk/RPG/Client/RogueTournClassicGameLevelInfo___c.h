#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournClassicGameLevelLayer; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3831B0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA3831F0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO___C___SYNCLAYERSFULL_B__8_0_OFFSET UNITYSDK_OFFSET(0xA383200)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournClassicGameLevelInfo___c_TypeDefinitionIndex = 55143;

	class RogueTournClassicGameLevelInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::IRogueTournClassicGameLevelLayer*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::RPG::Client::IRogueTournClassicGameLevelLayer*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournClassicGameLevelInfo___c_TypeDefinitionIndex)->GetStaticField(0x1D7C0);
		}
		static ::RPG::Client::RogueTournClassicGameLevelInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournClassicGameLevelInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournClassicGameLevelInfo___c_TypeDefinitionIndex)->GetStaticField(0x1D7C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncLayersFull_b__8_0(::RPG::Client::IRogueTournClassicGameLevelLayer* a, ::RPG::Client::IRogueTournClassicGameLevelLayer* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournClassicGameLevelLayer*, ::RPG::Client::IRogueTournClassicGameLevelLayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO___C___SYNCLAYERSFULL_B__8_0_OFFSET))(this, a, b);
		}
	};
}
