#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MapSpaceType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int WorldDataConfigRow___O_TypeDefinitionIndex = 13267;

	class WorldDataConfigRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapSpaceType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MapSpaceType>**)Il2CppClass::FromTypeDefinitionIndex(WorldDataConfigRow___O_TypeDefinitionIndex)->GetStaticField(0x138C0);
		}
	};
}
