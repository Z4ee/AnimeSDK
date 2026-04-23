#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelFeatureType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelFloorInfo___O_TypeDefinitionIndex = 16465;

	class LevelFloorInfo___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelFeatureType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::LevelFeatureType>**)Il2CppClass::FromTypeDefinitionIndex(LevelFloorInfo___O_TypeDefinitionIndex)->GetStaticField(0x40160);
		}
	};
}
