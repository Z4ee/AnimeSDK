#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8C01F4196D770BEF;
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS19_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9EBC7E0)
#define RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS19_1__REFRESHAVATARINTENSITY_B__1_OFFSET UNITYSDK_OFFSET(0x9EC0C40)

namespace RPG::Client
{
	inline static constexpr unsigned int PPEffectManager___c__DisplayClass19_1_TypeDefinitionIndex = 57058;

	class PPEffectManager___c__DisplayClass19_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* entity; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS19_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshAvatarIntensity_b__1(::Class_1_8C01F4196D770BEF* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_8C01F4196D770BEF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER___C__DISPLAYCLASS19_1__REFRESHAVATARINTENSITY_B__1_OFFSET))(this, info);
		}
	};
}
