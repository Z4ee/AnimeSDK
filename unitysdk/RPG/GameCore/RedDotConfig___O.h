#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RedDotGroupType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int RedDotConfig___O_TypeDefinitionIndex = 23440;

	class RedDotConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RedDotGroupType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RedDotGroupType>**)Il2CppClass::FromTypeDefinitionIndex(RedDotConfig___O_TypeDefinitionIndex)->GetStaticField(0x3F1D0);
		}
	};
}
