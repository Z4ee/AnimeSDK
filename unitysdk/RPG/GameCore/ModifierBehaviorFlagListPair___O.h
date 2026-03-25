#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierBehaviorFlagListPair___O_TypeDefinitionIndex = 15673;

	class ModifierBehaviorFlagListPair___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierBehaviorFlag>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifierBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(ModifierBehaviorFlagListPair___O_TypeDefinitionIndex)->GetStaticField(0x2BB60);
		}
	};
}
