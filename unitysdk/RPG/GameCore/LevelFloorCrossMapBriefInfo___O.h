#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelFeatureType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelFloorCrossMapBriefInfo___O_TypeDefinitionIndex = 16281;

	class LevelFloorCrossMapBriefInfo___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelFeatureType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelFeatureType>**)Il2CppClass::FromTypeDefinitionIndex(LevelFloorCrossMapBriefInfo___O_TypeDefinitionIndex)->GetStaticField(0x40150);
		}
	};
}
