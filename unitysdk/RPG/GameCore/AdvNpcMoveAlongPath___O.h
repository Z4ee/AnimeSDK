#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcMoveAlongPath___O_TypeDefinitionIndex = 19277;

	class AdvNpcMoveAlongPath___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterMotionFlag>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::CharacterMotionFlag>**)Il2CppClass::FromTypeDefinitionIndex(AdvNpcMoveAlongPath___O_TypeDefinitionIndex)->GetStaticField(0x5240);
		}
	};
}
