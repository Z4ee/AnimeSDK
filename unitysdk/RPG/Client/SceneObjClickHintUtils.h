#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoSceneObjClickHint; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SCENEOBJCLICKHINTUTILS_GETSCENESELECTIONREGISTEREDPROPMONOS_OFFSET UNITYSDK_OFFSET(0xC8A43A0)
#define RPG_CLIENT_SCENEOBJCLICKHINTUTILS_RESETPROPRUNTIMESTATUS_OFFSET UNITYSDK_OFFSET(0xC8A4730)

namespace RPG::Client
{
	inline static constexpr unsigned int SceneObjClickHintUtils_TypeDefinitionIndex = 68322;

	class SceneObjClickHintUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::MonoSceneObjClickHint*>* GetSceneSelectionRegisteredPropMonos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoSceneObjClickHint*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENEOBJCLICKHINTUTILS_GETSCENESELECTIONREGISTEREDPROPMONOS_OFFSET))();
		}

		static ::System::Void ResetPropRuntimeStatus(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENEOBJCLICKHINTUTILS_RESETPROPRUNTIMESTATUS_OFFSET))(a1);
		}
	};
}
