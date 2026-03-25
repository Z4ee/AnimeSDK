#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityScoreType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityScoreConfig___O_TypeDefinitionIndex = 15176;

	class EntityScoreConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityScoreType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityScoreType>**)Il2CppClass::FromTypeDefinitionIndex(EntityScoreConfig___O_TypeDefinitionIndex)->GetStaticField(0x2C520);
		}
	};
}
