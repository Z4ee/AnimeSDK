#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatModifierFlag.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatModifierConfig___O_TypeDefinitionIndex = 15227;

	class DiceCombatModifierConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DiceCombatModifierFlag>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DiceCombatModifierFlag>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatModifierConfig___O_TypeDefinitionIndex)->GetStaticField(0x33610);
		}
	};
}
