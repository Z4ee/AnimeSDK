#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleConst___O_TypeDefinitionIndex = 17143;

	class RtBattleConst___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtAbilityProperty>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::RtAbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(RtBattleConst___O_TypeDefinitionIndex)->GetStaticField(0x49EA0);
		}
	};
}
