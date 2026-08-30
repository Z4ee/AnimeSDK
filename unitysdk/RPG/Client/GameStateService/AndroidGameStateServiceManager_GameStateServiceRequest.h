#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_GAMESTATESERVICEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x39A9C20)

namespace RPG::Client::GameStateService
{
	inline static constexpr unsigned int AndroidGameStateServiceManager_GameStateServiceRequest_TypeDefinitionIndex = 75329;

	struct alignas(8) AndroidGameStateServiceManager_GameStateServiceRequest
	{
		::System::Int32 RequestId; // 0x10
		::System::String* RequestData; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_GAMESTATESERVICEREQUEST__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
