#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2.h"

namespace RPG::GameCore { class GameComponentBase; }

#define RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0xCE05D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntity_GameComponentDictionary_TypeDefinitionIndex = 50004;

	class GameEntity_GameComponentDictionary : public ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::GameComponentBase*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTDICTIONARY__CTOR_OFFSET))(this);
		}
	};
}
