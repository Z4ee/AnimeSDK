#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleScoringDisplayType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleScoringConfigRow___O_TypeDefinitionIndex = 11763;

	class BattleScoringConfigRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleScoringDisplayType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleScoringDisplayType>**)Il2CppClass::FromTypeDefinitionIndex(BattleScoringConfigRow___O_TypeDefinitionIndex)->GetStaticField(0x230C0);
		}
	};
}
