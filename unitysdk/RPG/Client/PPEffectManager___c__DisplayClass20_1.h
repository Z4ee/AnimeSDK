#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8C01F4196D770BEF;
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS20_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAC13C40)
#define RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS20_1__REFRESHAVATARINTENSITY_B__1_OFFSET UNITYSDK_OFFSET(0xAC17F50)

namespace RPG::Client
{
	inline static constexpr unsigned int PPEffectManager___c__DisplayClass20_1_TypeDefinitionIndex = 64309;

	class PPEffectManager___c__DisplayClass20_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* entity; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS20_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshAvatarIntensity_b__1(::Class_1_8C01F4196D770BEF* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_8C01F4196D770BEF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS20_1__REFRESHAVATARINTENSITY_B__1_OFFSET))(this, info);
		}
	};
}
