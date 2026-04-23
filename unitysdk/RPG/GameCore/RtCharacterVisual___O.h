#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtCharacterVisual___O_TypeDefinitionIndex = 23085;

	class RtCharacterVisual___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBehaviorFlag>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(RtCharacterVisual___O_TypeDefinitionIndex)->GetStaticField(0x4A3A0);
		}
	};
}
