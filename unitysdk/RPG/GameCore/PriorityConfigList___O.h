#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtModifierEvent.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int PriorityConfigList___O_TypeDefinitionIndex = 16219;

	class PriorityConfigList___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtModifierEvent>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtModifierEvent>**)Il2CppClass::FromTypeDefinitionIndex(PriorityConfigList___O_TypeDefinitionIndex)->GetStaticField(0x3CFF0);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TurnBasedModifierEvent>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TurnBasedModifierEvent>**)Il2CppClass::FromTypeDefinitionIndex(PriorityConfigList___O_TypeDefinitionIndex)->GetStaticField(0x3CFF8);
		}
	};
}
