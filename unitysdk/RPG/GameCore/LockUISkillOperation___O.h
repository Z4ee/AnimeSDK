#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockUISkillOperation___O_TypeDefinitionIndex = 21855;

	class LockUISkillOperation___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ControlSkillType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ControlSkillType>**)Il2CppClass::FromTypeDefinitionIndex(LockUISkillOperation___O_TypeDefinitionIndex)->GetStaticField(0x269E0);
		}
	};
}
