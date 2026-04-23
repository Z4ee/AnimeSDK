#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONClass; }
namespace SimpleJSON { class JSONData; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_ALLOCATEJSONDATA_OFFSET UNITYSDK_OFFSET(0xA42BB80)
#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_EXCHANGEJSONDATA_OFFSET UNITYSDK_OFFSET(0xA42BCB0)
#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_INITJSONDATAPOOL_OFFSET UNITYSDK_OFFSET(0xA42B9C0)
#define RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_RECYCLEJSONDATA_OFFSET UNITYSDK_OFFSET(0xA42E780)

namespace RPG::Client::GameStateService
{
	inline static constexpr unsigned int AndroidGameStateServiceManager_JsonSupport_TypeDefinitionIndex = 69685;

	class AndroidGameStateServiceManager_JsonSupport : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Queue_1<::SimpleJSON::JSONData*>** StaticGet__stringJsonNodePool()
		{
			return (::System::Collections::Generic::Queue_1<::SimpleJSON::JSONData*>**)Il2CppClass::FromTypeDefinitionIndex(AndroidGameStateServiceManager_JsonSupport_TypeDefinitionIndex)->GetStaticField(0x170C0);
		}

		static ::System::Void InitJsonDataPool()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_INITJSONDATAPOOL_OFFSET))();
		}

		static ::SimpleJSON::JSONData* AllocateJsonData()
		{
			return ((::SimpleJSON::JSONData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_ALLOCATEJSONDATA_OFFSET))();
		}

		static ::System::Void RecycleJsonData(::SimpleJSON::JSONData* node)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_RECYCLEJSONDATA_OFFSET))(node);
		}

		static ::System::Void ExchangeJsonData(::SimpleJSON::JSONClass* sourceJsonClass, ::SimpleJSON::JSONClass* targetJsonClass)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONClass*, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMESTATESERVICE_ANDROIDGAMESTATESERVICEMANAGER_JSONSUPPORT_EXCHANGEJSONDATA_OFFSET))(sourceJsonClass, targetJsonClass);
		}
	};
}
