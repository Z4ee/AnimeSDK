#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ReadParamPosition.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillParamMapping___O_TypeDefinitionIndex = 16672;

	class SkillParamMapping___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ReadParamPosition>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ReadParamPosition>**)Il2CppClass::FromTypeDefinitionIndex(SkillParamMapping___O_TypeDefinitionIndex)->GetStaticField(0xF6C0);
		}
	};
}
