#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_90C3FAB661E5C263;
namespace RPG::GameCore { class LevelGraphValueSource; }

#define RPG_GAMECORE_LEVELGRAPHVALESOURCEEXTENSION_WRITETOCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xB6DA160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGraphValeSourceExtension_TypeDefinitionIndex = 53268;

	class LevelGraphValeSourceExtension : public ::System::Object
	{
	public:
		static ::System::Void WriteToCustomData(::RPG::GameCore::LevelGraphValueSource* self, ::Class_2_90C3FAB661E5C263* pCollection)
		{
			return ((::System::Void(*)(::RPG::GameCore::LevelGraphValueSource*, ::Class_2_90C3FAB661E5C263*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALESOURCEEXTENSION_WRITETOCUSTOMDATA_OFFSET))(self, pCollection);
		}
	};
}
