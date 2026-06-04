#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::AssetSystem { class AssetLoader; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class AsyncOperation; }

#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1892A780)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1892A7B0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER___C___CTOR_B__40_0_OFFSET UNITYSDK_OFFSET(0x1892A7C0)

namespace RPG::Client::AssetSystem
{
	inline static constexpr unsigned int AssetLoader___c_TypeDefinitionIndex = 38588;

	class AssetLoader___c : public ::System::Object
	{
	public:
		static ::RPG::Client::AssetSystem::AssetLoader___c** StaticGet___9()
		{
			return (::RPG::Client::AssetSystem::AssetLoader___c**)Il2CppClass::FromTypeDefinitionIndex(AssetLoader___c_TypeDefinitionIndex)->GetStaticField(0x24560);
		}
		static ::System::Action_2<::RPG::Client::AssetSystem::AssetLoader*, ::UnityEngine::AsyncOperation*>** StaticGet___9__40_0()
		{
			return (::System::Action_2<::RPG::Client::AssetSystem::AssetLoader*, ::UnityEngine::AsyncOperation*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLoader___c_TypeDefinitionIndex)->GetStaticField(0x24568);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__40_0(::RPG::Client::AssetSystem::AssetLoader* a1, ::UnityEngine::AsyncOperation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::AssetLoader*, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER___C___CTOR_B__40_0_OFFSET))(this, a1, a2);
		}
	};
}
