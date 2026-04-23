#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChestType.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int FindChestFuncDataRow___O_TypeDefinitionIndex = 12568;

	class FindChestFuncDataRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChestType>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ChestType>**)Il2CppClass::FromTypeDefinitionIndex(FindChestFuncDataRow___O_TypeDefinitionIndex)->GetStaticField(0x2F370);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameModeType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GameModeType>**)Il2CppClass::FromTypeDefinitionIndex(FindChestFuncDataRow___O_TypeDefinitionIndex)->GetStaticField(0x2F378);
		}
	};
}
