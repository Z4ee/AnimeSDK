#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueDLCBlockType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueChestGridItem___O_TypeDefinitionIndex = 17005;

	class RogueChestGridItem___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueDLCBlockType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RogueDLCBlockType>**)Il2CppClass::FromTypeDefinitionIndex(RogueChestGridItem___O_TypeDefinitionIndex)->GetStaticField(0x42760);
		}
	};
}
