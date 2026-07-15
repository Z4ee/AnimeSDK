#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F8D9CEC872B937AF.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Collider; }

#define RPG_CLIENT_FIVEDIMGAMEINSTANCE___C__DISPLAYCLASS143_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1840E220)
#define RPG_CLIENT_FIVEDIMGAMEINSTANCE___C__DISPLAYCLASS143_0__SETUPSIMPLETRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x1841BF00)
#define RPG_CLIENT_FIVEDIMGAMEINSTANCE___C__DISPLAYCLASS143_0__SETUPSIMPLETRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0x1841BF60)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimGameInstance___c__DisplayClass143_0_TypeDefinitionIndex = 57688;

	class FiveDimGameInstance___c__DisplayClass143_0 : public ::System::Object
	{
	public:
		::Struct_2_F8D9CEC872B937AF onExit; // 0x10
		::Struct_2_F8D9CEC872B937AF onEnter; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMGAMEINSTANCE___C__DISPLAYCLASS143_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetupSimpleTrigger_b__0(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMGAMEINSTANCE___C__DISPLAYCLASS143_0__SETUPSIMPLETRIGGER_B__0_OFFSET))(this, a1);
		}

		::System::Void _SetupSimpleTrigger_b__1(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMGAMEINSTANCE___C__DISPLAYCLASS143_0__SETUPSIMPLETRIGGER_B__1_OFFSET))(this, a1);
		}
	};
}
