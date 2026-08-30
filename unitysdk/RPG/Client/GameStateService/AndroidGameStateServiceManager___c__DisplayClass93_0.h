#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::GameStateService { class AndroidGameStateServiceManager; }
namespace SimpleJSON { class JSONClass; }
namespace System::Threading::Tasks { class Task; }

#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER___C__DISPLAYCLASS93_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD999F0)
#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER___C__DISPLAYCLASS93_0__SENDGAMESTATEINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1AD99A00)
#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER___C__DISPLAYCLASS93_0__SENDGAMESTATEINFO_B__1_OFFSET UNITYSDK_OFFSET(0x1AD99A60)

namespace RPG::Client::GameStateService
{
	inline static constexpr unsigned int AndroidGameStateServiceManager___c__DisplayClass93_0_TypeDefinitionIndex = 75330;

	class AndroidGameStateServiceManager___c__DisplayClass93_0 : public ::System::Object
	{
	public:
		::SimpleJSON::JSONClass* jsonClass; // 0x10
		::RPG::Client::GameStateService::AndroidGameStateServiceManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER___C__DISPLAYCLASS93_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendGameStateInfo_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER___C__DISPLAYCLASS93_0__SENDGAMESTATEINFO_B__0_OFFSET))(this);
		}

		::System::Void _SendGameStateInfo_b__1(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER___C__DISPLAYCLASS93_0__SENDGAMESTATEINFO_B__1_OFFSET))(this, a1);
		}
	};
}
