#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int RealtimeConst___O_TypeDefinitionIndex = 16753;

	class RealtimeConst___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBehaviorFlag>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(RealtimeConst___O_TypeDefinitionIndex)->GetStaticField(0x3EE20);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtCharacterState>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtCharacterState>**)Il2CppClass::FromTypeDefinitionIndex(RealtimeConst___O_TypeDefinitionIndex)->GetStaticField(0x3EE28);
		}
	};
}
