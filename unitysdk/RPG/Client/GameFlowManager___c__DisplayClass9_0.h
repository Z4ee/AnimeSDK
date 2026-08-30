#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define RPG_CLIENT_GAMEFLOWMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x193A81B0)
#define RPG_CLIENT_GAMEFLOWMANAGER___C__DISPLAYCLASS9_0__GETORTRYENTERGAMEFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x193A8860)

namespace RPG::Client
{
	inline static constexpr unsigned int GameFlowManager___c__DisplayClass9_0_TypeDefinitionIndex = 64396;

	class GameFlowManager___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::RPG::Client::BaseGameFlow* gameFlow; // 0x10
		::RPG::Client::Promises::Promise_1<::RPG::Client::BaseGameFlow*>* promise; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetOrTryEnterGameFlow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER___C__DISPLAYCLASS9_0__GETORTRYENTERGAMEFLOW_B__0_OFFSET))(this);
		}
	};
}
