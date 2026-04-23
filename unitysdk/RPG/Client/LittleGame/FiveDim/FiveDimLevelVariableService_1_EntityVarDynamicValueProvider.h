#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_1_5F08A88160B0E2D6;
class Class_1_BFC94D6B3CE54520;

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimLevelVariableService_1_EntityVarDynamicValueProvider_TypeDefinitionIndex = 70597;

	template <typename TEntity>
	class FiveDimLevelVariableService_1_EntityVarDynamicValueProvider : public ::System::Object
	{
	public:
		::Class_1_BFC94D6B3CE54520* _LevelVariableCollection; // 0x0
		::Class_1_5F08A88160B0E2D6* _EntityVarRuntime; // 0x0
	};
}
