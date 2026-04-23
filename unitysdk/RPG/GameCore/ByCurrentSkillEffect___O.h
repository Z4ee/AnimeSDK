#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentSkillEffect___O_TypeDefinitionIndex = 21944;

	class ByCurrentSkillEffect___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillEffect>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillEffect>**)Il2CppClass::FromTypeDefinitionIndex(ByCurrentSkillEffect___O_TypeDefinitionIndex)->GetStaticField(0x310B0);
		}
	};
}
