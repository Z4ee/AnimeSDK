#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONClass; }
namespace SimpleJSON { class JSONData; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_ALLOCATEJSONDATA_OFFSET UNITYSDK_OFFSET(0xD1116E0)
#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_EXCHANGEJSONDATA_OFFSET UNITYSDK_OFFSET(0xD111810)
#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_INITJSONDATAPOOL_OFFSET UNITYSDK_OFFSET(0xD111530)
#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_RECYCLEJSONDATA_OFFSET UNITYSDK_OFFSET(0xD115E90)

namespace RPG::Client::GameStateService
{
	inline static constexpr unsigned int AndroidGameStateServiceManager_JsonSupport_TypeDefinitionIndex = 75327;

	class AndroidGameStateServiceManager_JsonSupport : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Queue_1<::SimpleJSON::JSONData*>** StaticGet__stringJsonNodePool()
		{
			return (::System::Collections::Generic::Queue_1<::SimpleJSON::JSONData*>**)Il2CppClass::FromTypeDefinitionIndex(AndroidGameStateServiceManager_JsonSupport_TypeDefinitionIndex)->GetStaticField(0x1D890);
		}

		static ::System::Void InitJsonDataPool()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_INITJSONDATAPOOL_OFFSET))();
		}

		static ::SimpleJSON::JSONData* AllocateJsonData()
		{
			return ((::SimpleJSON::JSONData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_ALLOCATEJSONDATA_OFFSET))();
		}

		static ::System::Void RecycleJsonData(::SimpleJSON::JSONData* a1)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_RECYCLEJSONDATA_OFFSET))(a1);
		}

		static ::System::Void ExchangeJsonData(::SimpleJSON::JSONClass* a1, ::SimpleJSON::JSONClass* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONClass*, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_EXCHANGEJSONDATA_OFFSET))(a1, a2);
		}
	};
}
