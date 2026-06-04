#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RPGApplication; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_RPGAPPLICATION___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC681A80)
#define RPG_CLIENT_RPGAPPLICATION___C__DISPLAYCLASS17_0__ONSTART_B__0_OFFSET UNITYSDK_OFFSET(0xC684E30)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGApplication___c__DisplayClass17_0_TypeDefinitionIndex = 64961;

	class RPGApplication___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* gameObject; // 0x10
		::RPG::Client::RPGApplication* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnStart_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION___C__DISPLAYCLASS17_0__ONSTART_B__0_OFFSET))(this);
		}
	};
}
