#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChestType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeChestRow___O_TypeDefinitionIndex = 13178;

	class MazeChestRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChestType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChestType>**)Il2CppClass::FromTypeDefinitionIndex(MazeChestRow___O_TypeDefinitionIndex)->GetStaticField(0x28FB0);
		}
	};
}
