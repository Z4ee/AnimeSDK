#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_TREASURECHALLENGESETTLEMENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA62B3A0)
#define RPG_CLIENT_TREASURECHALLENGESETTLEMENT___C__CREATESETTLEMENT_B__0_0_OFFSET UNITYSDK_OFFSET(0xA62B3F0)
#define RPG_CLIENT_TREASURECHALLENGESETTLEMENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA62B3E0)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureChallengeSettlement___c_TypeDefinitionIndex = 54341;

	class TreasureChallengeSettlement___c : public ::System::Object
	{
	public:
		static ::RPG::Client::TreasureChallengeSettlement___c** StaticGet___9()
		{
			return (::RPG::Client::TreasureChallengeSettlement___c**)Il2CppClass::FromTypeDefinitionIndex(TreasureChallengeSettlement___c_TypeDefinitionIndex)->GetStaticField(0x31990);
		}
		static ::System::Func_2<::RPG::Client::ItemDisplayData*, ::RPG::GameCore::ItemRarity>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::ItemDisplayData*, ::RPG::GameCore::ItemRarity>**)Il2CppClass::FromTypeDefinitionIndex(TreasureChallengeSettlement___c_TypeDefinitionIndex)->GetStaticField(0x31998);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGESETTLEMENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGESETTLEMENT___C__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ItemRarity _CreateSettlement_b__0_0(::RPG::Client::ItemDisplayData* a)
		{
			return ((::RPG::GameCore::ItemRarity(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGESETTLEMENT___C__CREATESETTLEMENT_B__0_0_OFFSET))(this, a);
		}
	};
}
