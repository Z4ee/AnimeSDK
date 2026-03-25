#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMuteModifierEventSource___O_TypeDefinitionIndex = 21704;

	class TargetMuteModifierEventSource___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TurnBasedModifierEvent>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::TurnBasedModifierEvent>**)Il2CppClass::FromTypeDefinitionIndex(TargetMuteModifierEventSource___O_TypeDefinitionIndex)->GetStaticField(0x14030);
		}
	};
}
