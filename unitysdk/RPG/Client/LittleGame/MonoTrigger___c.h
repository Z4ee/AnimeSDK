#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { class MonoTrigger; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBE30B20)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBE30B50)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER___C___SETLISTENGUESTCOLLIDERENABLE_B__13_0_OFFSET UNITYSDK_OFFSET(0xBE30B60)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MonoTrigger___c_TypeDefinitionIndex = 71086;

	class MonoTrigger___c : public ::System::Object
	{
	public:
		static ::System::Action_3<::RPG::Client::LittleGame::MonoTrigger*, ::UnityEngine::Collider*, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Action_3<::RPG::Client::LittleGame::MonoTrigger*, ::UnityEngine::Collider*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MonoTrigger___c_TypeDefinitionIndex)->GetStaticField(0x4E500);
		}
		static ::RPG::Client::LittleGame::MonoTrigger___c** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::MonoTrigger___c**)Il2CppClass::FromTypeDefinitionIndex(MonoTrigger___c_TypeDefinitionIndex)->GetStaticField(0x4E508);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER___C__CTOR_OFFSET))(this);
		}

		::System::Void __SetListenGuestColliderEnable_b__13_0(::RPG::Client::LittleGame::MonoTrigger* a1, ::UnityEngine::Collider* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MonoTrigger*, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER___C___SETLISTENGUESTCOLLIDERENABLE_B__13_0_OFFSET))(this, a1, a2, a3);
		}
	};
}
