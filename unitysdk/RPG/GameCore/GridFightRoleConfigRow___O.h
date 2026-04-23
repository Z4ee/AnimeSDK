#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightChargeType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleConfigRow___O_TypeDefinitionIndex = 12765;

	class GridFightRoleConfigRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GridFightChargeType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GridFightChargeType>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleConfigRow___O_TypeDefinitionIndex)->GetStaticField(0x3C7A0);
		}
	};
}
