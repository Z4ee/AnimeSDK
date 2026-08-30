#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E4DE5172E22946B7;
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS21_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4CD2E0)
#define RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS21_1__REFRESHAVATARINTENSITY_B__1_OFFSET UNITYSDK_OFFSET(0x1C4CD2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PPEffectManager___c__DisplayClass21_1_TypeDefinitionIndex = 69738;

	class PPEffectManager___c__DisplayClass21_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* entity; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS21_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshAvatarIntensity_b__1(::Class_1_E4DE5172E22946B7* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E4DE5172E22946B7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS21_1__REFRESHAVATARINTENSITY_B__1_OFFSET))(this, a1);
		}
	};
}
