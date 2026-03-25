#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillLayoutKey.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackCrazyAIBehavior___O_TypeDefinitionIndex = 21885;

	class StackCrazyAIBehavior___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillLayoutKey>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillLayoutKey>**)Il2CppClass::FromTypeDefinitionIndex(StackCrazyAIBehavior___O_TypeDefinitionIndex)->GetStaticField(0x118A0);
		}
	};
}
