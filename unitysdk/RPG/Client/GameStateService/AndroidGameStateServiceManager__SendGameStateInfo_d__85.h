#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::GameStateService { class AndroidGameStateServiceManager; }
namespace SimpleJSON { class JSONClass; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER__SENDGAMESTATEINFO_D__85_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE9370)
#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER__SENDGAMESTATEINFO_D__85_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B00)

namespace RPG::Client::GameStateService
{
	inline static constexpr unsigned int AndroidGameStateServiceManager__SendGameStateInfo_d__85_TypeDefinitionIndex = 75630;

	struct alignas(8) AndroidGameStateServiceManager__SendGameStateInfo_d__85
	{
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x10
		::SimpleJSON::JSONClass* jsonClass; // 0x30
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x38
		::RPG::Client::GameStateService::AndroidGameStateServiceManager* __4__this; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER__SENDGAMESTATEINFO_D__85_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER__SENDGAMESTATEINFO_D__85_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
