#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesMiniGameReward; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PLANETFESMINIGAME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F9FE90)
#define RPG_CLIENT_PLANETFESMINIGAME___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9F9FED0)
#define RPG_CLIENT_PLANETFESMINIGAME___C__GETREWARDS_B__3_0_OFFSET UNITYSDK_OFFSET(0x9F9FEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesMiniGame___c_TypeDefinitionIndex = 54200;

	class PlanetFesMiniGame___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PlanetFesMiniGame___c** StaticGet___9()
		{
			return (::RPG::Client::PlanetFesMiniGame___c**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesMiniGame___c_TypeDefinitionIndex)->GetStaticField(0x46860);
		}
		static ::System::Comparison_1<::RPG::Client::PlanetFesMiniGameReward*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::RPG::Client::PlanetFesMiniGameReward*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesMiniGame___c_TypeDefinitionIndex)->GetStaticField(0x46868);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetRewards_b__3_0(::RPG::Client::PlanetFesMiniGameReward* a, ::RPG::Client::PlanetFesMiniGameReward* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesMiniGameReward*, ::RPG::Client::PlanetFesMiniGameReward*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME___C__GETREWARDS_B__3_0_OFFSET))(this, a, b);
		}
	};
}
