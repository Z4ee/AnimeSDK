#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_1_75E4C1FDC2086A0E;
class Class_1_ABF277A1ED07907B;

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimLevelVariableService_1_EntityVarDynamicValueProvider_TypeDefinitionIndex = 76890;

	template <typename TEntity>
	class FiveDimLevelVariableService_1_EntityVarDynamicValueProvider : public ::System::Object
	{
	public:
		::Class_1_ABF277A1ED07907B* _LevelVariableCollection; // 0x0
		::Class_1_75E4C1FDC2086A0E* _EntityVarRuntime; // 0x0
	};
}
