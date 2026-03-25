#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1.h"

namespace RPG::GameCore { class GameComponentBase; }

#define RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0xA94E130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntity_GameComponentList_TypeDefinitionIndex = 43337;

	class GameEntity_GameComponentList : public ::System::Collections::Generic::List_1<::RPG::GameCore::GameComponentBase*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTLIST__CTOR_OFFSET))(this);
		}
	};
}
