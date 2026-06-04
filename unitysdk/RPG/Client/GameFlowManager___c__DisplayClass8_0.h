#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define RPG_CLIENT_GAMEFLOWMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBAB81F0)
#define RPG_CLIENT_GAMEFLOWMANAGER___C__DISPLAYCLASS8_0__ENTERGAMEFLOW_B__0_OFFSET UNITYSDK_OFFSET(0xBAB8A20)

namespace RPG::Client
{
	inline static constexpr unsigned int GameFlowManager___c__DisplayClass8_0_TypeDefinitionIndex = 60125;

	class GameFlowManager___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::RPG::Client::BaseGameFlow*>* promise; // 0x10
		::RPG::Client::BaseGameFlow* gameFlow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnterGameFlow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER___C__DISPLAYCLASS8_0__ENTERGAMEFLOW_B__0_OFFSET))(this);
		}
	};
}
