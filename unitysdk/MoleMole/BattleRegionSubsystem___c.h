#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_BATTLEREGIONSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17272E10)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17272E50)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM___C__PRELOADBATTLEREGIONDOORASSET_B__2_0_OFFSET UNITYSDK_OFFSET(0x17272E60)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM___C__PRELOADBATTLEREGIONDOORASSET_B__2_1_OFFSET UNITYSDK_OFFSET(0x17272ED0)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM___C__PRELOADBATTLEREGIONDOORASSET_B__2_2_OFFSET UNITYSDK_OFFSET(0x17272F40)
#define MOLEMOLE_BATTLEREGIONSUBSYSTEM___C__PRELOADBATTLEREGIONDOORASSET_B__2_3_OFFSET UNITYSDK_OFFSET(0x17272FB0)

namespace MoleMole
{
	inline static constexpr unsigned int BattleRegionSubsystem___c_TypeDefinitionIndex = 69143;

	class BattleRegionSubsystem___c : public ::System::Object
	{
	public:
		static ::MoleMole::BattleRegionSubsystem___c** StaticGet___9()
		{
			return (::MoleMole::BattleRegionSubsystem___c**)Il2CppClass::FromTypeDefinitionIndex(BattleRegionSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x3F2D0);
		}
		static ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>** StaticGet___9__2_0()
		{
			return (::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(BattleRegionSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x3F2D8);
		}
		static ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>** StaticGet___9__2_1()
		{
			return (::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(BattleRegionSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x3F2E0);
		}
		static ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>** StaticGet___9__2_3()
		{
			return (::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(BattleRegionSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x3F2E8);
		}
		static ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>** StaticGet___9__2_2()
		{
			return (::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(BattleRegionSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x3F2F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _PreloadBattleRegionDoorAsset_b__2_0(::Foundation::AssetPath assetPath, ::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM___C__PRELOADBATTLEREGIONDOORASSET_B__2_0_OFFSET))(this, assetPath, go);
		}

		::System::Void _PreloadBattleRegionDoorAsset_b__2_1(::Foundation::AssetPath assetPath, ::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM___C__PRELOADBATTLEREGIONDOORASSET_B__2_1_OFFSET))(this, assetPath, go);
		}

		::System::Void _PreloadBattleRegionDoorAsset_b__2_2(::Foundation::AssetPath assetPath, ::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM___C__PRELOADBATTLEREGIONDOORASSET_B__2_2_OFFSET))(this, assetPath, go);
		}

		::System::Void _PreloadBattleRegionDoorAsset_b__2_3(::Foundation::AssetPath assetPath, ::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEREGIONSUBSYSTEM___C__PRELOADBATTLEREGIONDOORASSET_B__2_3_OFFSET))(this, assetPath, go);
		}
	};
}
