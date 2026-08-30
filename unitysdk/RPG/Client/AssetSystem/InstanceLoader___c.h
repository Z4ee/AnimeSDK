#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::AssetSystem { class InstanceLoader; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class AsyncOperation; }

#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFD0CF0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFD0D20)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER___C___CTOR_B__46_0_OFFSET UNITYSDK_OFFSET(0x1BFD0D30)

namespace RPG::Client::AssetSystem
{
	inline static constexpr unsigned int InstanceLoader___c_TypeDefinitionIndex = 40274;

	class InstanceLoader___c : public ::System::Object
	{
	public:
		static ::RPG::Client::AssetSystem::InstanceLoader___c** StaticGet___9()
		{
			return (::RPG::Client::AssetSystem::InstanceLoader___c**)Il2CppClass::FromTypeDefinitionIndex(InstanceLoader___c_TypeDefinitionIndex)->GetStaticField(0xF30);
		}
		static ::System::Action_2<::RPG::Client::AssetSystem::InstanceLoader*, ::UnityEngine::AsyncOperation*>** StaticGet___9__46_0()
		{
			return (::System::Action_2<::RPG::Client::AssetSystem::InstanceLoader*, ::UnityEngine::AsyncOperation*>**)Il2CppClass::FromTypeDefinitionIndex(InstanceLoader___c_TypeDefinitionIndex)->GetStaticField(0xF38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__46_0(::RPG::Client::AssetSystem::InstanceLoader* a1, ::UnityEngine::AsyncOperation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::InstanceLoader*, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER___C___CTOR_B__46_0_OFFSET))(this, a1, a2);
		}
	};
}
