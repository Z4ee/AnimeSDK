#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageRegionCollection___O_TypeDefinitionIndex = 18225;

	class StageRegionCollection___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageRegionVisualState>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::StageRegionVisualState>**)Il2CppClass::FromTypeDefinitionIndex(StageRegionCollection___O_TypeDefinitionIndex)->GetStaticField(0x53930);
		}
	};
}
