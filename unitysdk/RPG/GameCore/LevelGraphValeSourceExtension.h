#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_71ECD705C8627A9D;
namespace RPG::GameCore { class LevelGraphValueSource; }

#define RPG_GAMECORE_LEVELGRAPHVALESOURCEEXTENSION_WRITETOCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x1DD26250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGraphValeSourceExtension_TypeDefinitionIndex = 57923;

	class LevelGraphValeSourceExtension : public ::System::Object
	{
	public:
		static ::System::Void WriteToCustomData(::RPG::GameCore::LevelGraphValueSource* a1, ::Class_2_71ECD705C8627A9D* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::LevelGraphValueSource*, ::Class_2_71ECD705C8627A9D*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHVALESOURCEEXTENSION_WRITETOCUSTOMDATA_OFFSET))(a1, a2);
		}
	};
}
