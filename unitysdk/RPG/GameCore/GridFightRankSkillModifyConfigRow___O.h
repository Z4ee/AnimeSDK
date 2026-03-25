#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRankSkillModifyConfigRow___O_TypeDefinitionIndex = 12348;

	class GridFightRankSkillModifyConfigRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifyCalcOpType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifyCalcOpType>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRankSkillModifyConfigRow___O_TypeDefinitionIndex)->GetStaticField(0x22750);
		}
	};
}
