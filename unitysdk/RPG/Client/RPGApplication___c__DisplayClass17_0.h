#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RPGApplication; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_RPGAPPLICATION___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDDC6460)
#define RPG_CLIENT_RPGAPPLICATION___C__DISPLAYCLASS17_0__ONSTART_B__0_OFFSET UNITYSDK_OFFSET(0xDDC9A00)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGApplication___c__DisplayClass17_0_TypeDefinitionIndex = 69458;

	class RPGApplication___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::RPG::Client::RPGApplication* __4__this; // 0x10
		::UnityEngine::GameObject* gameObject; // 0x18

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
