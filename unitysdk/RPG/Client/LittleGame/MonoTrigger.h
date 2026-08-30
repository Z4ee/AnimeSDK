#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"

class Class_1_47EE63CB5C4DC8FC_5;
class Class_1_D3CC73B16B410533;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_GETCOLLIDER_OFFSET UNITYSDK_OFFSET(0xD51D5D0)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_GETENTITY_OFFSET UNITYSDK_OFFSET(0xD51D4E0)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_GET_ISACTIVEANDENABLED_OFFSET UNITYSDK_OFFSET(0xD51D670)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD51D520)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_INITTRIGGERRUNTIMEINFO_OFFSET UNITYSDK_OFFSET(0xD51D580)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_METHOD_6_34BE98EC430CA311_OFFSET UNITYSDK_OFFSET(0xD51DAD0)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_METHOD_6_5757AFE81AE625CC_OFFSET UNITYSDK_OFFSET(0xD51DD80)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_METHOD_6_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0xD51D770)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_METHOD_6_FB988A230DFA3F4D_OFFSET UNITYSDK_OFFSET(0xD51E050)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD51DFF0)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xD51D910)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xD51DF50)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER_RELEASE_OFFSET UNITYSDK_OFFSET(0xD51D680)
#define RPG_CLIENT_LITTLEGAME_MONOTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xD51E0C0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MonoTrigger_TypeDefinitionIndex = 76035;

	class MonoTrigger : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::Entitas::IEntity* KAKEIDJDNHJ; // 0x20
		::Class_1_D3CC73B16B410533* BNAKBJCJGFM; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER__CTOR_OFFSET))(this);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_GETENTITY_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitTriggerRuntimeInfo(::Class_1_D3CC73B16B410533* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D3CC73B16B410533*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_INITTRIGGERRUNTIMEINFO_OFFSET))(this, a1);
		}

		::UnityEngine::Collider* GetCollider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_GETCOLLIDER_OFFSET))(this);
		}

		::System::Boolean get_IsActiveAndEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_GET_ISACTIVEANDENABLED_OFFSET))(this);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_RELEASE_OFFSET))(this, a1);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_6_5757AFE81AE625CC(::System::Boolean a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_METHOD_6_5757AFE81AE625CC_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_7F29568EA964E563()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_METHOD_6_7F29568EA964E563_OFFSET))(this);
		}

		::System::Void Method_6_FB988A230DFA3F4D(::UnityEngine::Collider* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_METHOD_6_FB988A230DFA3F4D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_34BE98EC430CA311(::UnityEngine::Collider* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOTRIGGER_METHOD_6_34BE98EC430CA311_OFFSET))(this, a1, a2);
		}
	};
}
