#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitSkillInput___O_TypeDefinitionIndex = 19133;

	class WaitSkillInput___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureSkillType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AdventureSkillType>**)Il2CppClass::FromTypeDefinitionIndex(WaitSkillInput___O_TypeDefinitionIndex)->GetStaticField(0x13680);
		}
	};
}
