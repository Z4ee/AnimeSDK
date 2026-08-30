#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoxingClubActivityType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BoxingClubLevelInstance; }

#define RPG_CLIENT_BOXINGCLUBMODULE___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A111530)
#define RPG_CLIENT_BOXINGCLUBMODULE___C__DISPLAYCLASS29_0__GETBOXINGCLUBLEVELINSTANCEBYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x1A1141F0)

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubModule___c__DisplayClass29_0_TypeDefinitionIndex = 63016;

	class BoxingClubModule___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::BoxingClubActivityType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBoxingClubLevelInstanceByType_b__0(::RPG::Client::BoxingClubLevelInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BoxingClubLevelInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE___C__DISPLAYCLASS29_0__GETBOXINGCLUBLEVELINSTANCEBYTYPE_B__0_OFFSET))(this, a1);
		}
	};
}
