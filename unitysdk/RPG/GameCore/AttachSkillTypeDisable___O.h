#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachSkillTypeDisable___O_TypeDefinitionIndex = 21847;

	class AttachSkillTypeDisable___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ControlSkillType>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ControlSkillType>**)Il2CppClass::FromTypeDefinitionIndex(AttachSkillTypeDisable___O_TypeDefinitionIndex)->GetStaticField(0x1FBE0);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::SkillType>**)Il2CppClass::FromTypeDefinitionIndex(AttachSkillTypeDisable___O_TypeDefinitionIndex)->GetStaticField(0x1FBE8);
		}
	};
}
