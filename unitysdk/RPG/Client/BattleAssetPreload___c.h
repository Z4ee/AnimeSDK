#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_BATTLEASSETPRELOAD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC8D86A0)
#define RPG_CLIENT_BATTLEASSETPRELOAD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC8D86D0)
#define RPG_CLIENT_BATTLEASSETPRELOAD___C__SET_PRELOADPHASE_B__79_0_OFFSET UNITYSDK_OFFSET(0xC8D86E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload___c_TypeDefinitionIndex = 59809;

	class BattleAssetPreload___c : public ::System::Object
	{
	public:
		static ::RPG::Client::BattleAssetPreload___c** StaticGet___9()
		{
			return (::RPG::Client::BattleAssetPreload___c**)Il2CppClass::FromTypeDefinitionIndex(BattleAssetPreload___c_TypeDefinitionIndex)->GetStaticField(0x5E00);
		}
		static ::System::Action_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>** StaticGet___9__79_0()
		{
			return (::System::Action_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>**)Il2CppClass::FromTypeDefinitionIndex(BattleAssetPreload___c_TypeDefinitionIndex)->GetStaticField(0x5E08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD___C__CTOR_OFFSET))(this);
		}

		::System::Void _set_PreloadPhase_b__79_0(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD___C__SET_PRELOADPHASE_B__79_0_OFFSET))(this, a1);
		}
	};
}
