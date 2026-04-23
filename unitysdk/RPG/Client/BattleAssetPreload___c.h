#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_BATTLEASSETPRELOAD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9DE5F10)
#define RPG_CLIENT_BATTLEASSETPRELOAD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9DE5F40)
#define RPG_CLIENT_BATTLEASSETPRELOAD___C__SET_PRELOADPHASE_B__75_0_OFFSET UNITYSDK_OFFSET(0x9DE5F50)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload___c_TypeDefinitionIndex = 55049;

	class BattleAssetPreload___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>** StaticGet___9__75_0()
		{
			return (::System::Action_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>**)Il2CppClass::FromTypeDefinitionIndex(BattleAssetPreload___c_TypeDefinitionIndex)->GetStaticField(0x3D240);
		}
		static ::RPG::Client::BattleAssetPreload___c** StaticGet___9()
		{
			return (::RPG::Client::BattleAssetPreload___c**)Il2CppClass::FromTypeDefinitionIndex(BattleAssetPreload___c_TypeDefinitionIndex)->GetStaticField(0x3D248);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD___C__CTOR_OFFSET))(this);
		}

		::System::Void _set_PreloadPhase_b__75_0(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD___C__SET_PRELOADPHASE_B__75_0_OFFSET))(this, group);
		}
	};
}
