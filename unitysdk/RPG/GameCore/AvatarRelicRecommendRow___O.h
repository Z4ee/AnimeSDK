#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarRelicRecommendRow___O_TypeDefinitionIndex = 11651;

	class AvatarRelicRecommendRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarPropertyType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::AvatarPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(AvatarRelicRecommendRow___O_TypeDefinitionIndex)->GetStaticField(0x20700);
		}
	};
}
