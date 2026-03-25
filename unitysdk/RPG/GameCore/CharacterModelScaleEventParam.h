#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_CHARACTERMODELSCALEEVENTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA8B8BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterModelScaleEventParam_TypeDefinitionIndex = 44301;

	class CharacterModelScaleEventParam : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x10
		::System::Single ModelScale; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERMODELSCALEEVENTPARAM__CTOR_OFFSET))(this);
		}
	};
}
