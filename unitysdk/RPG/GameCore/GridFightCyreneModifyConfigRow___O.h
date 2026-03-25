#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCyreneModifyConfigRow___O_TypeDefinitionIndex = 12389;

	class GridFightCyreneModifyConfigRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifyCalcOpType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ModifyCalcOpType>**)Il2CppClass::FromTypeDefinitionIndex(GridFightCyreneModifyConfigRow___O_TypeDefinitionIndex)->GetStaticField(0x20FF0);
		}
	};
}
